
class ChangeTeamDenyPacket: public RefCounted {
GDCLASS(ChangeTeamDenyPacket, RefCounted);
public:
int u8_player_index;
const int receivable_by = 1;
const bool compressable = false;
const int packet_send_mode = 2;
void _execute(int _sender_id);
static bool is_script_valid_packet(GdScript script);
void _execute(int _sender_id);
int get_u8_player_index();
int set_u8_player_index(int u8_player_index);
};
