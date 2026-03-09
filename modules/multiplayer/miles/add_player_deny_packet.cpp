#include add_player_deny_packet.h
void AddPlayerDenyPacket::_execute(int _sender_id) {
	
}
bool AddPlayerDenyPacket::is_script_valid_packet(GdScript script) {
	
}
void AddPlayerDenyPacket::_execute(int _sender_id) {
	
}
void AddPlayerDenyPacket::_bind_methods(){
ClassDB::bind_method(D_METHOD("_execute", "_sender_id"), &AddPlayerDenyPacket::_execute);
ClassDB::bind_static_method("AddPlayerDenyPacket", D_METHOD("is_script_valid_packet", "script"), &AddPlayerDenyPacket::is_script_valid_packet);
ClassDB::bind_method(D_METHOD("_execute", "_sender_id"), &AddPlayerDenyPacket::_execute);
}