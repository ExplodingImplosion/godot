#include client.h
String Client::_to_string() {
	
}
void Client::mark_ready() {
	
}
RefCounted Client::get_player(int player_id) {
	
}
int Client::get_team_mask() {
	
}
void Client::_init(int unique_id, int num_players) {
	
}
void Client::clear() {
	
}
void Client::add_player() {
	
}
Array Client::get_local_nodes() {
	
}
void Client::save_local_replay() {
	
}
bool Client::is_friendly_to(RefCounted client) {
	
}
void Client::send_delta_packet(RefCounted frame) {
	
}
void Client::receive_worldstate(RefCounted packet) {
	
}
void Client::add_packet_to_replay(PackedByteArray packet) {
	
}
void Client::decode_worldstate(RefCounted packet) {
	
}
void Client::notify_ready() {
	
}
void Client::send_info() {
	
}
void Client::set_info(int max_cfr, float buffer_length, float input_buffer_length, float server_input_buffer_length, int max_in_bandwith, int max_out_bandwidth) {
	
}
void Client::send_input() {
	
}
int Client::get_frame_delay() {
	
}
int Client::get_network_input_delay() {
	
}
int Client::get_server_input_buffer_size() {
	
}
int Client::get_total_input_delay() {
	
}
void Client::update_locally_owned_nodes(Array nodes) {
	
}
void Client::predict() {
	
}
void Client::tick_input_buffer() {
	
}
void Client::change_input_buffer_offset(int amnt) {
	
}
void Client::set_input_buffer_offset(int position) {
	
}
void Client::tick_player_inputs() {
	
}
void Client::tick_local() {
	
}
int Client::get_id() {
	
}
int Client::set_id(int p_id) {
	
}
Array Client::get_players() {
	
}
Array Client::set_players(Array p_players) {
	
}
bool Client::get_ready() {
	
}
bool Client::set_ready(bool p_ready) {
	
}
RefCounted Client::get_most_recent_acked_frame() {
	
}
RefCounted Client::set_most_recent_acked_frame(RefCounted p_most_recent_acked_frame) {
	
}
RefCounted Client::get_dirty_frame() {
	
}
RefCounted Client::set_dirty_frame(RefCounted p_dirty_frame) {
	
}
int Client::get_server_acked_frame_num() {
	
}
int Client::set_server_acked_frame_num(int p_server_acked_frame_num) {
	
}
int Client::get_last_decoded_frame_size() {
	
}
int Client::set_last_decoded_frame_size(int p_last_decoded_frame_size) {
	
}
int Client::get_team() {
	
}
int Client::set_team(int p_team) {
	
}
RefCounted Client::get_most_recent_received_frame() {
	
}
RefCounted Client::set_most_recent_received_frame(RefCounted p_most_recent_received_frame) {
	
}
int Client::get_input_signature() {
	
}
int Client::set_input_signature(int p_input_signature) {
	
}
int Client::get_acked_input_signature() {
	
}
int Client::set_acked_input_signature(int p_acked_input_signature) {
	
}
int Client::get_server_input_signature() {
	
}
int Client::set_server_input_signature(int p_server_input_signature) {
	
}
int Client::get_input_buffer_offset() {
	
}
int Client::set_input_buffer_offset(int p_input_buffer_offset) {
	
}
RefCounted Client::get_replay() {
	
}
RefCounted Client::set_replay(RefCounted p_replay) {
	
}
bool Client::get_fucked() {
	
}
bool Client::set_fucked(bool p_fucked) {
	
}
Dictionary Client::get_uid_map() {
	
}
Dictionary Client::set_uid_map(Dictionary p_uid_map) {
	
}
int Client::get_max_command_frame_rate() {
	
}
int Client::set_max_command_frame_rate(int p_max_command_frame_rate) {
	
}
float Client::get_buffer_time() {
	
}
float Client::set_buffer_time(float p_buffer_time) {
	
}
float Client::get_input_buffer_time() {
	
}
float Client::set_input_buffer_time(float p_input_buffer_time) {
	
}
float Client::get_server_input_buffer_time() {
	
}
float Client::set_server_input_buffer_time(float p_server_input_buffer_time) {
	
}
int Client::get_max_receive_bandwidth() {
	
}
int Client::set_max_receive_bandwidth(int p_max_receive_bandwidth) {
	
}
int Client::get_max_send_bandwidth() {
	
}
int Client::set_max_send_bandwidth(int p_max_send_bandwidth) {
	
}
void Client::_bind_methods(){
ClassDB::bind_method(D_METHOD("_to_string"), &Client::_to_string);
ClassDB::bind_method(D_METHOD("mark_ready"), &Client::mark_ready);
ClassDB::bind_method(D_METHOD("get_player", "player_id"), &Client::get_player);
ClassDB::bind_method(D_METHOD("get_team_mask"), &Client::get_team_mask);
ClassDB::bind_method(D_METHOD("_init", "unique_id", "num_players"), &Client::_init);
ClassDB::bind_method(D_METHOD("clear"), &Client::clear);
ClassDB::bind_method(D_METHOD("add_player"), &Client::add_player);
ClassDB::bind_method(D_METHOD("get_local_nodes"), &Client::get_local_nodes);
ClassDB::bind_method(D_METHOD("save_local_replay"), &Client::save_local_replay);
ClassDB::bind_method(D_METHOD("is_friendly_to", "client"), &Client::is_friendly_to);
ClassDB::bind_method(D_METHOD("send_delta_packet", "frame"), &Client::send_delta_packet);
ClassDB::bind_method(D_METHOD("receive_worldstate", "packet"), &Client::receive_worldstate);
ClassDB::bind_method(D_METHOD("add_packet_to_replay", "packet"), &Client::add_packet_to_replay);
ClassDB::bind_method(D_METHOD("decode_worldstate", "packet"), &Client::decode_worldstate);
ClassDB::bind_method(D_METHOD("notify_ready"), &Client::notify_ready);
ClassDB::bind_method(D_METHOD("send_info"), &Client::send_info);
ClassDB::bind_method(D_METHOD("set_info", "max_cfr", "buffer_length", "input_buffer_length", "server_input_buffer_length", "max_in_bandwith", "max_out_bandwidth"), &Client::set_info);
ClassDB::bind_method(D_METHOD("send_input"), &Client::send_input);
ClassDB::bind_method(D_METHOD("get_frame_delay"), &Client::get_frame_delay);
ClassDB::bind_method(D_METHOD("get_network_input_delay"), &Client::get_network_input_delay);
ClassDB::bind_method(D_METHOD("get_server_input_buffer_size"), &Client::get_server_input_buffer_size);
ClassDB::bind_method(D_METHOD("get_total_input_delay"), &Client::get_total_input_delay);
ClassDB::bind_method(D_METHOD("update_locally_owned_nodes", "nodes"), &Client::update_locally_owned_nodes);
ClassDB::bind_method(D_METHOD("predict"), &Client::predict);
ClassDB::bind_method(D_METHOD("tick_input_buffer"), &Client::tick_input_buffer);
ClassDB::bind_method(D_METHOD("change_input_buffer_offset", "amnt"), &Client::change_input_buffer_offset);
ClassDB::bind_method(D_METHOD("set_input_buffer_offset", "position"), &Client::set_input_buffer_offset);
ClassDB::bind_method(D_METHOD("tick_player_inputs"), &Client::tick_player_inputs);
ClassDB::bind_method(D_METHOD("tick_local"), &Client::tick_local);
ClassDB::bind_method(D_METHOD("set_id", "value"), &Client::set_id);
ClassDB::bind_method(D_METHOD("get_id"), &Client::get_id);
ADD_PROPERTY(PropertyInfo(Variant::INT, "id"), "set_id," "get_id"); // unfinished and u should prolly change this
ClassDB::bind_method(D_METHOD("set_players", "value"), &Client::set_players);
ClassDB::bind_method(D_METHOD("get_players"), &Client::get_players);
ADD_PROPERTY(PropertyInfo(Variant::ARRAY, "players", 31, "RefCounted", 4096), "set_players," "get_players"); // unfinished and u should prolly change this
ClassDB::bind_method(D_METHOD("set_ready", "value"), &Client::set_ready);
ClassDB::bind_method(D_METHOD("get_ready"), &Client::get_ready);
ADD_PROPERTY(PropertyInfo(Variant::BOOL, "ready"), "set_ready," "get_ready"); // unfinished and u should prolly change this
ClassDB::bind_method(D_METHOD("set_most_recent_acked_frame", "value"), &Client::set_most_recent_acked_frame);
ClassDB::bind_method(D_METHOD("get_most_recent_acked_frame"), &Client::get_most_recent_acked_frame);
ADD_PROPERTY(PropertyInfo(Variant::OBJECT, "most_recent_acked_frame"), "set_most_recent_acked_frame," "get_most_recent_acked_frame"); // unfinished and u should prolly change this
ClassDB::bind_method(D_METHOD("set_dirty_frame", "value"), &Client::set_dirty_frame);
ClassDB::bind_method(D_METHOD("get_dirty_frame"), &Client::get_dirty_frame);
ADD_PROPERTY(PropertyInfo(Variant::OBJECT, "dirty_frame"), "set_dirty_frame," "get_dirty_frame"); // unfinished and u should prolly change this
ClassDB::bind_method(D_METHOD("set_server_acked_frame_num", "value"), &Client::set_server_acked_frame_num);
ClassDB::bind_method(D_METHOD("get_server_acked_frame_num"), &Client::get_server_acked_frame_num);
ADD_PROPERTY(PropertyInfo(Variant::INT, "server_acked_frame_num"), "set_server_acked_frame_num," "get_server_acked_frame_num"); // unfinished and u should prolly change this
ClassDB::bind_method(D_METHOD("set_last_decoded_frame_size", "value"), &Client::set_last_decoded_frame_size);
ClassDB::bind_method(D_METHOD("get_last_decoded_frame_size"), &Client::get_last_decoded_frame_size);
ADD_PROPERTY(PropertyInfo(Variant::INT, "last_decoded_frame_size"), "set_last_decoded_frame_size," "get_last_decoded_frame_size"); // unfinished and u should prolly change this
ClassDB::bind_method(D_METHOD("set_team", "value"), &Client::set_team);
ClassDB::bind_method(D_METHOD("get_team"), &Client::get_team);
ADD_PROPERTY(PropertyInfo(Variant::INT, "team"), "set_team," "get_team"); // unfinished and u should prolly change this
ClassDB::bind_method(D_METHOD("set_most_recent_received_frame", "value"), &Client::set_most_recent_received_frame);
ClassDB::bind_method(D_METHOD("get_most_recent_received_frame"), &Client::get_most_recent_received_frame);
ADD_PROPERTY(PropertyInfo(Variant::OBJECT, "most_recent_received_frame"), "set_most_recent_received_frame," "get_most_recent_received_frame"); // unfinished and u should prolly change this
ClassDB::bind_method(D_METHOD("set_input_signature", "value"), &Client::set_input_signature);
ClassDB::bind_method(D_METHOD("get_input_signature"), &Client::get_input_signature);
ADD_PROPERTY(PropertyInfo(Variant::INT, "input_signature"), "set_input_signature," "get_input_signature"); // unfinished and u should prolly change this
ClassDB::bind_method(D_METHOD("set_acked_input_signature", "value"), &Client::set_acked_input_signature);
ClassDB::bind_method(D_METHOD("get_acked_input_signature"), &Client::get_acked_input_signature);
ADD_PROPERTY(PropertyInfo(Variant::INT, "acked_input_signature"), "set_acked_input_signature," "get_acked_input_signature"); // unfinished and u should prolly change this
ClassDB::bind_method(D_METHOD("set_server_input_signature", "value"), &Client::set_server_input_signature);
ClassDB::bind_method(D_METHOD("get_server_input_signature"), &Client::get_server_input_signature);
ADD_PROPERTY(PropertyInfo(Variant::INT, "server_input_signature"), "set_server_input_signature," "get_server_input_signature"); // unfinished and u should prolly change this
ClassDB::bind_method(D_METHOD("set_input_buffer_offset", "value"), &Client::set_input_buffer_offset);
ClassDB::bind_method(D_METHOD("get_input_buffer_offset"), &Client::get_input_buffer_offset);
ADD_PROPERTY(PropertyInfo(Variant::INT, "input_buffer_offset"), "set_input_buffer_offset," "get_input_buffer_offset"); // unfinished and u should prolly change this
ClassDB::bind_method(D_METHOD("set_replay", "value"), &Client::set_replay);
ClassDB::bind_method(D_METHOD("get_replay"), &Client::get_replay);
ADD_PROPERTY(PropertyInfo(Variant::OBJECT, "replay"), "set_replay," "get_replay"); // unfinished and u should prolly change this
ClassDB::bind_method(D_METHOD("set_fucked", "value"), &Client::set_fucked);
ClassDB::bind_method(D_METHOD("get_fucked"), &Client::get_fucked);
ADD_PROPERTY(PropertyInfo(Variant::BOOL, "fucked"), "set_fucked," "get_fucked"); // unfinished and u should prolly change this
ClassDB::bind_method(D_METHOD("set_uid_map", "value"), &Client::set_uid_map);
ClassDB::bind_method(D_METHOD("get_uid_map"), &Client::get_uid_map);
ADD_PROPERTY(PropertyInfo(Variant::DICTIONARY, "uid_map", 38, "int;int", 4096), "set_uid_map," "get_uid_map"); // unfinished and u should prolly change this
ClassDB::bind_method(D_METHOD("set_max_command_frame_rate", "value"), &Client::set_max_command_frame_rate);
ClassDB::bind_method(D_METHOD("get_max_command_frame_rate"), &Client::get_max_command_frame_rate);
ADD_PROPERTY(PropertyInfo(Variant::INT, "max_command_frame_rate"), "set_max_command_frame_rate," "get_max_command_frame_rate"); // unfinished and u should prolly change this
ClassDB::bind_method(D_METHOD("set_buffer_time", "value"), &Client::set_buffer_time);
ClassDB::bind_method(D_METHOD("get_buffer_time"), &Client::get_buffer_time);
ADD_PROPERTY(PropertyInfo(Variant::FLOAT, "buffer_time"), "set_buffer_time," "get_buffer_time"); // unfinished and u should prolly change this
ClassDB::bind_method(D_METHOD("set_input_buffer_time", "value"), &Client::set_input_buffer_time);
ClassDB::bind_method(D_METHOD("get_input_buffer_time"), &Client::get_input_buffer_time);
ADD_PROPERTY(PropertyInfo(Variant::FLOAT, "input_buffer_time"), "set_input_buffer_time," "get_input_buffer_time"); // unfinished and u should prolly change this
ClassDB::bind_method(D_METHOD("set_server_input_buffer_time", "value"), &Client::set_server_input_buffer_time);
ClassDB::bind_method(D_METHOD("get_server_input_buffer_time"), &Client::get_server_input_buffer_time);
ADD_PROPERTY(PropertyInfo(Variant::FLOAT, "server_input_buffer_time"), "set_server_input_buffer_time," "get_server_input_buffer_time"); // unfinished and u should prolly change this
ClassDB::bind_method(D_METHOD("set_max_receive_bandwidth", "value"), &Client::set_max_receive_bandwidth);
ClassDB::bind_method(D_METHOD("get_max_receive_bandwidth"), &Client::get_max_receive_bandwidth);
ADD_PROPERTY(PropertyInfo(Variant::INT, "max_receive_bandwidth"), "set_max_receive_bandwidth," "get_max_receive_bandwidth"); // unfinished and u should prolly change this
ClassDB::bind_method(D_METHOD("set_max_send_bandwidth", "value"), &Client::set_max_send_bandwidth);
ClassDB::bind_method(D_METHOD("get_max_send_bandwidth"), &Client::get_max_send_bandwidth);
ADD_PROPERTY(PropertyInfo(Variant::INT, "max_send_bandwidth"), "set_max_send_bandwidth," "get_max_send_bandwidth"); // unfinished and u should prolly change this
}