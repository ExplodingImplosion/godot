#include remote_console_command_packet.h
void RemoteConsoleCommandPacket::send(String input) {
	
}
void RemoteConsoleCommandPacket::_execute(int sender_id) {
	
}
bool RemoteConsoleCommandPacket::is_script_valid_packet(GdScript script) {
	
}
void RemoteConsoleCommandPacket::_execute(int _sender_id) {
	
}
String RemoteConsoleCommandPacket::get_input() {
	
}
String RemoteConsoleCommandPacket::set_input(String p_input) {
	
}
void RemoteConsoleCommandPacket::_bind_methods(){
ClassDB::bind_method(D_METHOD("send", "input"), &RemoteConsoleCommandPacket::send);
ClassDB::bind_method(D_METHOD("_execute", "sender_id"), &RemoteConsoleCommandPacket::_execute);
ClassDB::bind_method(D_METHOD("is_script_valid_packet", "script"), &RemoteConsoleCommandPacket::is_script_valid_packet);
ClassDB::bind_method(D_METHOD("_execute", "_sender_id"), &RemoteConsoleCommandPacket::_execute);
ADD_PROPERTY(PropertyInfo(Variant::STRING, "input"), "get_input," "set_input"); // unfinished and u should prolly change this
}