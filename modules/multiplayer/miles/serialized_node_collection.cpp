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
Array SerializedNodeCollection::set_node_configs(Array node_configs) {
	
}
Array SerializedNodeCollection::get_property_lists() {
	
}
Array SerializedNodeCollection::set_property_lists(Array property_lists) {
	
}
Array SerializedNodeCollection::get_prev_property_lists() {
	
}
Array SerializedNodeCollection::set_prev_property_lists(Array prev_property_lists) {
	
}
int SerializedNodeCollection::get_num_nodes() {
	
}
int SerializedNodeCollection::set_num_nodes(int num_nodes) {
	
}
int SerializedNodeCollection::get_uid() {
	
}
int SerializedNodeCollection::set_uid(int uid) {
	
}
int SerializedNodeCollection::get_scene_id() {
	
}
int SerializedNodeCollection::set_scene_id(int scene_id) {
	
}
int SerializedNodeCollection::get_owner_id() {
	
}
int SerializedNodeCollection::set_owner_id(int owner_id) {
	
}
int SerializedNodeCollection::get_team() {
	
}
int SerializedNodeCollection::set_team(int team) {
	
}
int SerializedNodeCollection::get_frame_created() {
	
}
int SerializedNodeCollection::set_frame_created(int frame_created) {
	
}
int SerializedNodeCollection::get_frame_deleted() {
	
}
int SerializedNodeCollection::set_frame_deleted(int frame_deleted) {
	
}
int SerializedNodeCollection::get_visibility() {
	
}
int SerializedNodeCollection::set_visibility(int visibility) {
	
}
void SerializedNodeCollection::_bind_methods(){
ClassDB::bind_method(D_METHOD("spawn", "scene"), &SerializedNodeCollection::spawn);
ClassDB::bind_method(D_METHOD("was_deleted"), &SerializedNodeCollection::was_deleted);
ClassDB::bind_method(D_METHOD("_to_string"), &SerializedNodeCollection::_to_string);
ClassDB::bind_method(D_METHOD("update_interpolation", "new_property_lists"), &SerializedNodeCollection::update_interpolation);
ClassDB::bind_method(D_METHOD("duplicate"), &SerializedNodeCollection::duplicate);
ClassDB::bind_method(D_METHOD("create_fresh", "uid", "scene_id", "owner_id", "team", "frame_created", "node_configs"), &SerializedNodeCollection::create_fresh);
ClassDB::bind_method(D_METHOD("_init", "property_lists", "uid", "scene_id", "owner_id", "team", "frame_created", "node_configs", "duplicate"), &SerializedNodeCollection::_init);
ClassDB::bind_method(D_METHOD("encode_spawn", "buffer", "vis_type"), &SerializedNodeCollection::encode_spawn);
ClassDB::bind_method(D_METHOD("decode_spawn", "buffer", "vis_type"), &SerializedNodeCollection::decode_spawn);
ClassDB::bind_method(D_METHOD("encode_delta", "prev", "buffer", "vis_type"), &SerializedNodeCollection::encode_delta);
ClassDB::bind_method(D_METHOD("decode_delta", "buffer", "vis_type"), &SerializedNodeCollection::decode_delta);
ADD_PROPERTY(PropertyInfo(Variant::ARRAY, "node_configs" , "get_node_configs", "set_node_configs", 31, "NetworkedNode", 4096)); // unfinished and u should prolly change this
ADD_PROPERTY(PropertyInfo(Variant::ARRAY, "property_lists" , "get_property_lists", "set_property_lists", 31, "Array", 4096)); // unfinished and u should prolly change this
ADD_PROPERTY(PropertyInfo(Variant::ARRAY, "prev_property_lists" , "get_prev_property_lists", "set_prev_property_lists", 31, "Array", 4096)); // unfinished and u should prolly change this
ADD_PROPERTY(PropertyInfo(Variant::INT, "num_nodes" , "get_num_nodes", "set_num_nodes")); // unfinished and u should prolly change this
ADD_PROPERTY(PropertyInfo(Variant::INT, "uid" , "get_uid", "set_uid")); // unfinished and u should prolly change this
ADD_PROPERTY(PropertyInfo(Variant::INT, "scene_id" , "get_scene_id", "set_scene_id")); // unfinished and u should prolly change this
ADD_PROPERTY(PropertyInfo(Variant::INT, "owner_id" , "get_owner_id", "set_owner_id")); // unfinished and u should prolly change this
ADD_PROPERTY(PropertyInfo(Variant::INT, "team" , "get_team", "set_team")); // unfinished and u should prolly change this
ADD_PROPERTY(PropertyInfo(Variant::INT, "frame_created" , "get_frame_created", "set_frame_created")); // unfinished and u should prolly change this
ADD_PROPERTY(PropertyInfo(Variant::INT, "frame_deleted" , "get_frame_deleted", "set_frame_deleted")); // unfinished and u should prolly change this
ADD_PROPERTY(PropertyInfo(Variant::INT, "visibility" , "get_visibility", "set_visibility")); // unfinished and u should prolly change this
}