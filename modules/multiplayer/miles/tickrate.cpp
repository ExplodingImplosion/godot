#include tickrate.h
float Tickrate::get_physics_delta() {
	
}
void Tickrate::initialize() {
	
}
bool Tickrate::is_running_at_target_tickrate() {
	
}
void Tickrate::modify_physics_sim_speed(float frac) {
	
}
void Tickrate::reset_physics_sim_speed() {
	
}
void Tickrate::set_physics_simulation_rate(int rate) {
	
}
void Tickrate::reset_tickrate() {
	
}
int Tickrate::get_default_tickrate() {
	
}
void Tickrate::assign_physics_delta(float delta, int rate) {
	
}
void Tickrate::auto_assign_physics_delta() {
	
}
void Tickrate::change_tickrate(int rate) {
	
}
void Tickrate::change_time_scale(float scale) {
	
}
void Tickrate::assign_time_scale() {
	
}
int Tickrate::get_jitter_proof_buffer_size() {
	
}
void Tickrate::adjust_for_buffer_size(int buffer_size) {
	
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