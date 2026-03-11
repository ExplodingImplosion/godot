
class PacketType: public RefCounted {
GDCLASS(PacketType, RefCounted);
public:
static RefCounted client_packets;
static RefCounted server_packets;
static Array collection_list;
static bool ready;
GdScript packet_class;
int id;
NetworkedNode property_list;
int receivable_by;
bool compressable;
int send_mode;
const String compressable_string = "compressable";
const String packet_send_mode_string = "packet_send_mode";
const String receiveable_by_string = "receivable_by";
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
static RefCounted get_client_packets();
static void set_client_packets(RefCounted p_client_packets);
static RefCounted get_server_packets();
static void set_server_packets(RefCounted p_server_packets);
static Array get_collection_list();
static void set_collection_list(Array p_collection_list);
static bool get_ready();
static void set_ready(bool p_ready);
GdScript get_packet_class();
void set_packet_class(GdScript p_packet_class);
int get_id();
void set_id(int p_id);
NetworkedNode get_property_list();
void set_property_list(NetworkedNode p_property_list);
int get_receivable_by();
void set_receivable_by(int p_receivable_by);
bool get_compressable();
void set_compressable(bool p_compressable);
int get_send_mode();
void set_send_mode(int p_send_mode);
static void _bind_methods();
PacketType();~PacketType();
};
VARIANT_ENUM_CAST(PacketType::PacketReceiver);
