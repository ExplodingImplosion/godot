#include client.h
String _to_string() {
	
}
void mark_ready() {
	
}
RefCounted get_player(int player_id) {
	
}
int get_team_mask() {
	
}
void _init(int unique_id, int num_players) {
	
}
void clear() {
	
}
void add_player() {
	
}
Array get_local_nodes() {
	
}
void save_local_replay() {
	
}
bool is_friendly_to(RefCounted client) {
	
}
void send_delta_packet(RefCounted frame) {
	
}
void receive_worldstate(RefCounted packet) {
	
}
void add_packet_to_replay(PackedByteArray packet) {
	
}
void decode_worldstate(RefCounted packet) {
	
}
void notify_ready() {
	
}
void send_info() {
	
}
void set_info(int max_cfr, float buffer_length, float input_buffer_length, float server_input_buffer_length, int max_in_bandwith, int max_out_bandwidth) {
	
}
void send_input() {
	
}
int get_frame_delay() {
	
}
int get_network_input_delay() {
	
}
int get_server_input_buffer_size() {
	
}
int get_total_input_delay() {
	
}
void update_locally_owned_nodes(Array nodes) {
	
}
void predict() {
	
}
void tick_input_buffer() {
	
}
void change_input_buffer_offset(int amnt) {
	
}
void set_input_buffer_offset(int position) {
	
}
void tick_player_inputs() {
	
}
void tick_local() {
	
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
ADD_PROPERTY(PropertyInfo(Variant::INT, "id"))),); // unfinished and u should prolly change this
ADD_PROPERTY(PropertyInfo(Variant::ARRAY, "players", 31, "RefCounted", 4096))),); // unfinished and u should prolly change this
ADD_PROPERTY(PropertyInfo(Variant::BOOL, "ready"))),); // unfinished and u should prolly change this
ADD_PROPERTY(PropertyInfo(Variant::OBJECT, "most_recent_acked_frame"))),); // unfinished and u should prolly change this
ADD_PROPERTY(PropertyInfo(Variant::OBJECT, "dirty_frame"))),); // unfinished and u should prolly change this
ADD_PROPERTY(PropertyInfo(Variant::INT, "server_acked_frame_num"))),); // unfinished and u should prolly change this
ADD_PROPERTY(PropertyInfo(Variant::INT, "last_decoded_frame_size"))),); // unfinished and u should prolly change this
ADD_PROPERTY(PropertyInfo(Variant::INT, "team"))),); // unfinished and u should prolly change this
ADD_PROPERTY(PropertyInfo(Variant::OBJECT, "most_recent_received_frame"))),); // unfinished and u should prolly change this
ADD_PROPERTY(PropertyInfo(Variant::INT, "input_signature"))),); // unfinished and u should prolly change this
ADD_PROPERTY(PropertyInfo(Variant::INT, "acked_input_signature"))),); // unfinished and u should prolly change this
ADD_PROPERTY(PropertyInfo(Variant::INT, "server_input_signature"))),); // unfinished and u should prolly change this
ADD_PROPERTY(PropertyInfo(Variant::INT, "input_buffer_offset"))),); // unfinished and u should prolly change this
ADD_PROPERTY(PropertyInfo(Variant::OBJECT, "replay"))),); // unfinished and u should prolly change this
ADD_PROPERTY(PropertyInfo(Variant::BOOL, "fucked"))),); // unfinished and u should prolly change this
ADD_PROPERTY(PropertyInfo(Variant::DICTIONARY, "uid_map", 38, "int;int", 4096))),); // unfinished and u should prolly change this
ADD_PROPERTY(PropertyInfo(Variant::INT, "max_command_frame_rate"))),); // unfinished and u should prolly change this
ADD_PROPERTY(PropertyInfo(Variant::FLOAT, "buffer_time"))),); // unfinished and u should prolly change this
ADD_PROPERTY(PropertyInfo(Variant::FLOAT, "input_buffer_time"))),); // unfinished and u should prolly change this
ADD_PROPERTY(PropertyInfo(Variant::FLOAT, "server_input_buffer_time"))),); // unfinished and u should prolly change this
ADD_PROPERTY(PropertyInfo(Variant::INT, "max_receive_bandwidth"))),); // unfinished and u should prolly change this
ADD_PROPERTY(PropertyInfo(Variant::INT, "max_send_bandwidth"))),); // unfinished and u should prolly change this
}