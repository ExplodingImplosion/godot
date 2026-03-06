#include remote_console_command_packet.h
static void send(String input) {
	
}
void _execute(int sender_id) {
	
}
static bool is_script_valid_packet(GdScript script) {
	
}
void _execute(int _sender_id) {
	
}
void RemoteConsoleCommandPacket::_bind_methods(){
ClassDB::bind_method(D_METHOD("send", "input"), &RemoteConsoleCommandPacket::send);
ClassDB::bind_method(D_METHOD("_execute", "sender_id"), &RemoteConsoleCommandPacket::_execute);
ClassDB::bind_method(D_METHOD("is_script_valid_packet", "script"), &RemoteConsoleCommandPacket::is_script_valid_packet);
ClassDB::bind_method(D_METHOD("_execute", "_sender_id"), &RemoteConsoleCommandPacket::_execute);
ADD_PROPERTY(PropertyInfo(Variant::STRING, "input"))),); // unfinished and u should prolly change this
}