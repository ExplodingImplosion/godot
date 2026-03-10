#include serialized_node_collection.h
Node SerializedNodeCollection::spawn(Node scene) {
	
}
bool SerializedNodeCollection::was_deleted() {
	
}
String SerializedNodeCollection::_to_string() {
	
}
void SerializedNodeCollection::update_interpolation(Array new_property_lists) {
	
}
RefCounted SerializedNodeCollection::duplicate() {
	
}
RefCounted SerializedNodeCollection::create_fresh(int uid, int scene_id, int owner_id, int team, int frame_created, Array node_configs) {
	
}
void SerializedNodeCollection::_init(Array property_lists, int uid, int scene_id, int owner_id, int team, int frame_created, Array node_configs, bool duplicate) {
	
}
void SerializedNodeCollection::encode_spawn(StreamPeerBuffer buffer, int vis_type) {
	
}
void SerializedNodeCollection::decode_spawn(StreamPeerBuffer buffer, int vis_type) {
	
}
void SerializedNodeCollection::encode_delta(RefCounted prev, StreamPeerBuffer buffer, int vis_type) {
	
}
void SerializedNodeCollection::decode_delta(StreamPeerBuffer buffer, int vis_type) {
	
}
Array SerializedNodeCollection::get_node_configs() {
	
}
Array SerializedNodeCollection::set_node_configs(Array p_node_configs) {
	
}
Array SerializedNodeCollection::get_property_lists() {
	
}
Array SerializedNodeCollection::set_property_lists(Array p_property_lists) {
	
}
Array SerializedNodeCollection::get_prev_property_lists() {
	
}
Array SerializedNodeCollection::set_prev_property_lists(Array p_prev_property_lists) {
	
}
int SerializedNodeCollection::get_num_nodes() {
	
}
int SerializedNodeCollection::set_num_nodes(int p_num_nodes) {
	
}
int SerializedNodeCollection::get_uid() {
	
}
int SerializedNodeCollection::set_uid(int p_uid) {
	
}
int SerializedNodeCollection::get_scene_id() {
	
}
int SerializedNodeCollection::set_scene_id(int p_scene_id) {
	
}
int SerializedNodeCollection::get_owner_id() {
	
}
int SerializedNodeCollection::set_owner_id(int p_owner_id) {
	
}
int SerializedNodeCollection::get_team() {
	
}
int SerializedNodeCollection::set_team(int p_team) {
	
}
int SerializedNodeCollection::get_frame_created() {
	
}
int SerializedNodeCollection::set_frame_created(int p_frame_created) {
	
}
int SerializedNodeCollection::get_frame_deleted() {
	
}
int SerializedNodeCollection::set_frame_deleted(int p_frame_deleted) {
	
}
int SerializedNodeCollection::get_visibility() {
	
}
int SerializedNodeCollection::set_visibility(int p_visibility) {
	
}
void SerializedNodeCollection::_bind_methods(){
ClassDB::bind_method(D_METHOD("spawn", "scene"), &SerializedNodeCollection::spawn);
ClassDB::bind_method(D_METHOD("was_deleted"), &SerializedNodeCollection::was_deleted);
ClassDB::bind_method(D_METHOD("_to_string"), &SerializedNodeCollection::_to_string);
ClassDB::bind_method(D_METHOD("update_interpolation", "new_property_lists"), &SerializedNodeCollection::update_interpolation);
ClassDB::bind_method(D_METHOD("duplicate"), &SerializedNodeCollection::duplicate);
ClassDB::bind_static_method("SerializedNodeCollection", D_METHOD("create_fresh", "uid", "scene_id", "owner_id", "team", "frame_created", "node_configs"), &SerializedNodeCollection::create_fresh);
ClassDB::bind_method(D_METHOD("_init", "property_lists", "uid", "scene_id", "owner_id", "team", "frame_created", "node_configs", "duplicate"), &SerializedNodeCollection::_init);
ClassDB::bind_method(D_METHOD("encode_spawn", "buffer", "vis_type"), &SerializedNodeCollection::encode_spawn);
ClassDB::bind_method(D_METHOD("decode_spawn", "buffer", "vis_type"), &SerializedNodeCollection::decode_spawn);
ClassDB::bind_method(D_METHOD("encode_delta", "prev", "buffer", "vis_type"), &SerializedNodeCollection::encode_delta);
ClassDB::bind_method(D_METHOD("decode_delta", "buffer", "vis_type"), &SerializedNodeCollection::decode_delta);
ClassDB::bind_method(D_METHOD("set_node_configs", "value"), &SerializedNodeCollection::set_node_configs);
ClassDB::bind_method(D_METHOD("get_node_configs"), &SerializedNodeCollection::get_node_configs);
ADD_PROPERTY(PropertyInfo(Variant::ARRAY, "node_configs", 31, "NetworkedNode", 4096), "set_node_configs," "get_node_configs"); // unfinished and u should prolly change this
ClassDB::bind_method(D_METHOD("set_property_lists", "value"), &SerializedNodeCollection::set_property_lists);
ClassDB::bind_method(D_METHOD("get_property_lists"), &SerializedNodeCollection::get_property_lists);
ADD_PROPERTY(PropertyInfo(Variant::ARRAY, "property_lists", 31, "Array", 4096), "set_property_lists," "get_property_lists"); // unfinished and u should prolly change this
ClassDB::bind_method(D_METHOD("set_prev_property_lists", "value"), &SerializedNodeCollection::set_prev_property_lists);
ClassDB::bind_method(D_METHOD("get_prev_property_lists"), &SerializedNodeCollection::get_prev_property_lists);
ADD_PROPERTY(PropertyInfo(Variant::ARRAY, "prev_property_lists", 31, "Array", 4096), "set_prev_property_lists," "get_prev_property_lists"); // unfinished and u should prolly change this
ClassDB::bind_method(D_METHOD("set_num_nodes", "value"), &SerializedNodeCollection::set_num_nodes);
ClassDB::bind_method(D_METHOD("get_num_nodes"), &SerializedNodeCollection::get_num_nodes);
ADD_PROPERTY(PropertyInfo(Variant::INT, "num_nodes"), "set_num_nodes," "get_num_nodes"); // unfinished and u should prolly change this
ClassDB::bind_method(D_METHOD("set_uid", "value"), &SerializedNodeCollection::set_uid);
ClassDB::bind_method(D_METHOD("get_uid"), &SerializedNodeCollection::get_uid);
ADD_PROPERTY(PropertyInfo(Variant::INT, "uid"), "set_uid," "get_uid"); // unfinished and u should prolly change this
ClassDB::bind_method(D_METHOD("set_scene_id", "value"), &SerializedNodeCollection::set_scene_id);
ClassDB::bind_method(D_METHOD("get_scene_id"), &SerializedNodeCollection::get_scene_id);
ADD_PROPERTY(PropertyInfo(Variant::INT, "scene_id"), "set_scene_id," "get_scene_id"); // unfinished and u should prolly change this
ClassDB::bind_method(D_METHOD("set_owner_id", "value"), &SerializedNodeCollection::set_owner_id);
ClassDB::bind_method(D_METHOD("get_owner_id"), &SerializedNodeCollection::get_owner_id);
ADD_PROPERTY(PropertyInfo(Variant::INT, "owner_id"), "set_owner_id," "get_owner_id"); // unfinished and u should prolly change this
ClassDB::bind_method(D_METHOD("set_team", "value"), &SerializedNodeCollection::set_team);
ClassDB::bind_method(D_METHOD("get_team"), &SerializedNodeCollection::get_team);
ADD_PROPERTY(PropertyInfo(Variant::INT, "team"), "set_team," "get_team"); // unfinished and u should prolly change this
ClassDB::bind_method(D_METHOD("set_frame_created", "value"), &SerializedNodeCollection::set_frame_created);
ClassDB::bind_method(D_METHOD("get_frame_created"), &SerializedNodeCollection::get_frame_created);
ADD_PROPERTY(PropertyInfo(Variant::INT, "frame_created"), "set_frame_created," "get_frame_created"); // unfinished and u should prolly change this
ClassDB::bind_method(D_METHOD("set_frame_deleted", "value"), &SerializedNodeCollection::set_frame_deleted);
ClassDB::bind_method(D_METHOD("get_frame_deleted"), &SerializedNodeCollection::get_frame_deleted);
ADD_PROPERTY(PropertyInfo(Variant::INT, "frame_deleted"), "set_frame_deleted," "get_frame_deleted"); // unfinished and u should prolly change this
ClassDB::bind_method(D_METHOD("set_visibility", "value"), &SerializedNodeCollection::set_visibility);
ClassDB::bind_method(D_METHOD("get_visibility"), &SerializedNodeCollection::get_visibility);
ADD_PROPERTY(PropertyInfo(Variant::INT, "visibility"), "set_visibility," "get_visibility"); // unfinished and u should prolly change this
}