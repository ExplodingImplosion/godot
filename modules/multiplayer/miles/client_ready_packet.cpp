#include client_ready_packet.h
void ClientReadyPacket::_execute(int sender_id) {
	
}
bool ClientReadyPacket::is_script_valid_packet(GdScript script) {
	
}
void ClientReadyPacket::_execute(int _sender_id) {
	
}
void ClientReadyPacket::_bind_methods(){
ClassDB::bind_method(D_METHOD("_execute", "sender_id"), &ClientReadyPacket::_execute);
ClassDB::bind_static_method("ClientReadyPacket", D_METHOD("is_script_valid_packet", "script"), &ClientReadyPacket::is_script_valid_packet);
ClassDB::bind_method(D_METHOD("_execute", "_sender_id"), &ClientReadyPacket::_execute);
}