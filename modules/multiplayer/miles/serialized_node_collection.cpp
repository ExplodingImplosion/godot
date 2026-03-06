#include serialized_node_collection.h
Node spawn(Node scene) {
	
}
bool was_deleted() {
	
}
String _to_string() {
	
}
void update_interpolation(Array new_property_lists) {
	
}
RefCounted duplicate() {
	
}
static RefCounted create_fresh(int uid, int scene_id, int owner_id, int team, int frame_created, Array node_configs) {
	
}
void _init(Array property_lists, int uid, int scene_id, int owner_id, int team, int frame_created, Array node_configs, bool duplicate) {
	
}
void encode_spawn(StreamPeerBuffer buffer, int vis_type) {
	
}
void decode_spawn(StreamPeerBuffer buffer, int vis_type) {
	
}
void encode_delta(RefCounted prev, StreamPeerBuffer buffer, int vis_type) {
	
}
void decode_delta(StreamPeerBuffer buffer, int vis_type) {
	
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
ADD_PROPERTY(PropertyInfo(Variant::ARRAY, "node_configs", 31, "NetworkedNode", 4096))),); // unfinished and u should prolly change this
ADD_PROPERTY(PropertyInfo(Variant::ARRAY, "property_lists", 31, "Array", 4096))),); // unfinished and u should prolly change this
ADD_PROPERTY(PropertyInfo(Variant::ARRAY, "prev_property_lists", 31, "Array", 4096))),); // unfinished and u should prolly change this
ADD_PROPERTY(PropertyInfo(Variant::INT, "num_nodes"))),); // unfinished and u should prolly change this
ADD_PROPERTY(PropertyInfo(Variant::INT, "uid"))),); // unfinished and u should prolly change this
ADD_PROPERTY(PropertyInfo(Variant::INT, "scene_id"))),); // unfinished and u should prolly change this
ADD_PROPERTY(PropertyInfo(Variant::INT, "owner_id"))),); // unfinished and u should prolly change this
ADD_PROPERTY(PropertyInfo(Variant::INT, "team"))),); // unfinished and u should prolly change this
ADD_PROPERTY(PropertyInfo(Variant::INT, "frame_created"))),); // unfinished and u should prolly change this
ADD_PROPERTY(PropertyInfo(Variant::INT, "frame_deleted"))),); // unfinished and u should prolly change this
ADD_PROPERTY(PropertyInfo(Variant::INT, "visibility"))),); // unfinished and u should prolly change this
}