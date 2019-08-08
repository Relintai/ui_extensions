#include "register_types.h"

#include "touch_button.h"
#include "bs_input_event_key.h"

void register_ui_extensions_types() {
	ClassDB::register_class<TouchButton>();
	ClassDB::register_class<BSInputEventKey>();
}	

void unregister_ui_extensions_types() {

}

