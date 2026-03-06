#include serializer.h
static int get_uid_by_node(Node node) {
	
}
static Array get_serializers() {
	
}
void increment_uid() {
	
}
void clear_uid() {
	
}
float get_update_weight() {
	
}
void _physics_process(float delta) {
	
}
void serialize_nodes() {
	
}
bool should_serialize() {
	
}
void _enter_tree() {
	
}
void on_owner_exit_tree(Node node_owner) {
	
}
void _ready() {
	
}
bool nodes_are_valid() {
	
}
void update_physical_properties(Array properties, float weight, bool notify_transform_changed) {
	
}
void receive_update(Array properties) {
	
}
void receive_update_interpolated(Array properties) {
	
}
void receive_interpolation_update(Array properties) {
	
}
void interpolate(Array current_properties, Array prev_properties) {
	
}
void receive_instant_update(Array properties) {
	
}
void decode_nodes(StreamPeerBuffer buffer) {
	
}
void delta_decode_nodes(StreamPeerBuffer buffer) {
	
}
void decode(StreamPeerBuffer buffer, int vis_type) {
	
}
void decode_delta(StreamPeerBuffer buffer, int vis_type) {
	
}
static RefCounted get_serialization_info(PackedScene scene, int scene_id, SceneState state) {
	
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
ADD_PROPERTY(PropertyInfo(Variant::ARRAY, "serialization_properties", 23, "24/17:NetworkedNode", 4102))),); // unfinished and u should prolly change this
ADD_PROPERTY(PropertyInfo(Variant::ARRAY, "nodes", 23, "24/34:Node", 4102))),); // unfinished and u should prolly change this
ADD_PROPERTY(PropertyInfo(Variant::DICTIONARY, "test_dict", 23, "24/34:Node;24/17:NetworkedNode", 4102))),); // unfinished and u should prolly change this
ADD_PROPERTY(PropertyInfo(Variant::FLOAT, "update_frequency"))),); // unfinished and u should prolly change this
ADD_PROPERTY(PropertyInfo(Variant::FLOAT, "update_time_left"))),); // unfinished and u should prolly change this
ADD_PROPERTY(PropertyInfo(Variant::BOOL, "updating"))),); // unfinished and u should prolly change this
ADD_PROPERTY(PropertyInfo(Variant::INT, "uid"))),); // unfinished and u should prolly change this
ADD_PROPERTY(PropertyInfo(Variant::INT, "scene_id"))),); // unfinished and u should prolly change this
ADD_PROPERTY(PropertyInfo(Variant::BOOL, "has_serialized"))),); // unfinished and u should prolly change this
ADD_PROPERTY(PropertyInfo(Variant::OBJECT, "serialized"))),); // unfinished and u should prolly change this
BIND_ENUM_CONSTANT(SINGLETONS);
BIND_ENUM_CONSTANT(REGULAR);
BIND_ENUM_CONSTANT(BOUNDING_BOX);
BIND_ENUM_CONSTANT(SERIALIZER);
BIND_ENUM_CONSTANT(HIT_RESOLVER);
BIND_ENUM_CONSTANT(HISTORY_SAVER);
BIND_ENUM_CONSTANT(PERF_OVERLAY);

ADD_SIGNAL(MethodInfo("updated", ));
}