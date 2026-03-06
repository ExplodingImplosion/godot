
class AddPlayerRequestPacket: public RefCounted {
GDCLASS(AddPlayerRequestPacket, RefCounted);
public:
const int receivable_by = 2;
const bool compressable = false;
const int packet_send_mode = 2;
static void send();
void _execute(int sender_id);
static bool is_script_valid_packet(GdScript script);
void _execute(int _sender_id);
};
