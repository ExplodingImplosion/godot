#include server_info_packet.h
void ServerInfoPacket::send_to_client(int client_id) {
	
}
void ServerInfoPacket::_execute(int _sender_id) {
	
}
String ServerInfoPacket::_to_string() {
	
}
bool ServerInfoPacket::is_script_valid_packet(GdScript script) {
	
}
void ServerInfoPacket::_execute(int _sender_id) {
	
}
String ServerInfoPacket::get_scene_path() {
	
}
String ServerInfoPacket::set_scene_path(String scene_path) {
	
}
int ServerInfoPacket::get_u8_max_players() {
	
}
int ServerInfoPacket::set_u8_max_players(int u8_max_players) {
	
}
int ServerInfoPacket::get_u8_max_spectators() {
	
}
int ServerInfoPacket::set_u8_max_spectators(int u8_max_spectators) {
	
}
int ServerInfoPacket::get_u16_tickrate() {
	
}
int ServerInfoPacket::set_u16_tickrate(int u16_tickrate) {
	
}
void ServerInfoPacket::_bind_methods(){
ClassDB::bind_method(D_METHOD("send_to_client", "client_id"), &ServerInfoPacket::send_to_client);
ClassDB::bind_method(D_METHOD("_execute", "_sender_id"), &ServerInfoPacket::_execute);
ClassDB::bind_method(D_METHOD("_to_string"), &ServerInfoPacket::_to_string);
ClassDB::bind_method(D_METHOD("is_script_valid_packet", "script"), &ServerInfoPacket::is_script_valid_packet);
ClassDB::bind_method(D_METHOD("_execute", "_sender_id"), &ServerInfoPacket::_execute);
ADD_PROPERTY(PropertyInfo(Variant::STRING, "scene_path"))),"set_scene_path","get_scene_path"); // unfinished and u should prolly change this
ADD_PROPERTY(PropertyInfo(Variant::INT, "u8_max_players"))),"set_u8_max_players","get_u8_max_players"); // unfinished and u should prolly change this
ADD_PROPERTY(PropertyInfo(Variant::INT, "u8_max_spectators"))),"set_u8_max_spectators","get_u8_max_spectators"); // unfinished and u should prolly change this
ADD_PROPERTY(PropertyInfo(Variant::INT, "u16_tickrate"))),"set_u16_tickrate","get_u16_tickrate"); // unfinished and u should prolly change this
}