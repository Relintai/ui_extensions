#ifndef BS_INPUT_EVENT_KEY_H
#define BS_INPUT_EVENT_KEY_H

#include "core/os/input_event.h"

class BSInputEventKey : public InputEventKey {
	GDCLASS(BSInputEventKey, InputEventKey);

public:
	void from_input_event_key(const Ref<InputEventKey> p_event);
	virtual bool action_match(const Ref<InputEvent> &p_event, bool *p_pressed, float *p_strength, float p_deadzone) const;

	BSInputEventKey();

protected:
	static void _bind_methods();
};

#endif
