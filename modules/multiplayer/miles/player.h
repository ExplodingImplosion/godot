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
RefCounted set_client(RefCounted client);
int get_id();
int set_id(int id);
int get_idx();
int set_idx(int idx);
int get_team();
int set_team(int team);
bool get_spectating();
bool set_spectating(bool spectating);
Camera3d get_camera();
Camera3d set_camera(Camera3d camera);
String get_action_suffix();
String set_action_suffix(String action_suffix);
Array get_input_buffer();
Array set_input_buffer(Array input_buffer);
Vector2 get_aim_angle();
Vector2 set_aim_angle(Vector2 aim_angle);
};
