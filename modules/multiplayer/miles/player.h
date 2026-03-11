#include "client".h
#include "player".h

class Player: public RefCounted {
GDCLASS(Player, RefCounted);
public:
RefCounted client;
int id;
int idx;
int team;
bool spectating;
Camera3D camera;
String action_suffix;
Array input_buffer;
Vector2 aim_angle;
void _init(RefCounted client_owner, int player_index);
RefCounted get_input(int prev_frame_offset);
RefCounted get_input_by_signature(int signature);
void apply_local_inputs();
RefCounted get_client();
void set_client(RefCounted p_client);
int get_id();
void set_id(int p_id);
int get_idx();
void set_idx(int p_idx);
int get_team();
void set_team(int p_team);
bool get_spectating();
void set_spectating(bool p_spectating);
Camera3D get_camera();
void set_camera(Camera3D p_camera);
String get_action_suffix();
void set_action_suffix(String p_action_suffix);
Array get_input_buffer();
void set_input_buffer(Array p_input_buffer);
Vector2 get_aim_angle();
void set_aim_angle(Vector2 p_aim_angle);
static void _bind_methods();
Player();~Player();
};
