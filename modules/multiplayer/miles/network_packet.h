#include "quack_multiplayer.h"
#include "network_packet.h"
#include "compression.h"
#include "network.h"
#include "multiplayer_level.h"
#include "multiplayer_session.h"
#include "packet_type_collection.h"
#include "packet_type.h"
#include "packet.h"
#include "world_state_packet.h"
#include "server_info_packet.h"
#include "change_team_accept_packet.h"
#include "change_team_deny_packet.h"
#include "add_player_accept_packet.h"
#include "add_player_deny_packet.h"
#include "input_packet.h"
#include "world_state_confirmation_packet.h"
#include "change_team_request_packet.h"
#include "add_player_request_packet.h"
#include "client_ready_packet.h"
#include "client_info_packet.h"
#include "remote_console_command_packet.h"
#include "serialization_fuckup_packet.h"

class NetworkPacket: public RefCounted {
GDCLASS(NetworkPacket, RefCounted);
public:
static bool print_in_packets;
static bool print_out_packets;
static Callable server_receive;
static Callable client_receive;
const int PACKET_TYPE = 0;
const int TIMES_COMPRESSED = 1;
const int PACKET_BEGIN_UNCOMPRESSED = 2;
const int PACKET_SIZE_INDICATOR_BEGIN = 2;
const int PACKET_SIZE_INDICATOR_BYTES = 2;
static bool get_print_in_packets();
static void set_print_in_packets(bool p_print_in_packets);
static bool get_print_out_packets();
static void set_print_out_packets(bool p_print_out_packets);
static Callable get_server_receive();
static void set_server_receive(Callable p_server_receive);
static Callable get_client_receive();
static void set_client_receive(Callable p_client_receive);
static void _bind_methods();
NetworkPacket();~NetworkPacket();
};
