
class Packet: public RefCounted {
GDCLASS(Packet, RefCounted);
public:
static bool is_script_valid_packet(GdScript script);
void _execute(int _sender_id);
static void _bind_methods();
};
