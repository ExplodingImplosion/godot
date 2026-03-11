
class WorldStatePacket: public RefCounted {
GDCLASS(WorldStatePacket, RefCounted);
public:
int u32_frame;
int u32_last_frame;
int u32_input_signature;
int u32_acked_signature;
PackedByteArray contents;
const int receivable_by = 1;
const bool compressable = true;
static RefCounted create(int frame, int last_frame, PackedByteArray packet, int input_signature, int acked_signature);
void _execute(int sender_id);
String _to_string();
static bool is_script_valid_packet(GdScript script);
void _execute(int _sender_id);
int get_u32_frame();
void set_u32_frame(int p_u32_frame);
int get_u32_last_frame();
void set_u32_last_frame(int p_u32_last_frame);
int get_u32_input_signature();
void set_u32_input_signature(int p_u32_input_signature);
int get_u32_acked_signature();
void set_u32_acked_signature(int p_u32_acked_signature);
PackedByteArray get_contents();
void set_contents(PackedByteArray p_contents);
static void _bind_methods();
};
