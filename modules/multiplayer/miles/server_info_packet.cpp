#include server_info_packet.h
static void send_to_client(int client_id) {
	
}
void _execute(int _sender_id) {
	
}
String _to_string() {
	
}
static bool is_script_valid_packet(GdScript script) {
	
}
void _execute(int _sender_id) {
	
}
void ServerInfoPacket::_bind_methods(){
ClassDB::bind_method(D_METHOD("send_to_client", "client_id"), &ServerInfoPacket::send_to_client);
ClassDB::bind_method(D_METHOD("_execute", "_sender_id"), &ServerInfoPacket::_execute);
ClassDB::bind_method(D_METHOD("_to_string"), &ServerInfoPacket::_to_string);
ClassDB::bind_method(D_METHOD("is_script_valid_packet", "script"), &ServerInfoPacket::is_script_valid_packet);
ClassDB::bind_method(D_METHOD("_execute", "_sender_id"), &ServerInfoPacket::_execute);
ADD_PROPERTY(PropertyInfo(Variant::STRING, "scene_path"))),); // unfinished and u should prolly change this
ADD_PROPERTY(PropertyInfo(Variant::INT, "u8_max_players"))),); // unfinished and u should prolly change this
ADD_PROPERTY(PropertyInfo(Variant::INT, "u8_max_spectators"))),); // unfinished and u should prolly change this
ADD_PROPERTY(PropertyInfo(Variant::INT, "u16_tickrate"))),); // unfinished and u should prolly change this
}