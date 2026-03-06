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
};
