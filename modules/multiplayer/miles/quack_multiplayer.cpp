#include quack_multiplayer.h
bool QuackMultiplayer::register_scene(String path, int idx) {
	
}
void QuackMultiplayer::register_scenes() {
	
}
PackedStringArray QuackMultiplayer::get_scene_paths(String path) {
	
}
void QuackMultiplayer::register_all_scripts() {
	
}
void QuackMultiplayer::add_networked_property(Dictionary property_info, Array property_names, PackedByteArray property_types) {
	
}
bool QuackMultiplayer::is_script_predicted(Script script) {
	
}
int QuackMultiplayer::get_net_var_type(Dictionary property_info) {
	
}
int QuackMultiplayer::get_property_type(String name, int type) {
	
}
int QuackMultiplayer::get_int_type(String name) {
	
}
int QuackMultiplayer::get_float_type(String name) {
	
}
bool QuackMultiplayer::is_script_variable(Dictionary property_info) {
	
}
bool QuackMultiplayer::is_net_updated_this_frame(Dictionary property_info) {
	
}
bool QuackMultiplayer::is_valid_net_var(Dictionary property_info) {
	
}
void QuackMultiplayer::set_node_position_on_ready(Node3d node, Vector3 position) {
	
}
void QuackMultiplayer::set_node_position_on_tree_entered(Node3d node, Vector3 position) {
	
}
void QuackMultiplayer::set_node_rotation_on_ready(Node3d node, Vector3 rotation) {
	
}
void QuackMultiplayer::set_node_rotation_on_tree_entered(Node3d node, Vector3 rotation) {
	
}
void QuackMultiplayer::set_node_transform_on_ready(Node3d node, Vector3 position, Vector3 rotation) {
	
}
void QuackMultiplayer::set_node_transform_on_tree_entered(Node3d node, Vector3 position, Vector3 rotation) {
	
}
int QuackMultiplayer::get_net_type(int type) {
	
}
bool QuackMultiplayer::is_int_type(int type) {
	
}
bool QuackMultiplayer::is_float_type(int type) {
	
}
bool QuackMultiplayer::is_non_numerical(int type) {
	
}
int QuackMultiplayer::get_property_size_by_type(int type) {
	
}
void QuackMultiplayer::_bind_methods(){
ClassDB::bind_method(D_METHOD("register_scene", "path", "idx"), &QuackMultiplayer::register_scene);
ClassDB::bind_method(D_METHOD("register_scenes"), &QuackMultiplayer::register_scenes);
ClassDB::bind_method(D_METHOD("get_scene_paths", "path"), &QuackMultiplayer::get_scene_paths);
ClassDB::bind_method(D_METHOD("register_all_scripts"), &QuackMultiplayer::register_all_scripts);
ClassDB::bind_method(D_METHOD("add_networked_property", "property_info", "property_names", "property_types"), &QuackMultiplayer::add_networked_property);
ClassDB::bind_method(D_METHOD("is_script_predicted", "script"), &QuackMultiplayer::is_script_predicted);
ClassDB::bind_method(D_METHOD("get_net_var_type", "property_info"), &QuackMultiplayer::get_net_var_type);
ClassDB::bind_method(D_METHOD("get_property_type", "name", "type"), &QuackMultiplayer::get_property_type);
ClassDB::bind_method(D_METHOD("get_int_type", "name"), &QuackMultiplayer::get_int_type);
ClassDB::bind_method(D_METHOD("get_float_type", "name"), &QuackMultiplayer::get_float_type);
ClassDB::bind_method(D_METHOD("is_script_variable", "property_info"), &QuackMultiplayer::is_script_variable);
ClassDB::bind_method(D_METHOD("is_net_updated_this_frame", "property_info"), &QuackMultiplayer::is_net_updated_this_frame);
ClassDB::bind_method(D_METHOD("is_valid_net_var", "property_info"), &QuackMultiplayer::is_valid_net_var);
ClassDB::bind_method(D_METHOD("set_node_position_on_ready", "node", "position"), &QuackMultiplayer::set_node_position_on_ready);
ClassDB::bind_method(D_METHOD("set_node_position_on_tree_entered", "node", "position"), &QuackMultiplayer::set_node_position_on_tree_entered);
ClassDB::bind_method(D_METHOD("set_node_rotation_on_ready", "node", "rotation"), &QuackMultiplayer::set_node_rotation_on_ready);
ClassDB::bind_method(D_METHOD("set_node_rotation_on_tree_entered", "node", "rotation"), &QuackMultiplayer::set_node_rotation_on_tree_entered);
ClassDB::bind_method(D_METHOD("set_node_transform_on_ready", "node", "position", "rotation"), &QuackMultiplayer::set_node_transform_on_ready);
ClassDB::bind_method(D_METHOD("set_node_transform_on_tree_entered", "node", "position", "rotation"), &QuackMultiplayer::set_node_transform_on_tree_entered);
ClassDB::bind_method(D_METHOD("get_net_type", "type"), &QuackMultiplayer::get_net_type);
ClassDB::bind_method(D_METHOD("is_int_type", "type"), &QuackMultiplayer::is_int_type);
ClassDB::bind_method(D_METHOD("is_float_type", "type"), &QuackMultiplayer::is_float_type);
ClassDB::bind_method(D_METHOD("is_non_numerical", "type"), &QuackMultiplayer::is_non_numerical);
ClassDB::bind_method(D_METHOD("get_property_size_by_type", "type"), &QuackMultiplayer::get_property_size_by_type);
BIND_ENUM_CONSTANT(TYPE_NIL);
BIND_ENUM_CONSTANT(TYPE_INT);
BIND_ENUM_CONSTANT(INT_FLAG);
BIND_ENUM_CONSTANT(TYPE_FLOAT);
BIND_ENUM_CONSTANT(FLOAT_FLAG);
BIND_ENUM_CONSTANT(TYPE_BOOL);
BIND_ENUM_CONSTANT(TYPE_STRING);
BIND_ENUM_CONSTANT(TYPE_VECTOR2);
BIND_ENUM_CONSTANT(TYPE_VECTOR2I);
BIND_ENUM_CONSTANT(TYPE_RECT2);
BIND_ENUM_CONSTANT(TYPE_RECT2I);
BIND_ENUM_CONSTANT(TYPE_VECTOR3);
BIND_ENUM_CONSTANT(TYPE_VECTOR3I);
BIND_ENUM_CONSTANT(TYPE_TRANSFORM2D);
BIND_ENUM_CONSTANT(TYPE_VECTOR4);
BIND_ENUM_CONSTANT(TYPE_VECTOR4I);
BIND_ENUM_CONSTANT(TYPE_PLANE);
BIND_ENUM_CONSTANT(TYPE_QUATERNION);
BIND_ENUM_CONSTANT(TYPE_QUAT);
BIND_ENUM_CONSTANT(TYPE_BASIS);
BIND_ENUM_CONSTANT(TYPE_TRANSFORM3D);
BIND_ENUM_CONSTANT(TYPE_PROJECTION);
BIND_ENUM_CONSTANT(TYPE_COLOR);
BIND_ENUM_CONSTANT(TYPE_COLORI);
BIND_ENUM_CONSTANT(TYPE_STRING_NAME);
BIND_ENUM_CONSTANT(TYPE_NODE_PATH);
BIND_ENUM_CONSTANT(TYPE_RID);
BIND_ENUM_CONSTANT(TYPE_OBJECT);
BIND_ENUM_CONSTANT(TYPE_CALLABLE);
BIND_ENUM_CONSTANT(TYPE_SIGNAL);
BIND_ENUM_CONSTANT(TYPE_DICTIONARY);
BIND_ENUM_CONSTANT(TYPE_DICT);
BIND_ENUM_CONSTANT(TYPE_ARRAY);
BIND_ENUM_CONSTANT(TYPE_PACKED_BYTE_ARRAY);
BIND_ENUM_CONSTANT(TYPE_PACKED_INT32_ARRAY);
BIND_ENUM_CONSTANT(TYPE_PACKED_INT64_ARRAY);
BIND_ENUM_CONSTANT(TYPE_PACKED_FLOAT32_ARRAY);
BIND_ENUM_CONSTANT(TYPE_PACKED_FLOAT64_ARRAY);
BIND_ENUM_CONSTANT(TYPE_PACKED_STRING_ARRAY);
BIND_ENUM_CONSTANT(TYPE_PACKED_VECTOR2_ARRAY);
BIND_ENUM_CONSTANT(TYPE_PACKED_VECTOR3_ARRAY);
BIND_ENUM_CONSTANT(TYPE_PACKED_COLOR_ARRAY);
BIND_ENUM_CONSTANT(TYPE_PACKED_VECTOR4_ARRAY);
BIND_ENUM_CONSTANT(TYPE_U8);
BIND_ENUM_CONSTANT(TYPE_S8);
BIND_ENUM_CONSTANT(TYPE_U16);
BIND_ENUM_CONSTANT(TYPE_S16);
BIND_ENUM_CONSTANT(TYPE_U32);
BIND_ENUM_CONSTANT(TYPE_S32);
BIND_ENUM_CONSTANT(TYPE_U64);
BIND_ENUM_CONSTANT(TYPE_S64);
BIND_ENUM_CONSTANT(TYPE_UDYNAMIC);
BIND_ENUM_CONSTANT(TYPE_SDYNAMIC);
BIND_ENUM_CONSTANT(TYPE_DOUBLE);
BIND_ENUM_CONSTANT(TYPE_HALF);
BIND_ENUM_CONSTANT(TYPE_ENUM);

}