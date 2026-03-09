#include client.h
#include player.h

class Player: public RefCounted {
GDCLASS(Player, RefCounted);
public:
RefCounted client;
int id;
int idx;
int team;
bool spectating;
Camera3d camera;
String action_suffix;
Array input_buffer;
Vector2 aim_angle;
void _init(RefCounted client_owner, int player_index);
RefCounted get_input(int prev_frame_offset);
RefCounted get_input_by_signature(int signature);
void apply_local_inputs();
RefCounted get_client();
RefCounted set_client(RefCounted p_client);
int get_id();
int set_id(int p_id);
int get_idx();
int set_idx(int p_idx);
int get_team();
int set_team(int p_team);
bool get_spectating();
bool set_spectating(bool p_spectating);
Camera3d get_camera();
Camera3d set_camera(Camera3d p_camera);
String get_action_suffix();
String set_action_suffix(String p_action_suffix);
Array get_input_buffer();
Array set_input_buffer(Array p_input_buffer);
Vector2 get_aim_angle();
Vector2 set_aim_angle(Vector2 p_aim_angle);
};
