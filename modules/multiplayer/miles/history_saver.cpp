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
	
}
Array HistorySaver::set_recent_frames(Array p_recent_frames) {
	
}
RefCounted HistorySaver::get_history() {
	
}
RefCounted HistorySaver::set_history(RefCounted p_history) {
	
}
Node3d HistorySaver::get_level() {
	
}
Node3d HistorySaver::set_level(Node3d p_level) {
	
}
int HistorySaver::get_recent_frame_idx() {
	
}
int HistorySaver::set_recent_frame_idx(int p_recent_frame_idx) {
	
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
ADD_PROPERTY(PropertyInfo(Variant::ARRAY, "recent_frames", 31, "RefCounted", 4096), "set_recent_frames," "get_recent_frames"); // unfinished and u should prolly change this
ADD_PROPERTY(PropertyInfo(Variant::OBJECT, "history"), "set_history," "get_history"); // unfinished and u should prolly change this
ADD_PROPERTY(PropertyInfo(Variant::OBJECT, "level"), "set_level," "get_level"); // unfinished and u should prolly change this
ADD_PROPERTY(PropertyInfo(Variant::INT, "recent_frame_idx"), "set_recent_frame_idx," "get_recent_frame_idx"); // unfinished and u should prolly change this
}