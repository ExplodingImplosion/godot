#include "tickrate.h"
Tickrate::Tickrate(){
	
}
Tickrate::~Tickrate(){
	
}
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
static float Tickrate::get_relative_speed() {
	return relative_speed;
}
static void Tickrate::set_relative_speed(float p_relative_speed) {
	relative_speed = p_relative_speed;
}
static int Tickrate::get_target_physics_rate() {
	return target_physics_rate;
}
static void Tickrate::set_target_physics_rate(int p_target_physics_rate) {
	target_physics_rate = p_target_physics_rate;
}
static float Tickrate::get_physics_delta() {
	return physics_delta;
}
static void Tickrate::set_physics_delta(float p_physics_delta) {
	physics_delta = p_physics_delta;
}
static float Tickrate::get_time_scale() {
	return time_scale;
}
static void Tickrate::set_time_scale(float p_time_scale) {
	time_scale = p_time_scale;
}
void Tickrate::_bind_methods(){
ClassDB::bind_static_method("Tickrate", D_METHOD("get_physics_delta"), &Tickrate::get_physics_delta);
ClassDB::bind_static_method("Tickrate", D_METHOD("initialize"), &Tickrate::initialize);
ClassDB::bind_static_method("Tickrate", D_METHOD("is_running_at_target_tickrate"), &Tickrate::is_running_at_target_tickrate);
ClassDB::bind_static_method("Tickrate", D_METHOD("modify_physics_sim_speed", "frac"), &Tickrate::modify_physics_sim_speed);
ClassDB::bind_static_method("Tickrate", D_METHOD("reset_physics_sim_speed"), &Tickrate::reset_physics_sim_speed);
ClassDB::bind_static_method("Tickrate", D_METHOD("set_physics_simulation_rate", "rate"), &Tickrate::set_physics_simulation_rate);
ClassDB::bind_static_method("Tickrate", D_METHOD("reset_tickrate"), &Tickrate::reset_tickrate);
ClassDB::bind_static_method("Tickrate", D_METHOD("get_default_tickrate"), &Tickrate::get_default_tickrate);
ClassDB::bind_static_method("Tickrate", D_METHOD("assign_physics_delta", "delta", "rate"), &Tickrate::assign_physics_delta);
ClassDB::bind_static_method("Tickrate", D_METHOD("auto_assign_physics_delta"), &Tickrate::auto_assign_physics_delta);
ClassDB::bind_static_method("Tickrate", D_METHOD("change_tickrate", "rate"), &Tickrate::change_tickrate);
ClassDB::bind_static_method("Tickrate", D_METHOD("change_time_scale", "scale"), &Tickrate::change_time_scale);
ClassDB::bind_static_method("Tickrate", D_METHOD("assign_time_scale"), &Tickrate::assign_time_scale);
ClassDB::bind_static_method("Tickrate", D_METHOD("get_jitter_proof_buffer_size"), &Tickrate::get_jitter_proof_buffer_size);
ClassDB::bind_static_method("Tickrate", D_METHOD("adjust_for_buffer_size", "buffer_size"), &Tickrate::adjust_for_buffer_size);
ClassDB::bind_method(D_METHOD("set_relative_speed", "value"), &Tickrate::set_relative_speed);
ClassDB::bind_method(D_METHOD("get_relative_speed"), &Tickrate::get_relative_speed);
ADD_PROPERTY(PropertyInfo(Variant::FLOAT, "relative_speed"), "set_relative_speed", "get_relative_speed"); // unfinished and u should prolly change this
ClassDB::bind_method(D_METHOD("set_target_physics_rate", "value"), &Tickrate::set_target_physics_rate);
ClassDB::bind_method(D_METHOD("get_target_physics_rate"), &Tickrate::get_target_physics_rate);
ADD_PROPERTY(PropertyInfo(Variant::INT, "target_physics_rate"), "set_target_physics_rate", "get_target_physics_rate"); // unfinished and u should prolly change this
ClassDB::bind_method(D_METHOD("set_physics_delta", "value"), &Tickrate::set_physics_delta);
ClassDB::bind_method(D_METHOD("get_physics_delta"), &Tickrate::get_physics_delta);
ADD_PROPERTY(PropertyInfo(Variant::FLOAT, "physics_delta"), "set_physics_delta", "get_physics_delta"); // unfinished and u should prolly change this
ClassDB::bind_method(D_METHOD("set_time_scale", "value"), &Tickrate::set_time_scale);
ClassDB::bind_method(D_METHOD("get_time_scale"), &Tickrate::get_time_scale);
ADD_PROPERTY(PropertyInfo(Variant::FLOAT, "time_scale"), "set_time_scale", "get_time_scale"); // unfinished and u should prolly change this
}