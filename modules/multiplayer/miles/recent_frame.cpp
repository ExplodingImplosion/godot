#include recent_frame.h
void RecentFrame::restore(Node scene) {
	
}
void RecentFrame::merge(RefCounted frame) {
	
}
void RecentFrame::_init(Array serialized_nodes, int frame_num) {
	
}
PackedByteArray RecentFrame::get_delta(RefCounted prev_frame, int receiver_id, int hostility_mask) {
	
}
void RecentFrame::decode_delta(PackedByteArray delta, int frame_num, int delta_frame_num) {
	
}
int RecentFrame::get_num() {
	
}
int RecentFrame::set_num(int num) {
	
}
Dictionary RecentFrame::get_serializations() {
	
}
Dictionary RecentFrame::set_serializations(Dictionary serializations) {
	
}
void RecentFrame::_bind_methods(){
ClassDB::bind_method(D_METHOD("restore", "scene"), &RecentFrame::restore);
ClassDB::bind_method(D_METHOD("merge", "frame"), &RecentFrame::merge);
ClassDB::bind_method(D_METHOD("_init", "serialized_nodes", "frame_num"), &RecentFrame::_init);
ClassDB::bind_method(D_METHOD("get_delta", "prev_frame", "receiver_id", "hostility_mask"), &RecentFrame::get_delta);
ClassDB::bind_method(D_METHOD("decode_delta", "delta", "frame_num", "delta_frame_num"), &RecentFrame::decode_delta);
ADD_PROPERTY(PropertyInfo(Variant::INT, "num" , "get_num", "set_num")); // unfinished and u should prolly change this
ADD_PROPERTY(PropertyInfo(Variant::DICTIONARY, "serializations" , "get_serializations", "set_serializations", 38, "int;RefCounted", 4096)); // unfinished and u should prolly change this
}