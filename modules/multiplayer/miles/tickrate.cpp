#include tickrate.h
static float get_physics_delta() {
	
}
static void initialize() {
	
}
static bool is_running_at_target_tickrate() {
	
}
static void modify_physics_sim_speed(float frac) {
	
}
static void reset_physics_sim_speed() {
	
}
static void set_physics_simulation_rate(int rate) {
	
}
static void reset_tickrate() {
	
}
static int get_default_tickrate() {
	
}
static void assign_physics_delta(float delta, int rate) {
	
}
static void auto_assign_physics_delta() {
	
}
static void change_tickrate(int rate) {
	
}
static void change_time_scale(float scale) {
	
}
static void assign_time_scale() {
	
}
static int get_jitter_proof_buffer_size() {
	
}
static void adjust_for_buffer_size(int buffer_size) {
	
}
void Tickrate::_bind_methods(){
ClassDB::bind_method(D_METHOD("get_physics_delta"), &Tickrate::get_physics_delta);
ClassDB::bind_method(D_METHOD("initialize"), &Tickrate::initialize);
ClassDB::bind_method(D_METHOD("is_running_at_target_tickrate"), &Tickrate::is_running_at_target_tickrate);
ClassDB::bind_method(D_METHOD("modify_physics_sim_speed", "frac"), &Tickrate::modify_physics_sim_speed);
ClassDB::bind_method(D_METHOD("reset_physics_sim_speed"), &Tickrate::reset_physics_sim_speed);
ClassDB::bind_method(D_METHOD("set_physics_simulation_rate", "rate"), &Tickrate::set_physics_simulation_rate);
ClassDB::bind_method(D_METHOD("reset_tickrate"), &Tickrate::reset_tickrate);
ClassDB::bind_method(D_METHOD("get_default_tickrate"), &Tickrate::get_default_tickrate);
ClassDB::bind_method(D_METHOD("assign_physics_delta", "delta", "rate"), &Tickrate::assign_physics_delta);
ClassDB::bind_method(D_METHOD("auto_assign_physics_delta"), &Tickrate::auto_assign_physics_delta);
ClassDB::bind_method(D_METHOD("change_tickrate", "rate"), &Tickrate::change_tickrate);
ClassDB::bind_method(D_METHOD("change_time_scale", "scale"), &Tickrate::change_time_scale);
ClassDB::bind_method(D_METHOD("assign_time_scale"), &Tickrate::assign_time_scale);
ClassDB::bind_method(D_METHOD("get_jitter_proof_buffer_size"), &Tickrate::get_jitter_proof_buffer_size);
ClassDB::bind_method(D_METHOD("adjust_for_buffer_size", "buffer_size"), &Tickrate::adjust_for_buffer_size);
}