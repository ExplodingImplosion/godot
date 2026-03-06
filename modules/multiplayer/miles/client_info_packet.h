
class ClientInfoPacket: public RefCounted {
GDCLASS(ClientInfoPacket, RefCounted);
public:
int u8_max_command_frame_rate;
float half_buffer_time;
float half_input_buffer_time;
float half_server_input_buffer_time;
int u32_max_receive_bandwidth;
int u32_max_send_bandwidth;
const int receivable_by = 2;
const bool compressable = false;
const int packet_send_mode = 2;
static RefCounted create(RefCounted client);
void _execute(int sender_id);
static bool is_script_valid_packet(GdScript script);
void _execute(int _sender_id);
};
