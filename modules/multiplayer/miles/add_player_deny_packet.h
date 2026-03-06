
class AddPlayerDenyPacket: public RefCounted {
GDCLASS(AddPlayerDenyPacket, RefCounted);
public:
const int receivable_by = 1;
const bool compressable = false;
const int packet_send_mode = 2;
void _execute(int _sender_id);
static bool is_script_valid_packet(GdScript script);
void _execute(int _sender_id);
};
