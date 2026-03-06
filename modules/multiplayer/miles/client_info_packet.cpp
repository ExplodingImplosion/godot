#include client_info_packet.h
static RefCounted create(RefCounted client) {
	
}
void _execute(int sender_id) {
	
}
static bool is_script_valid_packet(GdScript script) {
	
}
void _execute(int _sender_id) {
	
}
void ClientInfoPacket::_bind_methods(){
ClassDB::bind_method(D_METHOD("create", "client"), &ClientInfoPacket::create);
ClassDB::bind_method(D_METHOD("_execute", "sender_id"), &ClientInfoPacket::_execute);
ClassDB::bind_method(D_METHOD("is_script_valid_packet", "script"), &ClientInfoPacket::is_script_valid_packet);
ClassDB::bind_method(D_METHOD("_execute", "_sender_id"), &ClientInfoPacket::_execute);
ADD_PROPERTY(PropertyInfo(Variant::INT, "u8_max_command_frame_rate"))),); // unfinished and u should prolly change this
ADD_PROPERTY(PropertyInfo(Variant::FLOAT, "half_buffer_time"))),); // unfinished and u should prolly change this
ADD_PROPERTY(PropertyInfo(Variant::FLOAT, "half_input_buffer_time"))),); // unfinished and u should prolly change this
ADD_PROPERTY(PropertyInfo(Variant::FLOAT, "half_server_input_buffer_time"))),); // unfinished and u should prolly change this
ADD_PROPERTY(PropertyInfo(Variant::INT, "u32_max_receive_bandwidth"))),); // unfinished and u should prolly change this
ADD_PROPERTY(PropertyInfo(Variant::INT, "u32_max_send_bandwidth"))),); // unfinished and u should prolly change this
}