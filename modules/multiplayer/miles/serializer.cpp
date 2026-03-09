#include serializer.h
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
void Serializer::decode_nodes(StreamPeerBuffer buffer) {
	
}
void Serializer::delta_decode_nodes(StreamPeerBuffer buffer) {
	
}
void Serializer::decode(StreamPeerBuffer buffer, int vis_type) {
	
}
void Serializer::decode_delta(StreamPeerBuffer buffer, int vis_type) {
	
}
RefCounted Serializer::get_serialization_info(PackedScene scene, int scene_id, SceneState state) {
	
}
Array Serializer::get_serialization_properties() {
	
}
Array Serializer::set_serialization_properties(Array p_serialization_properties) {
	
}
Array Serializer::get_nodes() {
	
}
Array Serializer::set_nodes(Array p_nodes) {
	
}
Dictionary Serializer::get_test_dict() {
	
}
Dictionary Serializer::set_test_dict(Dictionary p_test_dict) {
	
}
float Serializer::get_update_frequency() {
	
}
float Serializer::set_update_frequency(float p_update_frequency) {
	
}
float Serializer::get_update_time_left() {
	
}
float Serializer::set_update_time_left(float p_update_time_left) {
	
}
bool Serializer::get_updating() {
	
}
bool Serializer::set_updating(bool p_updating) {
	
}
int Serializer::get_uid() {
	
}
int Serializer::set_uid(int p_uid) {
	
}
int Serializer::get_scene_id() {
	
}
int Serializer::set_scene_id(int p_scene_id) {
	
}
bool Serializer::get_has_serialized() {
	
}
bool Serializer::set_has_serialized(bool p_has_serialized) {
	
}
RefCounted Serializer::get_serialized() {
	
}
RefCounted Serializer::set_serialized(RefCounted p_serialized) {
	
}
void Serializer::_bind_methods(){
ClassDB::bind_method(D_METHOD("get_uid_by_node", "node"), &Serializer::get_uid_by_node);
ClassDB::bind_method(D_METHOD("get_serializers"), &Serializer::get_serializers);
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
ClassDB::bind_method(D_METHOD("update_physical_properties", "properties", "weight", "notify_transform_changed"), &Serializer::update_physical_properties);
ClassDB::bind_method(D_METHOD("receive_update", "properties"), &Serializer::receive_update);
ClassDB::bind_method(D_METHOD("receive_update_interpolated", "properties"), &Serializer::receive_update_interpolated);
ClassDB::bind_method(D_METHOD("receive_interpolation_update", "properties"), &Serializer::receive_interpolation_update);
ClassDB::bind_method(D_METHOD("interpolate", "current_properties", "prev_properties"), &Serializer::interpolate);
ClassDB::bind_method(D_METHOD("receive_instant_update", "properties"), &Serializer::receive_instant_update);
ClassDB::bind_method(D_METHOD("decode_nodes", "buffer"), &Serializer::decode_nodes);
ClassDB::bind_method(D_METHOD("delta_decode_nodes", "buffer"), &Serializer::delta_decode_nodes);
ClassDB::bind_method(D_METHOD("decode", "buffer", "vis_type"), &Serializer::decode);
ClassDB::bind_method(D_METHOD("decode_delta", "buffer", "vis_type"), &Serializer::decode_delta);
ClassDB::bind_method(D_METHOD("get_serialization_info", "scene", "scene_id", "state"), &Serializer::get_serialization_info);
ADD_PROPERTY(PropertyInfo(Variant::ARRAY, "serialization_properties", 23, "24/17:NetworkedNode", 4102), "get_serialization_properties," "set_serialization_properties"); // unfinished and u should prolly change this
ADD_PROPERTY(PropertyInfo(Variant::ARRAY, "nodes", 23, "24/34:Node", 4102), "get_nodes," "set_nodes"); // unfinished and u should prolly change this
ADD_PROPERTY(PropertyInfo(Variant::DICTIONARY, "test_dict", 23, "24/34:Node;24/17:NetworkedNode", 4102), "get_test_dict," "set_test_dict"); // unfinished and u should prolly change this
ADD_PROPERTY(PropertyInfo(Variant::FLOAT, "update_frequency"), "get_update_frequency," "set_update_frequency"); // unfinished and u should prolly change this
ADD_PROPERTY(PropertyInfo(Variant::FLOAT, "update_time_left"), "get_update_time_left," "set_update_time_left"); // unfinished and u should prolly change this
ADD_PROPERTY(PropertyInfo(Variant::BOOL, "updating"), "get_updating," "set_updating"); // unfinished and u should prolly change this
ADD_PROPERTY(PropertyInfo(Variant::INT, "uid"), "get_uid," "set_uid"); // unfinished and u should prolly change this
ADD_PROPERTY(PropertyInfo(Variant::INT, "scene_id"), "get_scene_id," "set_scene_id"); // unfinished and u should prolly change this
ADD_PROPERTY(PropertyInfo(Variant::BOOL, "has_serialized"), "get_has_serialized," "set_has_serialized"); // unfinished and u should prolly change this
ADD_PROPERTY(PropertyInfo(Variant::OBJECT, "serialized"), "get_serialized," "set_serialized"); // unfinished and u should prolly change this
BIND_ENUM_CONSTANT(SINGLETONS);
BIND_ENUM_CONSTANT(REGULAR);
BIND_ENUM_CONSTANT(BOUNDING_BOX);
BIND_ENUM_CONSTANT(SERIALIZER);
BIND_ENUM_CONSTANT(HIT_RESOLVER);
BIND_ENUM_CONSTANT(HISTORY_SAVER);
BIND_ENUM_CONSTANT(PERF_OVERLAY);

ADD_SIGNAL(MethodInfo("updated", ));
}