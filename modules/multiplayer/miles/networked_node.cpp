#include "networked_node.h"
NetworkedNode::NetworkedNode(){
	
}
NetworkedNode::~NetworkedNode(){
	
}
String NetworkedNode::_to_string() {
	
}
void NetworkedNode::_init() {
	
}
void NetworkedNode::setup() {
	
}
String NetworkedNode::get_function_declaration(String function_name, String function_body, bool indent) {
	
}
void NetworkedNode::get_properties_by_type(Node node, Array array) {
	
}
void NetworkedNode::get_properties_by_type_hostile(Node node, Array array) {
	
}
void NetworkedNode::get_properties_by_type_teammate(Node node, Array array) {
	
}
void NetworkedNode::set_properties_by_type(Node node, Array array) {
	
}
void NetworkedNode::set_properties_by_type_hostile(Node node, Array array) {
	
}
void NetworkedNode::set_properties_by_type_teammate(Node node, Array array) {
	
}
void NetworkedNode::set_node_physical_properties(Node node, Array array) {
	
}
void NetworkedNode::encode_by_type(Array array, StreamPeerBitBuffer buffer) {
	
}
void NetworkedNode::encode_teammate_by_type(Array array, StreamPeerBitBuffer buffer) {
	
}
void NetworkedNode::encode_hostile_by_type(Array array, StreamPeerBitBuffer buffer) {
	
}
void NetworkedNode::decode_by_type(Array array, StreamPeerBitBuffer buffer) {
	
}
void NetworkedNode::decode_teammate_by_type(Array array, StreamPeerBitBuffer buffer) {
	
}
void NetworkedNode::decode_hostile_by_type(Array array, StreamPeerBitBuffer buffer) {
	
}
void NetworkedNode::encode_delta_array_by_type(Array current_properties, Array prev_properties, StreamPeerBitBuffer buffer) {
	
}
void NetworkedNode::encode_teammate_delta_array_by_type(Array current_properties, Array prev_properties, StreamPeerBitBuffer buffer) {
	
}
void NetworkedNode::encode_hostile_delta_array_by_type(Array current_properties, Array prev_properties, StreamPeerBitBuffer buffer) {
	
}
void NetworkedNode::decode_delta_array_by_type(Array array, StreamPeerBitBuffer buffer) {
	
}
void NetworkedNode::decode_teammate_delta_array_by_type(Array array, StreamPeerBitBuffer buffer) {
	
}
void NetworkedNode::decode_hostile_delta_array_by_type(Array array, StreamPeerBitBuffer buffer) {
	
}
void NetworkedNode::encode_object_by_type(Object object, StreamPeerBitBuffer buffer) {
	
}
void NetworkedNode::decode_object_by_type(Object object, StreamPeerBitBuffer buffer) {
	
}
String NetworkedNode::generate_script() {
	
}
Array NetworkedNode::get_full_property_list(Script script) {
	
}
Dictionary NetworkedNode::get_property_list_map(Script script) {
	
}
Dictionary NetworkedNode::get_property_list_map_by_base_type(StringName type) {
	
}
void NetworkedNode::apply_to_array(Object node, Array array) {
	
}
Array NetworkedNode::get_array() {
	
}
Array NetworkedNode::to_array(Object node) {
	
}
void NetworkedNode::from_array(Array array, Object node) {
	
}
void NetworkedNode::from_array_no_nulls(Array array, Object node) {
	
}
void NetworkedNode::from_array_interpolated(Array array, Object node, float weight) {
	
}
void NetworkedNode::interpolate(Array current_array, Array prev_array, Object node, float weight) {
	
}
void NetworkedNode::encode_node(Object node, StreamPeerBitBuffer buffer) {
	
}
void NetworkedNode::encode_owner_delta(StreamPeerBitBuffer buffer) {
	
}
void NetworkedNode::encode_owner_spawn(int uid, int scene_id, StreamPeerBitBuffer buffer) {
	
}
void NetworkedNode::encode_owner_delete(int uid, StreamPeerBitBuffer buffer) {
	
}
void NetworkedNode::encode_array(Array array, StreamPeerBitBuffer buffer, int vis_type) {
	
}
void NetworkedNode::encode_array_iter(Array array, StreamPeerBitBuffer buffer, PackedByteArray iter) {
	
}
void NetworkedNode::encode_delta_array(Array current, Array prev, StreamPeerBitBuffer buffer, int vis_type) {
	
}
void NetworkedNode::encode_delta_array_iter(Array current, Array prev, StreamPeerBitBuffer buffer, PackedByteArray iter) {
	
}
void NetworkedNode::decode(Object node, StreamPeerBitBuffer buffer) {
	
}
void NetworkedNode::decode_delta(Object node, StreamPeerBitBuffer buffer) {
	
}
void NetworkedNode::decode_array(Array array, StreamPeerBitBuffer buffer, int vis_type) {
	
}
void NetworkedNode::decode_array_iter(Array array, StreamPeerBitBuffer buffer, PackedByteArray iter) {
	
}
void NetworkedNode::decode_delta_array(Array array, StreamPeerBitBuffer buffer, int vis_type) {
	
}
void NetworkedNode::decode_delta_array_iter(Array array, StreamPeerBitBuffer buffer, PackedByteArray iter) {
	
}
static Dictionary NetworkedNode::get_types() {
	return types;
}
static void NetworkedNode::set_types(Dictionary p_types) {
	types = p_types;
}
bool NetworkedNode::get_ready() {
	return ready;
}
void NetworkedNode::set_ready(bool p_ready) {
	ready = p_ready;
}
bool NetworkedNode::get_owner() {
	return owner;
}
void NetworkedNode::set_owner(bool p_owner) {
	owner = p_owner;
}
String NetworkedNode::get_owner_scene_path() {
	return owner_scene_path;
}
void NetworkedNode::set_owner_scene_path(String p_owner_scene_path) {
	owner_scene_path = p_owner_scene_path;
}
int NetworkedNode::get_num_props() {
	return num_props;
}
void NetworkedNode::set_num_props(int p_num_props) {
	num_props = p_num_props;
}
Script NetworkedNode::get_source_script() {
	return source_script;
}
void NetworkedNode::set_source_script(Script p_source_script) {
	source_script = p_source_script;
}
StringName NetworkedNode::get_base_class() {
	return base_class;
}
void NetworkedNode::set_base_class(StringName p_base_class) {
	base_class = p_base_class;
}
Array NetworkedNode::get_properties() {
	return properties;
}
void NetworkedNode::set_properties(Array p_properties) {
	properties = p_properties;
}
PackedByteArray NetworkedNode::get_iter_all() {
	return iter_all;
}
void NetworkedNode::set_iter_all(PackedByteArray p_iter_all) {
	iter_all = p_iter_all;
}
PackedByteArray NetworkedNode::get_iter_owner_only() {
	return iter_owner_only;
}
void NetworkedNode::set_iter_owner_only(PackedByteArray p_iter_owner_only) {
	iter_owner_only = p_iter_owner_only;
}
PackedByteArray NetworkedNode::get_iter_team_only() {
	return iter_team_only;
}
void NetworkedNode::set_iter_team_only(PackedByteArray p_iter_team_only) {
	iter_team_only = p_iter_team_only;
}
PackedByteArray NetworkedNode::get_iter_physical() {
	return iter_physical;
}
void NetworkedNode::set_iter_physical(PackedByteArray p_iter_physical) {
	iter_physical = p_iter_physical;
}
Array NetworkedNode::get_iters() {
	return iters;
}
void NetworkedNode::set_iters(Array p_iters) {
	iters = p_iters;
}
Array NetworkedNode::get_iters_visible() {
	return iters_visible;
}
void NetworkedNode::set_iters_visible(Array p_iters_visible) {
	iters_visible = p_iters_visible;
}
Dictionary NetworkedNode::get_bitmask_map() {
	return bitmask_map;
}
void NetworkedNode::set_bitmask_map(Dictionary p_bitmask_map) {
	bitmask_map = p_bitmask_map;
}
bool NetworkedNode::get_is_fixed_size() {
	return is_fixed_size;
}
void NetworkedNode::set_is_fixed_size(bool p_is_fixed_size) {
	is_fixed_size = p_is_fixed_size;
}
int NetworkedNode::get_num_bools() {
	return num_bools;
}
void NetworkedNode::set_num_bools(int p_num_bools) {
	num_bools = p_num_bools;
}
int NetworkedNode::get_fixed_size_bytes() {
	return fixed_size_bytes;
}
void NetworkedNode::set_fixed_size_bytes(int p_fixed_size_bytes) {
	fixed_size_bytes = p_fixed_size_bytes;
}
GdScript NetworkedNode::get_type() {
	return type;
}
void NetworkedNode::set_type(GdScript p_type) {
	type = p_type;
}
Callable NetworkedNode::get_get_plist_func() {
	return get_plist_func;
}
void NetworkedNode::set_get_plist_func(Callable p_get_plist_func) {
	get_plist_func = p_get_plist_func;
}
Callable NetworkedNode::get_get_plist_short_func() {
	return get_plist_short_func;
}
void NetworkedNode::set_get_plist_short_func(Callable p_get_plist_short_func) {
	get_plist_short_func = p_get_plist_short_func;
}
void NetworkedNode::_bind_methods(){
ClassDB::bind_method(D_METHOD("_to_string"), &NetworkedNode::_to_string);
ClassDB::bind_method(D_METHOD("_init"), &NetworkedNode::_init);
ClassDB::bind_method(D_METHOD("setup"), &NetworkedNode::setup);
ClassDB::bind_static_method("NetworkedNode", D_METHOD("get_function_declaration", "function_name", "function_body", "indent"), &NetworkedNode::get_function_declaration, DEFVAL(false));
ClassDB::bind_method(D_METHOD("get_properties_by_type", "node", "array"), &NetworkedNode::get_properties_by_type);
ClassDB::bind_method(D_METHOD("get_properties_by_type_hostile", "node", "array"), &NetworkedNode::get_properties_by_type_hostile);
ClassDB::bind_method(D_METHOD("get_properties_by_type_teammate", "node", "array"), &NetworkedNode::get_properties_by_type_teammate);
ClassDB::bind_method(D_METHOD("set_properties_by_type", "node", "array"), &NetworkedNode::set_properties_by_type);
ClassDB::bind_method(D_METHOD("set_properties_by_type_hostile", "node", "array"), &NetworkedNode::set_properties_by_type_hostile);
ClassDB::bind_method(D_METHOD("set_properties_by_type_teammate", "node", "array"), &NetworkedNode::set_properties_by_type_teammate);
ClassDB::bind_method(D_METHOD("set_node_physical_properties", "node", "array"), &NetworkedNode::set_node_physical_properties);
ClassDB::bind_method(D_METHOD("encode_by_type", "array", "buffer"), &NetworkedNode::encode_by_type);
ClassDB::bind_method(D_METHOD("encode_teammate_by_type", "array", "buffer"), &NetworkedNode::encode_teammate_by_type);
ClassDB::bind_method(D_METHOD("encode_hostile_by_type", "array", "buffer"), &NetworkedNode::encode_hostile_by_type);
ClassDB::bind_method(D_METHOD("decode_by_type", "array", "buffer"), &NetworkedNode::decode_by_type);
ClassDB::bind_method(D_METHOD("decode_teammate_by_type", "array", "buffer"), &NetworkedNode::decode_teammate_by_type);
ClassDB::bind_method(D_METHOD("decode_hostile_by_type", "array", "buffer"), &NetworkedNode::decode_hostile_by_type);
ClassDB::bind_method(D_METHOD("encode_delta_array_by_type", "current_properties", "prev_properties", "buffer"), &NetworkedNode::encode_delta_array_by_type);
ClassDB::bind_method(D_METHOD("encode_teammate_delta_array_by_type", "current_properties", "prev_properties", "buffer"), &NetworkedNode::encode_teammate_delta_array_by_type);
ClassDB::bind_method(D_METHOD("encode_hostile_delta_array_by_type", "current_properties", "prev_properties", "buffer"), &NetworkedNode::encode_hostile_delta_array_by_type);
ClassDB::bind_method(D_METHOD("decode_delta_array_by_type", "array", "buffer"), &NetworkedNode::decode_delta_array_by_type);
ClassDB::bind_method(D_METHOD("decode_teammate_delta_array_by_type", "array", "buffer"), &NetworkedNode::decode_teammate_delta_array_by_type);
ClassDB::bind_method(D_METHOD("decode_hostile_delta_array_by_type", "array", "buffer"), &NetworkedNode::decode_hostile_delta_array_by_type);
ClassDB::bind_method(D_METHOD("encode_object_by_type", "object", "buffer"), &NetworkedNode::encode_object_by_type);
ClassDB::bind_method(D_METHOD("decode_object_by_type", "object", "buffer"), &NetworkedNode::decode_object_by_type);
ClassDB::bind_method(D_METHOD("generate_script"), &NetworkedNode::generate_script);
ClassDB::bind_static_method("NetworkedNode", D_METHOD("get_full_property_list", "script"), &NetworkedNode::get_full_property_list);
ClassDB::bind_static_method("NetworkedNode", D_METHOD("get_property_list_map", "script"), &NetworkedNode::get_property_list_map);
ClassDB::bind_static_method("NetworkedNode", D_METHOD("get_property_list_map_by_base_type", "type"), &NetworkedNode::get_property_list_map_by_base_type);
ClassDB::bind_method(D_METHOD("apply_to_array", "node", "array"), &NetworkedNode::apply_to_array);
ClassDB::bind_method(D_METHOD("get_array"), &NetworkedNode::get_array);
ClassDB::bind_method(D_METHOD("to_array", "node"), &NetworkedNode::to_array);
ClassDB::bind_method(D_METHOD("from_array", "array", "node"), &NetworkedNode::from_array);
ClassDB::bind_method(D_METHOD("from_array_no_nulls", "array", "node"), &NetworkedNode::from_array_no_nulls);
ClassDB::bind_method(D_METHOD("from_array_interpolated", "array", "node", "weight"), &NetworkedNode::from_array_interpolated);
ClassDB::bind_method(D_METHOD("interpolate", "current_array", "prev_array", "node", "weight"), &NetworkedNode::interpolate);
ClassDB::bind_method(D_METHOD("encode_node", "node", "buffer"), &NetworkedNode::encode_node);
ClassDB::bind_static_method("NetworkedNode", D_METHOD("encode_owner_delta", "buffer"), &NetworkedNode::encode_owner_delta);
ClassDB::bind_static_method("NetworkedNode", D_METHOD("encode_owner_spawn", "uid", "scene_id", "buffer"), &NetworkedNode::encode_owner_spawn);
ClassDB::bind_static_method("NetworkedNode", D_METHOD("encode_owner_delete", "uid", "buffer"), &NetworkedNode::encode_owner_delete);
ClassDB::bind_method(D_METHOD("encode_array", "array", "buffer", "vis_type"), &NetworkedNode::encode_array, DEFVAL(0));
ClassDB::bind_method(D_METHOD("encode_array_iter", "array", "buffer", "iter"), &NetworkedNode::encode_array_iter);
ClassDB::bind_method(D_METHOD("encode_delta_array", "current", "prev", "buffer", "vis_type"), &NetworkedNode::encode_delta_array, DEFVAL(0));
ClassDB::bind_method(D_METHOD("encode_delta_array_iter", "current", "prev", "buffer", "iter"), &NetworkedNode::encode_delta_array_iter);
ClassDB::bind_method(D_METHOD("decode", "node", "buffer"), &NetworkedNode::decode);
ClassDB::bind_method(D_METHOD("decode_delta", "node", "buffer"), &NetworkedNode::decode_delta);
ClassDB::bind_method(D_METHOD("decode_array", "array", "buffer", "vis_type"), &NetworkedNode::decode_array);
ClassDB::bind_method(D_METHOD("decode_array_iter", "array", "buffer", "iter"), &NetworkedNode::decode_array_iter);
ClassDB::bind_method(D_METHOD("decode_delta_array", "array", "buffer", "vis_type"), &NetworkedNode::decode_delta_array);
ClassDB::bind_method(D_METHOD("decode_delta_array_iter", "array", "buffer", "iter"), &NetworkedNode::decode_delta_array_iter);
ClassDB::bind_method(D_METHOD("set_types", "value"), &NetworkedNode::set_types);
ClassDB::bind_method(D_METHOD("get_types"), &NetworkedNode::get_types);
ADD_PROPERTY(PropertyInfo(Variant::DICTIONARY, "types", PropertyHint(38), "NetworkedNode;GDScript", 4096), "set_types", "get_types"); // unfinished and u should prolly change this
ClassDB::bind_method(D_METHOD("set_ready", "value"), &NetworkedNode::set_ready);
ClassDB::bind_method(D_METHOD("get_ready"), &NetworkedNode::get_ready);
ADD_PROPERTY(PropertyInfo(Variant::BOOL, "ready"), "set_ready", "get_ready"); // unfinished and u should prolly change this
ClassDB::bind_method(D_METHOD("set_owner", "value"), &NetworkedNode::set_owner);
ClassDB::bind_method(D_METHOD("get_owner"), &NetworkedNode::get_owner);
ADD_PROPERTY(PropertyInfo(Variant::BOOL, "owner"), "set_owner", "get_owner"); // unfinished and u should prolly change this
ClassDB::bind_method(D_METHOD("set_owner_scene_path", "value"), &NetworkedNode::set_owner_scene_path);
ClassDB::bind_method(D_METHOD("get_owner_scene_path"), &NetworkedNode::get_owner_scene_path);
ADD_PROPERTY(PropertyInfo(Variant::STRING, "owner_scene_path"), "set_owner_scene_path", "get_owner_scene_path"); // unfinished and u should prolly change this
ClassDB::bind_method(D_METHOD("set_num_props", "value"), &NetworkedNode::set_num_props);
ClassDB::bind_method(D_METHOD("get_num_props"), &NetworkedNode::get_num_props);
ADD_PROPERTY(PropertyInfo(Variant::INT, "num_props"), "set_num_props", "get_num_props"); // unfinished and u should prolly change this
ClassDB::bind_method(D_METHOD("set_source_script", "value"), &NetworkedNode::set_source_script);
ClassDB::bind_method(D_METHOD("get_source_script"), &NetworkedNode::get_source_script);
ADD_PROPERTY(PropertyInfo(Variant::OBJECT, "source_script", PropertyHint(17), "Script", 4102), "set_source_script", "get_source_script"); // unfinished and u should prolly change this
ClassDB::bind_method(D_METHOD("set_base_class", "value"), &NetworkedNode::set_base_class);
ClassDB::bind_method(D_METHOD("get_base_class"), &NetworkedNode::get_base_class);
ADD_PROPERTY(PropertyInfo(Variant::STRING_NAME, "base_class"), "set_base_class", "get_base_class"); // unfinished and u should prolly change this
ClassDB::bind_method(D_METHOD("set_properties", "value"), &NetworkedNode::set_properties);
ClassDB::bind_method(D_METHOD("get_properties"), &NetworkedNode::get_properties);
ADD_PROPERTY(PropertyInfo(Variant::ARRAY, "properties", PropertyHint(23), "24/17:Property", 4102), "set_properties", "get_properties"); // unfinished and u should prolly change this
ClassDB::bind_method(D_METHOD("set_iter_all", "value"), &NetworkedNode::set_iter_all);
ClassDB::bind_method(D_METHOD("get_iter_all"), &NetworkedNode::get_iter_all);
ADD_PROPERTY(PropertyInfo(Variant::PACKED_BYTE_ARRAY, "iter_all"), "set_iter_all", "get_iter_all"); // unfinished and u should prolly change this
ClassDB::bind_method(D_METHOD("set_iter_owner_only", "value"), &NetworkedNode::set_iter_owner_only);
ClassDB::bind_method(D_METHOD("get_iter_owner_only"), &NetworkedNode::get_iter_owner_only);
ADD_PROPERTY(PropertyInfo(Variant::PACKED_BYTE_ARRAY, "iter_owner_only"), "set_iter_owner_only", "get_iter_owner_only"); // unfinished and u should prolly change this
ClassDB::bind_method(D_METHOD("set_iter_team_only", "value"), &NetworkedNode::set_iter_team_only);
ClassDB::bind_method(D_METHOD("get_iter_team_only"), &NetworkedNode::get_iter_team_only);
ADD_PROPERTY(PropertyInfo(Variant::PACKED_BYTE_ARRAY, "iter_team_only"), "set_iter_team_only", "get_iter_team_only"); // unfinished and u should prolly change this
ClassDB::bind_method(D_METHOD("set_iter_physical", "value"), &NetworkedNode::set_iter_physical);
ClassDB::bind_method(D_METHOD("get_iter_physical"), &NetworkedNode::get_iter_physical);
ADD_PROPERTY(PropertyInfo(Variant::PACKED_BYTE_ARRAY, "iter_physical"), "set_iter_physical", "get_iter_physical"); // unfinished and u should prolly change this
ClassDB::bind_method(D_METHOD("set_iters", "value"), &NetworkedNode::set_iters);
ClassDB::bind_method(D_METHOD("get_iters"), &NetworkedNode::get_iters);
ADD_PROPERTY(PropertyInfo(Variant::ARRAY, "iters", PropertyHint(31), "PackedByteArray", 4096), "set_iters", "get_iters"); // unfinished and u should prolly change this
ClassDB::bind_method(D_METHOD("set_iters_visible", "value"), &NetworkedNode::set_iters_visible);
ClassDB::bind_method(D_METHOD("get_iters_visible"), &NetworkedNode::get_iters_visible);
ADD_PROPERTY(PropertyInfo(Variant::ARRAY, "iters_visible", PropertyHint(31), "bool", 4096), "set_iters_visible", "get_iters_visible"); // unfinished and u should prolly change this
ClassDB::bind_method(D_METHOD("set_bitmask_map", "value"), &NetworkedNode::set_bitmask_map);
ClassDB::bind_method(D_METHOD("get_bitmask_map"), &NetworkedNode::get_bitmask_map);
ADD_PROPERTY(PropertyInfo(Variant::DICTIONARY, "bitmask_map", PropertyHint(38), "PackedByteArray;int", 4096), "set_bitmask_map", "get_bitmask_map"); // unfinished and u should prolly change this
ClassDB::bind_method(D_METHOD("set_is_fixed_size", "value"), &NetworkedNode::set_is_fixed_size);
ClassDB::bind_method(D_METHOD("get_is_fixed_size"), &NetworkedNode::get_is_fixed_size);
ADD_PROPERTY(PropertyInfo(Variant::BOOL, "is_fixed_size"), "set_is_fixed_size", "get_is_fixed_size"); // unfinished and u should prolly change this
ClassDB::bind_method(D_METHOD("set_num_bools", "value"), &NetworkedNode::set_num_bools);
ClassDB::bind_method(D_METHOD("get_num_bools"), &NetworkedNode::get_num_bools);
ADD_PROPERTY(PropertyInfo(Variant::INT, "num_bools"), "set_num_bools", "get_num_bools"); // unfinished and u should prolly change this
ClassDB::bind_method(D_METHOD("set_fixed_size_bytes", "value"), &NetworkedNode::set_fixed_size_bytes);
ClassDB::bind_method(D_METHOD("get_fixed_size_bytes"), &NetworkedNode::get_fixed_size_bytes);
ADD_PROPERTY(PropertyInfo(Variant::INT, "fixed_size_bytes"), "set_fixed_size_bytes", "get_fixed_size_bytes"); // unfinished and u should prolly change this
ClassDB::bind_method(D_METHOD("set_type", "value"), &NetworkedNode::set_type);
ClassDB::bind_method(D_METHOD("get_type"), &NetworkedNode::get_type);
ADD_PROPERTY(PropertyInfo(Variant::OBJECT, "type"), "set_type", "get_type"); // unfinished and u should prolly change this
ClassDB::bind_method(D_METHOD("set_get_plist_func", "value"), &NetworkedNode::set_get_plist_func);
ClassDB::bind_method(D_METHOD("get_get_plist_func"), &NetworkedNode::get_get_plist_func);
ADD_PROPERTY(PropertyInfo(Variant::CALLABLE, "get_plist_func", PropertyHint(39), "check plist", 4100), "set_get_plist_func", "get_get_plist_func"); // unfinished and u should prolly change this
ClassDB::bind_method(D_METHOD("set_get_plist_short_func", "value"), &NetworkedNode::set_get_plist_short_func);
ClassDB::bind_method(D_METHOD("get_get_plist_short_func"), &NetworkedNode::get_get_plist_short_func);
ADD_PROPERTY(PropertyInfo(Variant::CALLABLE, "get_plist_short_func", PropertyHint(39), "check plist (script only)", 4100), "set_get_plist_short_func", "get_get_plist_short_func"); // unfinished and u should prolly change this
BIND_ENUM_CONSTANT(ALL);
BIND_ENUM_CONSTANT(OWNER_ONLY);
BIND_ENUM_CONSTANT(TEAM_ONLY);
BIND_ENUM_CONSTANT(VIS_TYPE_MAX);

BIND_ENUM_CONSTANT(STATUS_FLAGS_NONE);
BIND_ENUM_CONSTANT(UPDATE);
BIND_ENUM_CONSTANT(DELTA);
BIND_ENUM_CONSTANT(SPAWN);
BIND_ENUM_CONSTANT(DELETE);
BIND_ENUM_CONSTANT(UpdateBit);
BIND_ENUM_CONSTANT(DeltaBit);
BIND_ENUM_CONSTANT(SpawnBit);
BIND_ENUM_CONSTANT(DELTA_NODE);
BIND_ENUM_CONSTANT(SPAWN_NODE);
BIND_ENUM_CONSTANT(DELETE_NODE);

}