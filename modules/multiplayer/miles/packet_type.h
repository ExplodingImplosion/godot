
class PacketType: public RefCounted {
GDCLASS(PacketType, RefCounted);
public:
GdScript packet_class;
int id;
NetworkedNode property_list;
int receivable_by;
bool compressable;
int send_mode;
const String compressable_string = compressable;
const String packet_send_mode_string = packet_send_mode;
const String receiveable_by_string = receivable_by;
enum PacketReceiver {
CLIENT = 1,
SERVER = 2,
BOTH = 3,
NEITHER = 0,
PACKET_RECEIVE_MAX = 4,
PACKET_RECEIVE_MIN = -1,
};
String _to_string();
static void setup_packet_map();
void _init(GdScript script);
static bool is_valid_packet_property(Dictionary info);
PackedByteArray packet_encode(RefCounted packet);
RefCounted packet_decode(PackedByteArray packet);
static RefCounted decode(int sender_id, PackedByteArray packet, RefCounted collection);
static void send_packet_to_server(RefCounted packet);
static void send_packet_to_client(int id, RefCounted packet);
};
VARIANT_ENUM_CAST(PacketType::PacketReceiver);
