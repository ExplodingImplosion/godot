
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
int get_u32_signature();
void set_u32_signature(int p_u32_signature);
int get_u8_num_inputs();
void set_u8_num_inputs(int p_u8_num_inputs);
PackedByteArray get_inputs();
void set_inputs(PackedByteArray p_inputs);
static void _bind_methods();
InputPacket();~InputPacket();
};
