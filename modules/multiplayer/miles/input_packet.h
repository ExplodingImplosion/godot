
class InputPacket: public RefCounted {
GDCLASS(InputPacket, RefCounted);
public:
int u32_signature;
int u8_num_inputs;
PackedByteArray inputs;
const int receivable_by = 2;
const bool compressable = true;
static void send();
void _execute(int sender_id);
static bool is_script_valid_packet(GdScript script);
void _execute(int _sender_id);
};
