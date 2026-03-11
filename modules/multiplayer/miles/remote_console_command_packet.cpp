#include "remote_console_command_packet.h"
void RemoteConsoleCommandPacket::send(String input) {
	
}
void RemoteConsoleCommandPacket::_execute(int sender_id) {
	
}
bool RemoteConsoleCommandPacket::is_script_valid_packet(GdScript script) {
	
}
void RemoteConsoleCommandPacket::_execute(int _sender_id) {
	
}
String RemoteConsoleCommandPacket::get_input() {
	return input;
}
void RemoteConsoleCommandPacket::set_input(String p_input) {
	input = p_input;
}
void RemoteConsoleCommandPacket::_bind_methods(){
ClassDB::bind_static_method("RemoteConsoleCommandPacket", D_METHOD("send", "input"), &RemoteConsoleCommandPacket::send);
ClassDB::bind_method(D_METHOD("_execute", "sender_id"), &RemoteConsoleCommandPacket::_execute);
ClassDB::bind_static_method("RemoteConsoleCommandPacket", D_METHOD("is_script_valid_packet", "script"), &RemoteConsoleCommandPacket::is_script_valid_packet);
ClassDB::bind_method(D_METHOD("_execute", "_sender_id"), &RemoteConsoleCommandPacket::_execute);
ClassDB::bind_method(D_METHOD("set_input", "value"), &RemoteConsoleCommandPacket::set_input);
ClassDB::bind_method(D_METHOD("get_input"), &RemoteConsoleCommandPacket::get_input);
ADD_PROPERTY(PropertyInfo(Variant::STRING, "input"), "set_input", "get_input"); // unfinished and u should prolly change this
}