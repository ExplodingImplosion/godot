#include client.h
#include player.h
#include multiplayer_level.h
#include frame.h
#include replay.h
#include teams.h
#include owner_id.h
#include network.h
#include network_packet.h
#include world_state_packet.h
#include ready_packet.h
#include info_packet.h
#include packet_sender.h
#include input_packet.h
#include world_state_confirmation_packet.h
#include multiplayer_session.h

class Client: public RefCounted {
GDCLASS(Client, RefCounted);
public:
int id;
Array players;
bool ready;
RefCounted most_recent_acked_frame;
RefCounted dirty_frame;
int server_acked_frame_num;
int last_decoded_frame_size;
int team;
RefCounted most_recent_received_frame;
int input_signature;
int acked_input_signature;
int server_input_signature;
int input_buffer_offset;
RefCounted replay;
bool fucked;
Dictionary uid_map;
int max_command_frame_rate;
float buffer_time;
float input_buffer_time;
float server_input_buffer_time;
int max_receive_bandwidth;
int max_send_bandwidth;
String _to_string();
void mark_ready();
RefCounted get_player(int player_id);
int get_team_mask();
void _init(int unique_id, int num_players);
void clear();
void add_player();
Array get_local_nodes();
void save_local_replay();
bool is_friendly_to(RefCounted client);
void send_delta_packet(RefCounted frame);
void receive_worldstate(RefCounted packet);
void add_packet_to_replay(PackedByteArray packet);
void decode_worldstate(RefCounted packet);
void notify_ready();
void send_info();
void set_info(int max_cfr, float buffer_length, float input_buffer_length, float server_input_buffer_length, int max_in_bandwith, int max_out_bandwidth);
void send_input();
int get_frame_delay();
int get_network_input_delay();
int get_server_input_buffer_size();
int get_total_input_delay();
void update_locally_owned_nodes(Array nodes);
void predict();
void tick_input_buffer();
void change_input_buffer_offset(int amnt);
void set_input_buffer_offset(int position);
void tick_player_inputs();
void tick_local();
int get_id();
int set_id(int p_id);
Array get_players();
Array set_players(Array p_players);
bool get_ready();
bool set_ready(bool p_ready);
RefCounted get_most_recent_acked_frame();
RefCounted set_most_recent_acked_frame(RefCounted p_most_recent_acked_frame);
RefCounted get_dirty_frame();
RefCounted set_dirty_frame(RefCounted p_dirty_frame);
int get_server_acked_frame_num();
int set_server_acked_frame_num(int p_server_acked_frame_num);
int get_last_decoded_frame_size();
int set_last_decoded_frame_size(int p_last_decoded_frame_size);
int get_team();
int set_team(int p_team);
RefCounted get_most_recent_received_frame();
RefCounted set_most_recent_received_frame(RefCounted p_most_recent_received_frame);
int get_input_signature();
int set_input_signature(int p_input_signature);
int get_acked_input_signature();
int set_acked_input_signature(int p_acked_input_signature);
int get_server_input_signature();
int set_server_input_signature(int p_server_input_signature);
int get_input_buffer_offset();
int set_input_buffer_offset(int p_input_buffer_offset);
RefCounted get_replay();
RefCounted set_replay(RefCounted p_replay);
bool get_fucked();
bool set_fucked(bool p_fucked);
Dictionary get_uid_map();
Dictionary set_uid_map(Dictionary p_uid_map);
int get_max_command_frame_rate();
int set_max_command_frame_rate(int p_max_command_frame_rate);
float get_buffer_time();
float set_buffer_time(float p_buffer_time);
float get_input_buffer_time();
float set_input_buffer_time(float p_input_buffer_time);
float get_server_input_buffer_time();
float set_server_input_buffer_time(float p_server_input_buffer_time);
int get_max_receive_bandwidth();
int set_max_receive_bandwidth(int p_max_receive_bandwidth);
int get_max_send_bandwidth();
int set_max_send_bandwidth(int p_max_send_bandwidth);
};
