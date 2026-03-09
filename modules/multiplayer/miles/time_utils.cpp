#include time_utils.h
int TimeUtils::usec_get_usec_offset_from_second(int usec) {
	
}
float TimeUtils::usec_to_seconds(int usec) {
	
}
int TimeUtils::seconds_to_usec(float seconds) {
	
}
float TimeUtils::seconds_to_usecf(float sec) {
	
}
int TimeUtils::msec_to_usec(int msec) {
	
}
int TimeUtils::msecf_to_usec(float msecf) {
	
}
float TimeUtils::msec_to_seconds(int msec) {
	
}
float TimeUtils::msecf_to_seconds(float msec) {
	
}
int TimeUtils::seconds_to_msec(float seconds) {
	
}
float TimeUtils::seconds_to_msecf(float seconds) {
	
}
float TimeUtils::usec_get_sec_offset_from_second(int usec) {
	
}
void TimeUtils::update_process_times() {
	
}
void TimeUtils::update_deferred_process_time() {
	
}
void TimeUtils::update_idle_process_time() {
	
}
void TimeUtils::update_physics_times() {
	
}
void TimeUtils::update_deferred_physics_time() {
	
}
void TimeUtils::update_idle_physics_time() {
	
}
void TimeUtils::begin_physics_tracking() {
	
}
void TimeUtils::start_time_thread() {
	
}
void TimeUtils::do_time_thread(void n) {
	
}
float TimeUtils::get_interpfrac() {
	
}
void TimeUtils::update_interpfrac() {
	
}
bool TimeUtils::is_startup() {
	
}
float TimeUtils::tick_time_value_towards(float value, float towards) {
	
}
float TimeUtils::tick_time_value_down(float value) {
	
}
float TimeUtils::tick_time_value_up(float value) {
	
}
float TimeUtils::frames_to_time(int frames) {
	
}
int TimeUtils::frames_to_ms(int frames) {
	
}
float TimeUtils::frames_to_ms_f(int frames) {
	
}
int TimeUtils::to_physics_frames(float time) {
	
}
bool TimeUtils::frames_elapsed(int since, int time) {
	
}
int TimeUtils::get_time_left_in_frame_usec() {
	
}
int TimeUtils::get_time_elapsed_in_frame_usec() {
	
}
float TimeUtils::get_time_left_in_frame() {
	
}
float TimeUtils::get_frame_frac() {
	
}
float TimeUtils::get_current_frame_pct() {
	
}
float TimeUtils::get_current_frame_pct_rem() {
	
}
float TimeUtils::get_frame_frac_remainder() {
	
}
bool TimeUtils::is_physics_frame_interval(int interval) {
	
}
bool TimeUtils::is_physics_time_interval(float interval) {
	
}
float TimeUtils::get_time_usec() {
	
}
float TimeUtils::get_time_msec() {
	
}
float TimeUtils::get_frame_percentage(int time_usec) {
	
}
int TimeUtils::get_func_time_usec(Callable method) {
	
}
float TimeUtils::get_func_frame_pct(Callable method, bool print_func_frame_pct) {
	
}
int TimeUtils::get_func_time_msec(Callable method) {
	
}
float TimeUtils::get_func_time_msecf(Callable method) {
	
}
float TimeUtils::get_func_time_seconds(Callable method) {
	
}
bool TimeUtils::is_frame_out_of_time(float max_frame_frac) {
	
}
void TimeUtils::check_func_time(Callable function, bool include_arguments, bool include_object, bool include_stack) {
	
}
int TimeUtils::get_time_since_physics_frame_usec() {
	
}
void TimeUtils::_bind_methods(){
ClassDB::bind_method(D_METHOD("usec_get_usec_offset_from_second", "usec"), &TimeUtils::usec_get_usec_offset_from_second);
ClassDB::bind_method(D_METHOD("usec_to_seconds", "usec"), &TimeUtils::usec_to_seconds);
ClassDB::bind_method(D_METHOD("seconds_to_usec", "seconds"), &TimeUtils::seconds_to_usec);
ClassDB::bind_method(D_METHOD("seconds_to_usecf", "sec"), &TimeUtils::seconds_to_usecf);
ClassDB::bind_method(D_METHOD("msec_to_usec", "msec"), &TimeUtils::msec_to_usec);
ClassDB::bind_method(D_METHOD("msecf_to_usec", "msecf"), &TimeUtils::msecf_to_usec);
ClassDB::bind_method(D_METHOD("msec_to_seconds", "msec"), &TimeUtils::msec_to_seconds);
ClassDB::bind_method(D_METHOD("msecf_to_seconds", "msec"), &TimeUtils::msecf_to_seconds);
ClassDB::bind_method(D_METHOD("seconds_to_msec", "seconds"), &TimeUtils::seconds_to_msec);
ClassDB::bind_method(D_METHOD("seconds_to_msecf", "seconds"), &TimeUtils::seconds_to_msecf);
ClassDB::bind_method(D_METHOD("usec_get_sec_offset_from_second", "usec"), &TimeUtils::usec_get_sec_offset_from_second);
ClassDB::bind_method(D_METHOD("update_process_times"), &TimeUtils::update_process_times);
ClassDB::bind_method(D_METHOD("update_deferred_process_time"), &TimeUtils::update_deferred_process_time);
ClassDB::bind_method(D_METHOD("update_idle_process_time"), &TimeUtils::update_idle_process_time);
ClassDB::bind_method(D_METHOD("update_physics_times"), &TimeUtils::update_physics_times);
ClassDB::bind_method(D_METHOD("update_deferred_physics_time"), &TimeUtils::update_deferred_physics_time);
ClassDB::bind_method(D_METHOD("update_idle_physics_time"), &TimeUtils::update_idle_physics_time);
ClassDB::bind_method(D_METHOD("begin_physics_tracking"), &TimeUtils::begin_physics_tracking);
ClassDB::bind_method(D_METHOD("start_time_thread"), &TimeUtils::start_time_thread);
ClassDB::bind_method(D_METHOD("do_time_thread", "n"), &TimeUtils::do_time_thread);
ClassDB::bind_method(D_METHOD("get_interpfrac"), &TimeUtils::get_interpfrac);
ClassDB::bind_method(D_METHOD("update_interpfrac"), &TimeUtils::update_interpfrac);
ClassDB::bind_method(D_METHOD("is_startup"), &TimeUtils::is_startup);
ClassDB::bind_method(D_METHOD("tick_time_value_towards", "value", "towards"), &TimeUtils::tick_time_value_towards);
ClassDB::bind_method(D_METHOD("tick_time_value_down", "value"), &TimeUtils::tick_time_value_down);
ClassDB::bind_method(D_METHOD("tick_time_value_up", "value"), &TimeUtils::tick_time_value_up);
ClassDB::bind_method(D_METHOD("frames_to_time", "frames"), &TimeUtils::frames_to_time);
ClassDB::bind_method(D_METHOD("frames_to_ms", "frames"), &TimeUtils::frames_to_ms);
ClassDB::bind_method(D_METHOD("frames_to_ms_f", "frames"), &TimeUtils::frames_to_ms_f);
ClassDB::bind_method(D_METHOD("to_physics_frames", "time"), &TimeUtils::to_physics_frames);
ClassDB::bind_method(D_METHOD("frames_elapsed", "since", "time"), &TimeUtils::frames_elapsed);
ClassDB::bind_method(D_METHOD("get_time_left_in_frame_usec"), &TimeUtils::get_time_left_in_frame_usec);
ClassDB::bind_method(D_METHOD("get_time_elapsed_in_frame_usec"), &TimeUtils::get_time_elapsed_in_frame_usec);
ClassDB::bind_method(D_METHOD("get_time_left_in_frame"), &TimeUtils::get_time_left_in_frame);
ClassDB::bind_method(D_METHOD("get_frame_frac"), &TimeUtils::get_frame_frac);
ClassDB::bind_method(D_METHOD("get_current_frame_pct"), &TimeUtils::get_current_frame_pct);
ClassDB::bind_method(D_METHOD("get_current_frame_pct_rem"), &TimeUtils::get_current_frame_pct_rem);
ClassDB::bind_method(D_METHOD("get_frame_frac_remainder"), &TimeUtils::get_frame_frac_remainder);
ClassDB::bind_method(D_METHOD("is_physics_frame_interval", "interval"), &TimeUtils::is_physics_frame_interval);
ClassDB::bind_method(D_METHOD("is_physics_time_interval", "interval"), &TimeUtils::is_physics_time_interval);
ClassDB::bind_method(D_METHOD("get_time_usec"), &TimeUtils::get_time_usec);
ClassDB::bind_method(D_METHOD("get_time_msec"), &TimeUtils::get_time_msec);
ClassDB::bind_method(D_METHOD("get_frame_percentage", "time_usec"), &TimeUtils::get_frame_percentage);
ClassDB::bind_method(D_METHOD("get_func_time_usec", "method"), &TimeUtils::get_func_time_usec);
ClassDB::bind_method(D_METHOD("get_func_frame_pct", "method", "print_func_frame_pct"), &TimeUtils::get_func_frame_pct);
ClassDB::bind_method(D_METHOD("get_func_time_msec", "method"), &TimeUtils::get_func_time_msec);
ClassDB::bind_method(D_METHOD("get_func_time_msecf", "method"), &TimeUtils::get_func_time_msecf);
ClassDB::bind_method(D_METHOD("get_func_time_seconds", "method"), &TimeUtils::get_func_time_seconds);
ClassDB::bind_method(D_METHOD("is_frame_out_of_time", "max_frame_frac"), &TimeUtils::is_frame_out_of_time);
ClassDB::bind_method(D_METHOD("check_func_time", "function", "include_arguments", "include_object", "include_stack"), &TimeUtils::check_func_time);
ClassDB::bind_method(D_METHOD("get_time_since_physics_frame_usec"), &TimeUtils::get_time_since_physics_frame_usec);
}