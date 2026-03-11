#include "server_info_packet.h"
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
	return scene_path;
}
void ServerInfoPacket::set_scene_path(String p_scene_path) {
	scene_path = p_scene_path;
}
int ServerInfoPacket::get_u8_max_players() {
	return u8_max_players;
}
void ServerInfoPacket::set_u8_max_players(int p_u8_max_players) {
	u8_max_players = p_u8_max_players;
}
int ServerInfoPacket::get_u8_max_spectators() {
	return u8_max_spectators;
}
void ServerInfoPacket::set_u8_max_spectators(int p_u8_max_spectators) {
	u8_max_spectators = p_u8_max_spectators;
}
int ServerInfoPacket::get_u16_tickrate() {
	return u16_tickrate;
}
void ServerInfoPacket::set_u16_tickrate(int p_u16_tickrate) {
	u16_tickrate = p_u16_tickrate;
}
void ServerInfoPacket::_bind_methods(){
ClassDB::bind_static_method("ServerInfoPacket", D_METHOD("send_to_client", "client_id"), &ServerInfoPacket::send_to_client);
ClassDB::bind_method(D_METHOD("_execute", "_sender_id"), &ServerInfoPacket::_execute);
ClassDB::bind_method(D_METHOD("_to_string"), &ServerInfoPacket::_to_string);
ClassDB::bind_static_method("ServerInfoPacket", D_METHOD("is_script_valid_packet", "script"), &ServerInfoPacket::is_script_valid_packet);
ClassDB::bind_method(D_METHOD("_execute", "_sender_id"), &ServerInfoPacket::_execute);
ClassDB::bind_method(D_METHOD("set_scene_path", "value"), &ServerInfoPacket::set_scene_path);
ClassDB::bind_method(D_METHOD("get_scene_path"), &ServerInfoPacket::get_scene_path);
ADD_PROPERTY(PropertyInfo(Variant::STRING, "scene_path"), "set_scene_path", "get_scene_path"); // unfinished and u should prolly change this
ClassDB::bind_method(D_METHOD("set_u8_max_players", "value"), &ServerInfoPacket::set_u8_max_players);
ClassDB::bind_method(D_METHOD("get_u8_max_players"), &ServerInfoPacket::get_u8_max_players);
ADD_PROPERTY(PropertyInfo(Variant::INT, "u8_max_players"), "set_u8_max_players", "get_u8_max_players"); // unfinished and u should prolly change this
ClassDB::bind_method(D_METHOD("set_u8_max_spectators", "value"), &ServerInfoPacket::set_u8_max_spectators);
ClassDB::bind_method(D_METHOD("get_u8_max_spectators"), &ServerInfoPacket::get_u8_max_spectators);
ADD_PROPERTY(PropertyInfo(Variant::INT, "u8_max_spectators"), "set_u8_max_spectators", "get_u8_max_spectators"); // unfinished and u should prolly change this
ClassDB::bind_method(D_METHOD("set_u16_tickrate", "value"), &ServerInfoPacket::set_u16_tickrate);
ClassDB::bind_method(D_METHOD("get_u16_tickrate"), &ServerInfoPacket::get_u16_tickrate);
ADD_PROPERTY(PropertyInfo(Variant::INT, "u16_tickrate"), "set_u16_tickrate", "get_u16_tickrate"); // unfinished and u should prolly change this
}