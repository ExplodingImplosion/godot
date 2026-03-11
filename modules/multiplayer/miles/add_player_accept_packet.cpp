#include "add_player_accept_packet.h"
void AddPlayerAcceptPacket::_execute(int _sender_id) {
	
}
bool AddPlayerAcceptPacket::is_script_valid_packet(GdScript script) {
	
}
void AddPlayerAcceptPacket::_execute(int _sender_id) {
	
}
void AddPlayerAcceptPacket::_bind_methods(){
ClassDB::bind_method(D_METHOD("_execute", "_sender_id"), &AddPlayerAcceptPacket::_execute);
ClassDB::bind_static_method("AddPlayerAcceptPacket", D_METHOD("is_script_valid_packet", "script"), &AddPlayerAcceptPacket::is_script_valid_packet);
ClassDB::bind_method(D_METHOD("_execute", "_sender_id"), &AddPlayerAcceptPacket::_execute);
}