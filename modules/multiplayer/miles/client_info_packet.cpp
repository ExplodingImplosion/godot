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
	
}
int ClientInfoPacket::set_u8_max_command_frame_rate(int p_u8_max_command_frame_rate) {
	
}
float ClientInfoPacket::get_half_buffer_time() {
	
}
float ClientInfoPacket::set_half_buffer_time(float p_half_buffer_time) {
	
}
float ClientInfoPacket::get_half_input_buffer_time() {
	
}
float ClientInfoPacket::set_half_input_buffer_time(float p_half_input_buffer_time) {
	
}
float ClientInfoPacket::get_half_server_input_buffer_time() {
	
}
float ClientInfoPacket::set_half_server_input_buffer_time(float p_half_server_input_buffer_time) {
	
}
int ClientInfoPacket::get_u32_max_receive_bandwidth() {
	
}
int ClientInfoPacket::set_u32_max_receive_bandwidth(int p_u32_max_receive_bandwidth) {
	
}
int ClientInfoPacket::get_u32_max_send_bandwidth() {
	
}
int ClientInfoPacket::set_u32_max_send_bandwidth(int p_u32_max_send_bandwidth) {
	
}
void ClientInfoPacket::_bind_methods(){
ClassDB::bind_method(D_METHOD("create", "client"), &ClientInfoPacket::create);
ClassDB::bind_method(D_METHOD("_execute", "sender_id"), &ClientInfoPacket::_execute);
ClassDB::bind_method(D_METHOD("is_script_valid_packet", "script"), &ClientInfoPacket::is_script_valid_packet);
ClassDB::bind_method(D_METHOD("_execute", "_sender_id"), &ClientInfoPacket::_execute);
ADD_PROPERTY(PropertyInfo(Variant::INT, "u8_max_command_frame_rate"), "get_u8_max_command_frame_rate," "set_u8_max_command_frame_rate"); // unfinished and u should prolly change this
ADD_PROPERTY(PropertyInfo(Variant::FLOAT, "half_buffer_time"), "get_half_buffer_time," "set_half_buffer_time"); // unfinished and u should prolly change this
ADD_PROPERTY(PropertyInfo(Variant::FLOAT, "half_input_buffer_time"), "get_half_input_buffer_time," "set_half_input_buffer_time"); // unfinished and u should prolly change this
ADD_PROPERTY(PropertyInfo(Variant::FLOAT, "half_server_input_buffer_time"), "get_half_server_input_buffer_time," "set_half_server_input_buffer_time"); // unfinished and u should prolly change this
ADD_PROPERTY(PropertyInfo(Variant::INT, "u32_max_receive_bandwidth"), "get_u32_max_receive_bandwidth," "set_u32_max_receive_bandwidth"); // unfinished and u should prolly change this
ADD_PROPERTY(PropertyInfo(Variant::INT, "u32_max_send_bandwidth"), "get_u32_max_send_bandwidth," "set_u32_max_send_bandwidth"); // unfinished and u should prolly change this
}