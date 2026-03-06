#include quack_multiplayer.h
#include network_packet.h
#include compression.h
#include network.h
#include stream_peer_bit_buffer.h
#include multiplayer_level.h
#include multiplayer_session.h
#include packet_type_collection.h
#include packet_type.h
#include packet.h
#include world_state_packet.h
#include server_info_packet.h
#include change_team_accept_packet.h
#include change_team_deny_packet.h
#include add_player_accept_packet.h
#include add_player_deny_packet.h
#include input_packet.h
#include world_state_confirmation_packet.h
#include change_team_request_packet.h
#include add_player_request_packet.h
#include client_ready_packet.h
#include client_info_packet.h
#include remote_console_command_packet.h
#include serialization_fuckup_packet.h

class NetworkPacket: public RefCounted {
GDCLASS(NetworkPacket, RefCounted);
public:
const int PACKET_TYPE = 0;
const int TIMES_COMPRESSED = 1;
const int PACKET_BEGIN_UNCOMPRESSED = 2;
const int PACKET_SIZE_INDICATOR_BEGIN = 2;
const int PACKET_SIZE_INDICATOR_BYTES = 2;
};
