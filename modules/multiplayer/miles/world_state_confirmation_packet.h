
class WorldStateConfirmationPacket: public RefCounted {
GDCLASS(WorldStateConfirmationPacket, RefCounted);
public:
int u32_confirmation_frame_num;
const int receivable_by = 2;
const bool compressable = false;
static void send(int confirmation_frame_num);
void _execute(int sender_id);
static bool is_script_valid_packet(GdScript script);
void _execute(int _sender_id);
};
