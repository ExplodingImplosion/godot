
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
String get_scene_path();
String set_scene_path(String p_scene_path);
int get_u8_max_players();
int set_u8_max_players(int p_u8_max_players);
int get_u8_max_spectators();
int set_u8_max_spectators(int p_u8_max_spectators);
int get_u16_tickrate();
int set_u16_tickrate(int p_u16_tickrate);
};
