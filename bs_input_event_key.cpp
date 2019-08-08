#include "bs_input_event_key.h"

void BSInputEventKey::from_input_event_key(const Ref<InputEventKey> event) {
	set_device(event->get_device());

	set_shift(event->get_shift());
	set_alt(event->get_alt());
	set_control(event->get_control());
	set_metakey(event->get_metakey());
	set_command(event->get_command());

	set_pressed(event->is_pressed());
	set_scancode(event->get_scancode());
	set_unicode(event->get_unicode());
	set_echo(event->is_echo());
}

bool BSInputEventKey::action_match(const Ref<InputEvent> &p_event, bool *p_pressed, float *p_strength, float p_deadzone) const {

	Ref<InputEventKey> key = p_event;
	if (key.is_null())
		return false;

	uint32_t code = get_scancode_with_modifiers();
	uint32_t event_code = key->get_scancode_with_modifiers();

	bool match = code == event_code;
	if (match) {
		if (p_pressed != NULL)
			*p_pressed = key->is_pressed();
		if (p_strength != NULL)
			*p_strength = (p_pressed != NULL && *p_pressed) ? 1.0f : 0.0f;
	}
	return match;
}

BSInputEventKey::BSInputEventKey() {
}

void BSInputEventKey::_bind_methods() {
	ClassDB::bind_method(D_METHOD("from_input_event_key", "event"), &BSInputEventKey::from_input_event_key);
}
