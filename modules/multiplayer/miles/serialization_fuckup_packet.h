
class SerializationFuckupPacket: public RefCounted {
GDCLASS(SerializationFuckupPacket, RefCounted);
public:
int u8_fuckup;
Array data;
const int receivable_by = 2;
const bool compressable = false;
const int packet_send_mode = 2;
static void send(int fuckup);
void _execute(int sender_id);
String get_fuckup_string();
static bool is_script_valid_packet(GdScript script);
void _execute(int _sender_id);
};
