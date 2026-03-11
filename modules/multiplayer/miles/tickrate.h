
class Tickrate: public RefCounted {
GDCLASS(Tickrate, RefCounted);
public:
const String PHYSICS_FRAMERATE_SETTING = "physics/common/physics_ticks_per_second";
const String TICKRATE_SETTING_PATH = "physics/common/physics_ticks_per_second";
static float get_physics_delta();
static void initialize();
static bool is_running_at_target_tickrate();
static void modify_physics_sim_speed(float frac);
static void reset_physics_sim_speed();
static void set_physics_simulation_rate(int rate);
static void reset_tickrate();
static int get_default_tickrate();
static void assign_physics_delta(float delta, int rate);
static void auto_assign_physics_delta();
static void change_tickrate(int rate);
static void change_time_scale(float scale);
static void assign_time_scale();
static int get_jitter_proof_buffer_size();
static void adjust_for_buffer_size(int buffer_size);
static void _bind_methods();
};
