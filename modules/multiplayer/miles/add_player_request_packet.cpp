#include add_player_request_packet.h
static void send() {
	
}
void _execute(int sender_id) {
	
}
static bool is_script_valid_packet(GdScript script) {
	
}
void _execute(int _sender_id) {
	
}
void AddPlayerRequestPacket::_bind_methods(){
ClassDB::bind_method(D_METHOD("send"), &AddPlayerRequestPacket::send);
ClassDB::bind_method(D_METHOD("_execute", "sender_id"), &AddPlayerRequestPacket::_execute);
ClassDB::bind_method(D_METHOD("is_script_valid_packet", "script"), &AddPlayerRequestPacket::is_script_valid_packet);
ClassDB::bind_method(D_METHOD("_execute", "_sender_id"), &AddPlayerRequestPacket::_execute);
}