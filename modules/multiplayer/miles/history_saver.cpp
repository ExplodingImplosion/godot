#include history_saver.h
void _init(Node3d mp_level) {
	
}
void _exit_tree() {
	
}
void setup_replay() {
	
}
void _physics_process(float _delta) {
	
}
void serialize_frame() {
	
}
void add_current_frame_to_history() {
	
}
RefCounted get_recent_frame(int offset) {
	
}
RefCounted get_frame(int frame_num) {
	
}
RefCounted get_frame_clamped(int frame_num) {
	
}
void add_recent_frame(RefCounted frame) {
	
}
void HistorySaver::_bind_methods(){
ClassDB::bind_method(D_METHOD("_init", "mp_level"), &HistorySaver::_init);
ClassDB::bind_method(D_METHOD("_exit_tree"), &HistorySaver::_exit_tree);
ClassDB::bind_method(D_METHOD("setup_replay"), &HistorySaver::setup_replay);
ClassDB::bind_method(D_METHOD("_physics_process", "_delta"), &HistorySaver::_physics_process);
ClassDB::bind_method(D_METHOD("serialize_frame"), &HistorySaver::serialize_frame);
ClassDB::bind_method(D_METHOD("add_current_frame_to_history"), &HistorySaver::add_current_frame_to_history);
ClassDB::bind_method(D_METHOD("get_recent_frame", "offset"), &HistorySaver::get_recent_frame);
ClassDB::bind_method(D_METHOD("get_frame", "frame_num"), &HistorySaver::get_frame);
ClassDB::bind_method(D_METHOD("get_frame_clamped", "frame_num"), &HistorySaver::get_frame_clamped);
ClassDB::bind_method(D_METHOD("add_recent_frame", "frame"), &HistorySaver::add_recent_frame);
ADD_PROPERTY(PropertyInfo(Variant::ARRAY, "recent_frames", 31, "RefCounted", 4096))),); // unfinished and u should prolly change this
ADD_PROPERTY(PropertyInfo(Variant::OBJECT, "history"))),); // unfinished and u should prolly change this
ADD_PROPERTY(PropertyInfo(Variant::OBJECT, "level"))),); // unfinished and u should prolly change this
ADD_PROPERTY(PropertyInfo(Variant::INT, "recent_frame_idx"))),); // unfinished and u should prolly change this
}