#include history_saver.h
void HistorySaver::_init(Node3d mp_level) {
	
}
void HistorySaver::_exit_tree() {
	
}
void HistorySaver::setup_replay() {
	
}
void HistorySaver::_physics_process(float _delta) {
	
}
void HistorySaver::serialize_frame() {
	
}
void HistorySaver::add_current_frame_to_history() {
	
}
RefCounted HistorySaver::get_recent_frame(int offset) {
	
}
RefCounted HistorySaver::get_frame(int frame_num) {
	
}
RefCounted HistorySaver::get_frame_clamped(int frame_num) {
	
}
void HistorySaver::add_recent_frame(RefCounted frame) {
	
}
Array HistorySaver::get_recent_frames() {
	return recent_frames;
}
void HistorySaver::set_recent_frames(Array p_recent_frames) {
	recent_frames = p_recent_frames;
}
RefCounted HistorySaver::get_history() {
	return history;
}
void HistorySaver::set_history(RefCounted p_history) {
	history = p_history;
}
Node3d HistorySaver::get_level() {
	return level;
}
void HistorySaver::set_level(Node3d p_level) {
	level = p_level;
}
int HistorySaver::get_recent_frame_idx() {
	return recent_frame_idx;
}
void HistorySaver::set_recent_frame_idx(int p_recent_frame_idx) {
	recent_frame_idx = p_recent_frame_idx;
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
ClassDB::bind_method(D_METHOD("set_recent_frames", "value"), &HistorySaver::set_recent_frames);
ClassDB::bind_method(D_METHOD("get_recent_frames"), &HistorySaver::get_recent_frames);
ADD_PROPERTY(PropertyInfo(Variant::ARRAY, "recent_frames", PropertyHint(31), "RefCounted", 4096), "set_recent_frames", "get_recent_frames"); // unfinished and u should prolly change this
ClassDB::bind_method(D_METHOD("set_history", "value"), &HistorySaver::set_history);
ClassDB::bind_method(D_METHOD("get_history"), &HistorySaver::get_history);
ADD_PROPERTY(PropertyInfo(Variant::OBJECT, "history"), "set_history", "get_history"); // unfinished and u should prolly change this
ClassDB::bind_method(D_METHOD("set_level", "value"), &HistorySaver::set_level);
ClassDB::bind_method(D_METHOD("get_level"), &HistorySaver::get_level);
ADD_PROPERTY(PropertyInfo(Variant::OBJECT, "level"), "set_level", "get_level"); // unfinished and u should prolly change this
ClassDB::bind_method(D_METHOD("set_recent_frame_idx", "value"), &HistorySaver::set_recent_frame_idx);
ClassDB::bind_method(D_METHOD("get_recent_frame_idx"), &HistorySaver::get_recent_frame_idx);
ADD_PROPERTY(PropertyInfo(Variant::INT, "recent_frame_idx"), "set_recent_frame_idx", "get_recent_frame_idx"); // unfinished and u should prolly change this
}