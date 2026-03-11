#include client_info_packet.h
RefCounted ClientInfoPacket::create(RefCounted client) {
	
}
void ClientInfoPacket::_execute(int sender_id) {
	
}
bool ClientInfoPacket::is_script_valid_packet(GdScript script) {
	
}
void ClientInfoPacket::_execute(int _sender_id) {
	
}
int ClientInfoPacket::get_u8_max_command_frame_rate() {
	return u8_max_command_frame_rate;
}
void ClientInfoPacket::set_u8_max_command_frame_rate(int p_u8_max_command_frame_rate) {
	u8_max_command_frame_rate = p_u8_max_command_frame_rate;
}
float ClientInfoPacket::get_half_buffer_time() {
	return half_buffer_time;
}
void ClientInfoPacket::set_half_buffer_time(float p_half_buffer_time) {
	half_buffer_time = p_half_buffer_time;
}
float ClientInfoPacket::get_half_input_buffer_time() {
	return half_input_buffer_time;
}
void ClientInfoPacket::set_half_input_buffer_time(float p_half_input_buffer_time) {
	half_input_buffer_time = p_half_input_buffer_time;
}
float ClientInfoPacket::get_half_server_input_buffer_time() {
	return half_server_input_buffer_time;
}
void ClientInfoPacket::set_half_server_input_buffer_time(float p_half_server_input_buffer_time) {
	half_server_input_buffer_time = p_half_server_input_buffer_time;
}
int ClientInfoPacket::get_u32_max_receive_bandwidth() {
	return u32_max_receive_bandwidth;
}
void ClientInfoPacket::set_u32_max_receive_bandwidth(int p_u32_max_receive_bandwidth) {
	u32_max_receive_bandwidth = p_u32_max_receive_bandwidth;
}
int ClientInfoPacket::get_u32_max_send_bandwidth() {
	return u32_max_send_bandwidth;
}
void ClientInfoPacket::set_u32_max_send_bandwidth(int p_u32_max_send_bandwidth) {
	u32_max_send_bandwidth = p_u32_max_send_bandwidth;
}
void ClientInfoPacket::_bind_methods(){
ClassDB::bind_static_method("ClientInfoPacket", D_METHOD("create", "client"), &ClientInfoPacket::create);
ClassDB::bind_method(D_METHOD("_execute", "sender_id"), &ClientInfoPacket::_execute);
ClassDB::bind_static_method("ClientInfoPacket", D_METHOD("is_script_valid_packet", "script"), &ClientInfoPacket::is_script_valid_packet);
ClassDB::bind_method(D_METHOD("_execute", "_sender_id"), &ClientInfoPacket::_execute);
ClassDB::bind_method(D_METHOD("set_u8_max_command_frame_rate", "value"), &ClientInfoPacket::set_u8_max_command_frame_rate);
ClassDB::bind_method(D_METHOD("get_u8_max_command_frame_rate"), &ClientInfoPacket::get_u8_max_command_frame_rate);
ADD_PROPERTY(PropertyInfo(Variant::INT, "u8_max_command_frame_rate"), "set_u8_max_command_frame_rate", "get_u8_max_command_frame_rate"); // unfinished and u should prolly change this
ClassDB::bind_method(D_METHOD("set_half_buffer_time", "value"), &ClientInfoPacket::set_half_buffer_time);
ClassDB::bind_method(D_METHOD("get_half_buffer_time"), &ClientInfoPacket::get_half_buffer_time);
ADD_PROPERTY(PropertyInfo(Variant::FLOAT, "half_buffer_time"), "set_half_buffer_time", "get_half_buffer_time"); // unfinished and u should prolly change this
ClassDB::bind_method(D_METHOD("set_half_input_buffer_time", "value"), &ClientInfoPacket::set_half_input_buffer_time);
ClassDB::bind_method(D_METHOD("get_half_input_buffer_time"), &ClientInfoPacket::get_half_input_buffer_time);
ADD_PROPERTY(PropertyInfo(Variant::FLOAT, "half_input_buffer_time"), "set_half_input_buffer_time", "get_half_input_buffer_time"); // unfinished and u should prolly change this
ClassDB::bind_method(D_METHOD("set_half_server_input_buffer_time", "value"), &ClientInfoPacket::set_half_server_input_buffer_time);
ClassDB::bind_method(D_METHOD("get_half_server_input_buffer_time"), &ClientInfoPacket::get_half_server_input_buffer_time);
ADD_PROPERTY(PropertyInfo(Variant::FLOAT, "half_server_input_buffer_time"), "set_half_server_input_buffer_time", "get_half_server_input_buffer_time"); // unfinished and u should prolly change this
ClassDB::bind_method(D_METHOD("set_u32_max_receive_bandwidth", "value"), &ClientInfoPacket::set_u32_max_receive_bandwidth);
ClassDB::bind_method(D_METHOD("get_u32_max_receive_bandwidth"), &ClientInfoPacket::get_u32_max_receive_bandwidth);
ADD_PROPERTY(PropertyInfo(Variant::INT, "u32_max_receive_bandwidth"), "set_u32_max_receive_bandwidth", "get_u32_max_receive_bandwidth"); // unfinished and u should prolly change this
ClassDB::bind_method(D_METHOD("set_u32_max_send_bandwidth", "value"), &ClientInfoPacket::set_u32_max_send_bandwidth);
ClassDB::bind_method(D_METHOD("get_u32_max_send_bandwidth"), &ClientInfoPacket::get_u32_max_send_bandwidth);
ADD_PROPERTY(PropertyInfo(Variant::INT, "u32_max_send_bandwidth"), "set_u32_max_send_bandwidth", "get_u32_max_send_bandwidth"); // unfinished and u should prolly change this
}