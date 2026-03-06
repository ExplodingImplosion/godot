#include byte_utils.h
#include tickrate.h
#include window_utils.h

class TimeUtils: public RefCounted {
GDCLASS(TimeUtils, RefCounted);
public:
const int usec_in_seconds = 1000000;
const float seconds_in_usec = 0.000001;
const int usec_in_msec = 1000;
const float seconds_in_msec = 0.001;
const int msec_in_sec = 1000;
static int usec_get_usec_offset_from_second(int usec);
static float usec_to_seconds(int usec);
static int seconds_to_usec(float seconds);
static float seconds_to_usecf(float sec);
static int msec_to_usec(int msec);
static int msecf_to_usec(float msecf);
static float msec_to_seconds(int msec);
static float msecf_to_seconds(float msec);
static int seconds_to_msec(float seconds);
static float seconds_to_msecf(float seconds);
static float usec_get_sec_offset_from_second(int usec);
static void update_process_times();
static void update_deferred_process_time();
static void update_idle_process_time();
static void update_physics_times();
static void update_deferred_physics_time();
static void update_idle_physics_time();
static void begin_physics_tracking();
static void start_time_thread();
static void do_time_thread(void n);
static float get_interpfrac();
static void update_interpfrac();
static bool is_startup();
static float tick_time_value_towards(float value, float towards);
static float tick_time_value_down(float value);
static float tick_time_value_up(float value);
static float frames_to_time(int frames);
static int frames_to_ms(int frames);
static float frames_to_ms_f(int frames);
static int to_physics_frames(float time);
static bool frames_elapsed(int since, int time);
static int get_time_left_in_frame_usec();
static int get_time_elapsed_in_frame_usec();
static float get_time_left_in_frame();
static float get_frame_frac();
static float get_current_frame_pct();
static float get_current_frame_pct_rem();
static float get_frame_frac_remainder();
static bool is_physics_frame_interval(int interval);
static bool is_physics_time_interval(float interval);
static float get_time_usec();
static float get_time_msec();
static float get_frame_percentage(int time_usec);
static int get_func_time_usec(Callable method);
static float get_func_frame_pct(Callable method, bool print_func_frame_pct);
static int get_func_time_msec(Callable method);
static float get_func_time_msecf(Callable method);
static float get_func_time_seconds(Callable method);
static bool is_frame_out_of_time(float max_frame_frac);
static void check_func_time(Callable function, bool include_arguments, bool include_object, bool include_stack);
static int get_time_since_physics_frame_usec();
};
