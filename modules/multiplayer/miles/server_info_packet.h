
class ServerInfoPacket: public RefCounted {
GDCLASS(ServerInfoPacket, RefCounted);
public:
String scene_path;
int u8_max_players;
int u8_max_spectators;
int u16_tickrate;
const int receivable_by = 1;
const bool compressable = false;
const int packet_send_mode = 2;
static void send_to_client(int client_id);
void _execute(int _sender_id);
String _to_string();
static bool is_script_valid_packet(GdScript script);
void _execute(int _sender_id);
};
