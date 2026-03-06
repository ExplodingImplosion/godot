#include time_utils.h
static int usec_get_usec_offset_from_second(int usec) {
	
}
static float usec_to_seconds(int usec) {
	
}
static int seconds_to_usec(float seconds) {
	
}
static float seconds_to_usecf(float sec) {
	
}
static int msec_to_usec(int msec) {
	
}
static int msecf_to_usec(float msecf) {
	
}
static float msec_to_seconds(int msec) {
	
}
static float msecf_to_seconds(float msec) {
	
}
static int seconds_to_msec(float seconds) {
	
}
static float seconds_to_msecf(float seconds) {
	
}
static float usec_get_sec_offset_from_second(int usec) {
	
}
static void update_process_times() {
	
}
static void update_deferred_process_time() {
	
}
static void update_idle_process_time() {
	
}
static void update_physics_times() {
	
}
static void update_deferred_physics_time() {
	
}
static void update_idle_physics_time() {
	
}
static void begin_physics_tracking() {
	
}
static void start_time_thread() {
	
}
static void do_time_thread(void n) {
	
}
static float get_interpfrac() {
	
}
static void update_interpfrac() {
	
}
static bool is_startup() {
	
}
static float tick_time_value_towards(float value, float towards) {
	
}
static float tick_time_value_down(float value) {
	
}
static float tick_time_value_up(float value) {
	
}
static float frames_to_time(int frames) {
	
}
static int frames_to_ms(int frames) {
	
}
static float frames_to_ms_f(int frames) {
	
}
static int to_physics_frames(float time) {
	
}
static bool frames_elapsed(int since, int time) {
	
}
static int get_time_left_in_frame_usec() {
	
}
static int get_time_elapsed_in_frame_usec() {
	
}
static float get_time_left_in_frame() {
	
}
static float get_frame_frac() {
	
}
static float get_current_frame_pct() {
	
}
static float get_current_frame_pct_rem() {
	
}
static float get_frame_frac_remainder() {
	
}
static bool is_physics_frame_interval(int interval) {
	
}
static bool is_physics_time_interval(float interval) {
	
}
static float get_time_usec() {
	
}
static float get_time_msec() {
	
}
static float get_frame_percentage(int time_usec) {
	
}
static int get_func_time_usec(Callable method) {
	
}
static float get_func_frame_pct(Callable method, bool print_func_frame_pct) {
	
}
static int get_func_time_msec(Callable method) {
	
}
static float get_func_time_msecf(Callable method) {
	
}
static float get_func_time_seconds(Callable method) {
	
}
static bool is_frame_out_of_time(float max_frame_frac) {
	
}
static void check_func_time(Callable function, bool include_arguments, bool include_object, bool include_stack) {
	
}
static int get_time_since_physics_frame_usec() {
	
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