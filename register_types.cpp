#include "register_types.h"

#include "touch_button.h"
#include "mesh_data_resource.h"

#ifdef TOOLS_ENABLED
#include "editor/editor_plugin.h"

#include "editor_plugin_collada_mdr.h"
#endif

void register_ui_extensions_types() {
	ClassDB::register_class<TouchButton>();
	ClassDB::register_class<MeshDataResource>();

	#ifdef TOOLS_ENABLED
	//ClassDB::register_class<EditorPluginColladaMdr>();

	//EditorPlugins::add_by_type<EditorPluginColladaMdr>();
	#endif
}	

void unregister_ui_extensions_types() {

}

