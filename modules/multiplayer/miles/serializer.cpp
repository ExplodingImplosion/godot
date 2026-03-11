#include "serializer.h"
Serializer::Serializer(){
	
}
Serializer::~Serializer(){
	
}
int Serializer::get_uid_by_node(Node node) {
	
}
Array Serializer::get_serializers() {
	
}
void Serializer::increment_uid() {
	
}
void Serializer::clear_uid() {
	
}
float Serializer::get_update_weight() {
	
}
void Serializer::_physics_process(float delta) {
	
}
void Serializer::serialize_nodes() {
	
}
bool Serializer::should_serialize() {
	
}
void Serializer::_enter_tree() {
	
}
void Serializer::on_owner_exit_tree(Node node_owner) {
	
}
void Serializer::_ready() {
	
}
bool Serializer::nodes_are_valid() {
	
}
void Serializer::update_physical_properties(Array properties, float weight, bool notify_transform_changed) {
	
}
void Serializer::receive_update(Array properties) {
	
}
void Serializer::receive_update_interpolated(Array properties) {
	
}
void Serializer::receive_interpolation_update(Array properties) {
	
}
void Serializer::interpolate(Array current_properties, Array prev_properties) {
	
}
void Serializer::receive_instant_update(Array properties) {
	
}
void Serializer::decode_nodes(StreamPeerBitBuffer buffer) {
	
}
void Serializer::delta_decode_nodes(StreamPeerBitBuffer buffer) {
	
}
void Serializer::decode(StreamPeerBitBuffer buffer, int vis_type) {
	
}
void Serializer::decode_delta(StreamPeerBitBuffer buffer, int vis_type) {
	
}
RefCounted Serializer::get_serialization_info(PackedScene scene, int scene_id, SceneState state) {
	
}
static Dictionary Serializer::get_component_list() {
	return component_list;
}
static void Serializer::set_component_list(Dictionary p_component_list) {
	component_list = p_component_list;
}
static RefCounted Serializer::get_component_tracker() {
	return component_tracker;
}
static void Serializer::set_component_tracker(RefCounted p_component_tracker) {
	component_tracker = p_component_tracker;
}
static Dictionary Serializer::get_uid_map() {
	return uid_map;
}
static void Serializer::set_uid_map(Dictionary p_uid_map) {
	uid_map = p_uid_map;
}
static int Serializer::get_uid_index() {
	return uid_index;
}
static void Serializer::set_uid_index(int p_uid_index) {
	uid_index = p_uid_index;
}
Array Serializer::get_serialization_properties() {
	return serialization_properties;
}
void Serializer::set_serialization_properties(Array p_serialization_properties) {
	serialization_properties = p_serialization_properties;
}
Array Serializer::get_nodes() {
	return nodes;
}
void Serializer::set_nodes(Array p_nodes) {
	nodes = p_nodes;
}
Dictionary Serializer::get_test_dict() {
	return test_dict;
}
void Serializer::set_test_dict(Dictionary p_test_dict) {
	test_dict = p_test_dict;
}
float Serializer::get_update_frequency() {
	return update_frequency;
}
void Serializer::set_update_frequency(float p_update_frequency) {
	update_frequency = p_update_frequency;
}
float Serializer::get_update_time_left() {
	return update_time_left;
}
void Serializer::set_update_time_left(float p_update_time_left) {
	update_time_left = p_update_time_left;
}
bool Serializer::get_updating() {
	return updating;
}
void Serializer::set_updating(bool p_updating) {
	updating = p_updating;
}
int Serializer::get_uid() {
	return uid;
}
void Serializer::set_uid(int p_uid) {
	uid = p_uid;
}
int Serializer::get_scene_id() {
	return scene_id;
}
void Serializer::set_scene_id(int p_scene_id) {
	scene_id = p_scene_id;
}
bool Serializer::get_has_serialized() {
	return has_serialized;
}
void Serializer::set_has_serialized(bool p_has_serialized) {
	has_serialized = p_has_serialized;
}
RefCounted Serializer::get_serialized() {
	return serialized;
}
void Serializer::set_serialized(RefCounted p_serialized) {
	serialized = p_serialized;
}
void Serializer::_bind_methods(){
ClassDB::bind_static_method("Serializer", D_METHOD("get_uid_by_node", "node"), &Serializer::get_uid_by_node);
ClassDB::bind_static_method("Serializer", D_METHOD("get_serializers"), &Serializer::get_serializers);
ClassDB::bind_method(D_METHOD("increment_uid"), &Serializer::increment_uid);
ClassDB::bind_method(D_METHOD("clear_uid"), &Serializer::clear_uid);
ClassDB::bind_method(D_METHOD("get_update_weight"), &Serializer::get_update_weight);
ClassDB::bind_method(D_METHOD("_physics_process", "delta"), &Serializer::_physics_process);
ClassDB::bind_method(D_METHOD("serialize_nodes"), &Serializer::serialize_nodes);
ClassDB::bind_method(D_METHOD("should_serialize"), &Serializer::should_serialize);
ClassDB::bind_method(D_METHOD("_enter_tree"), &Serializer::_enter_tree);
ClassDB::bind_method(D_METHOD("on_owner_exit_tree", "node_owner"), &Serializer::on_owner_exit_tree);
ClassDB::bind_method(D_METHOD("_ready"), &Serializer::_ready);
ClassDB::bind_method(D_METHOD("nodes_are_valid"), &Serializer::nodes_are_valid);
ClassDB::bind_method(D_METHOD("update_physical_properties", "properties", "weight", "notify_transform_changed"), &Serializer::update_physical_properties, DEFVAL(1.0), DEFVAL(true));
ClassDB::bind_method(D_METHOD("receive_update", "properties"), &Serializer::receive_update);
ClassDB::bind_method(D_METHOD("receive_update_interpolated", "properties"), &Serializer::receive_update_interpolated);
ClassDB::bind_method(D_METHOD("receive_interpolation_update", "properties"), &Serializer::receive_interpolation_update);
ClassDB::bind_method(D_METHOD("interpolate", "current_properties", "prev_properties"), &Serializer::interpolate);
ClassDB::bind_method(D_METHOD("receive_instant_update", "properties"), &Serializer::receive_instant_update);
ClassDB::bind_method(D_METHOD("decode_nodes", "buffer"), &Serializer::decode_nodes);
ClassDB::bind_method(D_METHOD("delta_decode_nodes", "buffer"), &Serializer::delta_decode_nodes);
ClassDB::bind_method(D_METHOD("decode", "buffer", "vis_type"), &Serializer::decode, DEFVAL(0));
ClassDB::bind_method(D_METHOD("decode_delta", "buffer", "vis_type"), &Serializer::decode_delta);
ClassDB::bind_static_method("Serializer", D_METHOD("get_serialization_info", "scene", "scene_id", "state"), &Serializer::get_serialization_info, DEFVAL(<null>));
ClassDB::bind_method(D_METHOD("set_component_list", "value"), &Serializer::set_component_list);
ClassDB::bind_method(D_METHOD("get_component_list"), &Serializer::get_component_list);
ADD_PROPERTY(PropertyInfo(Variant::DICTIONARY, "component_list", PropertyHint(38), "Node;Node", 4096), "set_component_list", "get_component_list"); // unfinished and u should prolly change this
ClassDB::bind_method(D_METHOD("set_component_tracker", "value"), &Serializer::set_component_tracker);
ClassDB::bind_method(D_METHOD("get_component_tracker"), &Serializer::get_component_tracker);
ADD_PROPERTY(PropertyInfo(Variant::OBJECT, "component_tracker"), "set_component_tracker", "get_component_tracker"); // unfinished and u should prolly change this
ClassDB::bind_method(D_METHOD("set_uid_map", "value"), &Serializer::set_uid_map);
ClassDB::bind_method(D_METHOD("get_uid_map"), &Serializer::get_uid_map);
ADD_PROPERTY(PropertyInfo(Variant::DICTIONARY, "uid_map", PropertyHint(38), "int;Node", 4096), "set_uid_map", "get_uid_map"); // unfinished and u should prolly change this
ClassDB::bind_method(D_METHOD("set_uid_index", "value"), &Serializer::set_uid_index);
ClassDB::bind_method(D_METHOD("get_uid_index"), &Serializer::get_uid_index);
ADD_PROPERTY(PropertyInfo(Variant::INT, "uid_index"), "set_uid_index", "get_uid_index"); // unfinished and u should prolly change this
ClassDB::bind_method(D_METHOD("set_serialization_properties", "value"), &Serializer::set_serialization_properties);
ClassDB::bind_method(D_METHOD("get_serialization_properties"), &Serializer::get_serialization_properties);
ADD_PROPERTY(PropertyInfo(Variant::ARRAY, "serialization_properties", PropertyHint(23), "24/17:NetworkedNode", 4102), "set_serialization_properties", "get_serialization_properties"); // unfinished and u should prolly change this
ClassDB::bind_method(D_METHOD("set_nodes", "value"), &Serializer::set_nodes);
ClassDB::bind_method(D_METHOD("get_nodes"), &Serializer::get_nodes);
ADD_PROPERTY(PropertyInfo(Variant::ARRAY, "nodes", PropertyHint(23), "24/34:Node", 4102), "set_nodes", "get_nodes"); // unfinished and u should prolly change this
ClassDB::bind_method(D_METHOD("set_test_dict", "value"), &Serializer::set_test_dict);
ClassDB::bind_method(D_METHOD("get_test_dict"), &Serializer::get_test_dict);
ADD_PROPERTY(PropertyInfo(Variant::DICTIONARY, "test_dict", PropertyHint(23), "24/34:Node;24/17:NetworkedNode", 4102), "set_test_dict", "get_test_dict"); // unfinished and u should prolly change this
ClassDB::bind_method(D_METHOD("set_update_frequency", "value"), &Serializer::set_update_frequency);
ClassDB::bind_method(D_METHOD("get_update_frequency"), &Serializer::get_update_frequency);
ADD_PROPERTY(PropertyInfo(Variant::FLOAT, "update_frequency"), "set_update_frequency", "get_update_frequency"); // unfinished and u should prolly change this
ClassDB::bind_method(D_METHOD("set_update_time_left", "value"), &Serializer::set_update_time_left);
ClassDB::bind_method(D_METHOD("get_update_time_left"), &Serializer::get_update_time_left);
ADD_PROPERTY(PropertyInfo(Variant::FLOAT, "update_time_left"), "set_update_time_left", "get_update_time_left"); // unfinished and u should prolly change this
ClassDB::bind_method(D_METHOD("set_updating", "value"), &Serializer::set_updating);
ClassDB::bind_method(D_METHOD("get_updating"), &Serializer::get_updating);
ADD_PROPERTY(PropertyInfo(Variant::BOOL, "updating"), "set_updating", "get_updating"); // unfinished and u should prolly change this
ClassDB::bind_method(D_METHOD("set_uid", "value"), &Serializer::set_uid);
ClassDB::bind_method(D_METHOD("get_uid"), &Serializer::get_uid);
ADD_PROPERTY(PropertyInfo(Variant::INT, "uid"), "set_uid", "get_uid"); // unfinished and u should prolly change this
ClassDB::bind_method(D_METHOD("set_scene_id", "value"), &Serializer::set_scene_id);
ClassDB::bind_method(D_METHOD("get_scene_id"), &Serializer::get_scene_id);
ADD_PROPERTY(PropertyInfo(Variant::INT, "scene_id"), "set_scene_id", "get_scene_id"); // unfinished and u should prolly change this
ClassDB::bind_method(D_METHOD("set_has_serialized", "value"), &Serializer::set_has_serialized);
ClassDB::bind_method(D_METHOD("get_has_serialized"), &Serializer::get_has_serialized);
ADD_PROPERTY(PropertyInfo(Variant::BOOL, "has_serialized"), "set_has_serialized", "get_has_serialized"); // unfinished and u should prolly change this
ClassDB::bind_method(D_METHOD("set_serialized", "value"), &Serializer::set_serialized);
ClassDB::bind_method(D_METHOD("get_serialized"), &Serializer::get_serialized);
ADD_PROPERTY(PropertyInfo(Variant::OBJECT, "serialized"), "set_serialized", "get_serialized"); // unfinished and u should prolly change this
BIND_ENUM_CONSTANT(SINGLETONS);
BIND_ENUM_CONSTANT(REGULAR);
BIND_ENUM_CONSTANT(BOUNDING_BOX);
BIND_ENUM_CONSTANT(SERIALIZER);
BIND_ENUM_CONSTANT(HIT_RESOLVER);
BIND_ENUM_CONSTANT(HISTORY_SAVER);
BIND_ENUM_CONSTANT(PERF_OVERLAY);

ADD_SIGNAL(MethodInfo("updated", ));
}