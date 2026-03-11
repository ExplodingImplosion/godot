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
	return num;
}
void RecentFrame::set_num(int p_num) {
	num = p_num;
}
Dictionary RecentFrame::get_serializations() {
	return serializations;
}
void RecentFrame::set_serializations(Dictionary p_serializations) {
	serializations = p_serializations;
}
void RecentFrame::_bind_methods(){
ClassDB::bind_method(D_METHOD("restore", "scene"), &RecentFrame::restore);
ClassDB::bind_method(D_METHOD("merge", "frame"), &RecentFrame::merge);
ClassDB::bind_method(D_METHOD("_init", "serialized_nodes", "frame_num"), &RecentFrame::_init);
ClassDB::bind_method(D_METHOD("get_delta", "prev_frame", "receiver_id", "hostility_mask"), &RecentFrame::get_delta);
ClassDB::bind_method(D_METHOD("decode_delta", "delta", "frame_num", "delta_frame_num"), &RecentFrame::decode_delta);
ClassDB::bind_method(D_METHOD("set_num", "value"), &RecentFrame::set_num);
ClassDB::bind_method(D_METHOD("get_num"), &RecentFrame::get_num);
ADD_PROPERTY(PropertyInfo(Variant::INT, "num"), "set_num", "get_num"); // unfinished and u should prolly change this
ClassDB::bind_method(D_METHOD("set_serializations", "value"), &RecentFrame::set_serializations);
ClassDB::bind_method(D_METHOD("get_serializations"), &RecentFrame::get_serializations);
ADD_PROPERTY(PropertyInfo(Variant::DICTIONARY, "serializations", PropertyHint(38), "int;RefCounted", 4096), "set_serializations", "get_serializations"); // unfinished and u should prolly change this
}