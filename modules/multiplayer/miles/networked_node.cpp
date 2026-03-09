#include networked_node.h
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
void NetworkedNode::encode_by_type(Array array, StreamPeerBuffer buffer) {
	
}
void NetworkedNode::encode_teammate_by_type(Array array, StreamPeerBuffer buffer) {
	
}
void NetworkedNode::encode_hostile_by_type(Array array, StreamPeerBuffer buffer) {
	
}
void NetworkedNode::decode_by_type(Array array, StreamPeerBuffer buffer) {
	
}
void NetworkedNode::decode_teammate_by_type(Array array, StreamPeerBuffer buffer) {
	
}
void NetworkedNode::decode_hostile_by_type(Array array, StreamPeerBuffer buffer) {
	
}
void NetworkedNode::encode_delta_array_by_type(Array current_properties, Array prev_properties, StreamPeerBuffer buffer) {
	
}
void NetworkedNode::encode_teammate_delta_array_by_type(Array current_properties, Array prev_properties, StreamPeerBuffer buffer) {
	
}
void NetworkedNode::encode_hostile_delta_array_by_type(Array current_properties, Array prev_properties, StreamPeerBuffer buffer) {
	
}
void NetworkedNode::decode_delta_array_by_type(Array array, StreamPeerBuffer buffer) {
	
}
void NetworkedNode::decode_teammate_delta_array_by_type(Array array, StreamPeerBuffer buffer) {
	
}
void NetworkedNode::decode_hostile_delta_array_by_type(Array array, StreamPeerBuffer buffer) {
	
}
void NetworkedNode::encode_object_by_type(Object object, StreamPeerBuffer buffer) {
	
}
void NetworkedNode::decode_object_by_type(Object object, StreamPeerBuffer buffer) {
	
}
String NetworkedNode::generate_script() {
	
}
String NetworkedNode::generate_shader() {
	
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
void NetworkedNode::encode_node(Object node, StreamPeerBuffer buffer) {
	
}
void NetworkedNode::encode_owner_delta(StreamPeerBuffer buffer) {
	
}
void NetworkedNode::encode_owner_spawn(int uid, int scene_id, StreamPeerBuffer buffer) {
	
}
void NetworkedNode::encode_owner_delete(int uid, StreamPeerBuffer buffer) {
	
}
void NetworkedNode::encode_array(Array array, StreamPeerBuffer buffer, int vis_type) {
	
}
void NetworkedNode::encode_array_iter(Array array, StreamPeerBuffer buffer, PackedByteArray iter) {
	
}
void NetworkedNode::encode_delta_array(Array current, Array prev, StreamPeerBuffer buffer, int vis_type) {
	
}
void NetworkedNode::encode_delta_array_iter(Array current, Array prev, StreamPeerBuffer buffer, PackedByteArray iter) {
	
}
void NetworkedNode::decode(Object node, StreamPeerBuffer buffer) {
	
}
void NetworkedNode::decode_delta(Object node, StreamPeerBuffer buffer) {
	
}
void NetworkedNode::decode_array(Array array, StreamPeerBuffer buffer, int vis_type) {
	
}
void NetworkedNode::decode_array_iter(Array array, StreamPeerBuffer buffer, PackedByteArray iter) {
	
}
void NetworkedNode::decode_delta_array(Array array, StreamPeerBuffer buffer, int vis_type) {
	
}
void NetworkedNode::decode_delta_array_iter(Array array, StreamPeerBuffer buffer, PackedByteArray iter) {
	
}
bool NetworkedNode::get_ready() {
	
}
bool NetworkedNode::set_ready(bool ready) {
	
}
bool NetworkedNode::get_owner() {
	
}
bool NetworkedNode::set_owner(bool owner) {
	
}
String NetworkedNode::get_owner_scene_path() {
	
}
String NetworkedNode::set_owner_scene_path(String owner_scene_path) {
	
}
int NetworkedNode::get_num_props() {
	
}
int NetworkedNode::set_num_props(int num_props) {
	
}
Script NetworkedNode::get_source_script() {
	
}
Script NetworkedNode::set_source_script(Script source_script) {
	
}
StringName NetworkedNode::get_base_class() {
	
}
StringName NetworkedNode::set_base_class(StringName base_class) {
	
}
Array NetworkedNode::get_properties() {
	
}
Array NetworkedNode::set_properties(Array properties) {
	
}
PackedByteArray NetworkedNode::get_iter_all() {
	
}
PackedByteArray NetworkedNode::set_iter_all(PackedByteArray iter_all) {
	
}
PackedByteArray NetworkedNode::get_iter_owner_only() {
	
}
PackedByteArray NetworkedNode::set_iter_owner_only(PackedByteArray iter_owner_only) {
	
}
PackedByteArray NetworkedNode::get_iter_team_only() {
	
}
PackedByteArray NetworkedNode::set_iter_team_only(PackedByteArray iter_team_only) {
	
}
PackedByteArray NetworkedNode::get_iter_physical() {
	
}
PackedByteArray NetworkedNode::set_iter_physical(PackedByteArray iter_physical) {
	
}
Array NetworkedNode::get_iters() {
	
}
Array NetworkedNode::set_iters(Array iters) {
	
}
Array NetworkedNode::get_iters_visible() {
	
}
Array NetworkedNode::set_iters_visible(Array iters_visible) {
	
}
Dictionary NetworkedNode::get_bitmask_map() {
	
}
Dictionary NetworkedNode::set_bitmask_map(Dictionary bitmask_map) {
	
}
bool NetworkedNode::get_is_fixed_size() {
	
}
bool NetworkedNode::set_is_fixed_size(bool is_fixed_size) {
	
}
int NetworkedNode::get_num_bools() {
	
}
int NetworkedNode::set_num_bools(int num_bools) {
	
}
int NetworkedNode::get_fixed_size_bytes() {
	
}
int NetworkedNode::set_fixed_size_bytes(int fixed_size_bytes) {
	
}
GdScript NetworkedNode::get_type() {
	
}
GdScript NetworkedNode::set_type(GdScript type) {
	
}
Callable NetworkedNode::get_get_plist_func() {
	
}
Callable NetworkedNode::set_get_plist_func(Callable get_plist_func) {
	
}
Callable NetworkedNode::get_get_plist_short_func() {
	
}
Callable NetworkedNode::set_get_plist_short_func(Callable get_plist_short_func) {
	
}
void NetworkedNode::_bind_methods(){
ClassDB::bind_method(D_METHOD("_to_string"), &NetworkedNode::_to_string);
ClassDB::bind_method(D_METHOD("_init"), &NetworkedNode::_init);
ClassDB::bind_method(D_METHOD("setup"), &NetworkedNode::setup);
ClassDB::bind_method(D_METHOD("get_function_declaration", "function_name", "function_body", "indent"), &NetworkedNode::get_function_declaration);
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
ClassDB::bind_method(D_METHOD("generate_shader"), &NetworkedNode::generate_shader);
ClassDB::bind_method(D_METHOD("get_full_property_list", "script"), &NetworkedNode::get_full_property_list);
ClassDB::bind_method(D_METHOD("get_property_list_map", "script"), &NetworkedNode::get_property_list_map);
ClassDB::bind_method(D_METHOD("get_property_list_map_by_base_type", "type"), &NetworkedNode::get_property_list_map_by_base_type);
ClassDB::bind_method(D_METHOD("apply_to_array", "node", "array"), &NetworkedNode::apply_to_array);
ClassDB::bind_method(D_METHOD("get_array"), &NetworkedNode::get_array);
ClassDB::bind_method(D_METHOD("to_array", "node"), &NetworkedNode::to_array);
ClassDB::bind_method(D_METHOD("from_array", "array", "node"), &NetworkedNode::from_array);
ClassDB::bind_method(D_METHOD("from_array_no_nulls", "array", "node"), &NetworkedNode::from_array_no_nulls);
ClassDB::bind_method(D_METHOD("from_array_interpolated", "array", "node", "weight"), &NetworkedNode::from_array_interpolated);
ClassDB::bind_method(D_METHOD("interpolate", "current_array", "prev_array", "node", "weight"), &NetworkedNode::interpolate);
ClassDB::bind_method(D_METHOD("encode_node", "node", "buffer"), &NetworkedNode::encode_node);
ClassDB::bind_method(D_METHOD("encode_owner_delta", "buffer"), &NetworkedNode::encode_owner_delta);
ClassDB::bind_method(D_METHOD("encode_owner_spawn", "uid", "scene_id", "buffer"), &NetworkedNode::encode_owner_spawn);
ClassDB::bind_method(D_METHOD("encode_owner_delete", "uid", "buffer"), &NetworkedNode::encode_owner_delete);
ClassDB::bind_method(D_METHOD("encode_array", "array", "buffer", "vis_type"), &NetworkedNode::encode_array);
ClassDB::bind_method(D_METHOD("encode_array_iter", "array", "buffer", "iter"), &NetworkedNode::encode_array_iter);
ClassDB::bind_method(D_METHOD("encode_delta_array", "current", "prev", "buffer", "vis_type"), &NetworkedNode::encode_delta_array);
ClassDB::bind_method(D_METHOD("encode_delta_array_iter", "current", "prev", "buffer", "iter"), &NetworkedNode::encode_delta_array_iter);
ClassDB::bind_method(D_METHOD("decode", "node", "buffer"), &NetworkedNode::decode);
ClassDB::bind_method(D_METHOD("decode_delta", "node", "buffer"), &NetworkedNode::decode_delta);
ClassDB::bind_method(D_METHOD("decode_array", "array", "buffer", "vis_type"), &NetworkedNode::decode_array);
ClassDB::bind_method(D_METHOD("decode_array_iter", "array", "buffer", "iter"), &NetworkedNode::decode_array_iter);
ClassDB::bind_method(D_METHOD("decode_delta_array", "array", "buffer", "vis_type"), &NetworkedNode::decode_delta_array);
ClassDB::bind_method(D_METHOD("decode_delta_array_iter", "array", "buffer", "iter"), &NetworkedNode::decode_delta_array_iter);
ADD_PROPERTY(PropertyInfo(Variant::BOOL, "ready"))),"set_ready","get_ready"); // unfinished and u should prolly change this
ADD_PROPERTY(PropertyInfo(Variant::BOOL, "owner"))),"set_owner","get_owner"); // unfinished and u should prolly change this
ADD_PROPERTY(PropertyInfo(Variant::STRING, "owner_scene_path"))),"set_owner_scene_path","get_owner_scene_path"); // unfinished and u should prolly change this
ADD_PROPERTY(PropertyInfo(Variant::INT, "num_props"))),"set_num_props","get_num_props"); // unfinished and u should prolly change this
ADD_PROPERTY(PropertyInfo(Variant::OBJECT, "source_script", 17, "Script", 4102))),"set_source_script","get_source_script"); // unfinished and u should prolly change this
ADD_PROPERTY(PropertyInfo(Variant::STRING_NAME, "base_class"))),"set_base_class","get_base_class"); // unfinished and u should prolly change this
ADD_PROPERTY(PropertyInfo(Variant::ARRAY, "properties", 23, "24/17:Property", 4102))),"set_properties","get_properties"); // unfinished and u should prolly change this
ADD_PROPERTY(PropertyInfo(Variant::PACKED_BYTE_ARRAY, "iter_all"))),"set_iter_all","get_iter_all"); // unfinished and u should prolly change this
ADD_PROPERTY(PropertyInfo(Variant::PACKED_BYTE_ARRAY, "iter_owner_only"))),"set_iter_owner_only","get_iter_owner_only"); // unfinished and u should prolly change this
ADD_PROPERTY(PropertyInfo(Variant::PACKED_BYTE_ARRAY, "iter_team_only"))),"set_iter_team_only","get_iter_team_only"); // unfinished and u should prolly change this
ADD_PROPERTY(PropertyInfo(Variant::PACKED_BYTE_ARRAY, "iter_physical"))),"set_iter_physical","get_iter_physical"); // unfinished and u should prolly change this
ADD_PROPERTY(PropertyInfo(Variant::ARRAY, "iters", 31, "PackedByteArray", 4096))),"set_iters","get_iters"); // unfinished and u should prolly change this
ADD_PROPERTY(PropertyInfo(Variant::ARRAY, "iters_visible", 31, "bool", 4096))),"set_iters_visible","get_iters_visible"); // unfinished and u should prolly change this
ADD_PROPERTY(PropertyInfo(Variant::DICTIONARY, "bitmask_map", 38, "PackedByteArray;int", 4096))),"set_bitmask_map","get_bitmask_map"); // unfinished and u should prolly change this
ADD_PROPERTY(PropertyInfo(Variant::BOOL, "is_fixed_size"))),"set_is_fixed_size","get_is_fixed_size"); // unfinished and u should prolly change this
ADD_PROPERTY(PropertyInfo(Variant::INT, "num_bools"))),"set_num_bools","get_num_bools"); // unfinished and u should prolly change this
ADD_PROPERTY(PropertyInfo(Variant::INT, "fixed_size_bytes"))),"set_fixed_size_bytes","get_fixed_size_bytes"); // unfinished and u should prolly change this
ADD_PROPERTY(PropertyInfo(Variant::OBJECT, "type"))),"set_type","get_type"); // unfinished and u should prolly change this
ADD_PROPERTY(PropertyInfo(Variant::CALLABLE, "get_plist_func", 39, "check plist", 4100))),"set_get_plist_func","get_get_plist_func"); // unfinished and u should prolly change this
ADD_PROPERTY(PropertyInfo(Variant::CALLABLE, "get_plist_short_func", 39, "check plist (script only)", 4100))),"set_get_plist_short_func","get_get_plist_short_func"); // unfinished and u should prolly change this
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