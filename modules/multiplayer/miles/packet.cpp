#include "packet.h"
Packet::Packet(){
	
}
Packet::~Packet(){
	
}
bool Packet::is_script_valid_packet(GdScript script) {
	
}
void Packet::_execute(int _sender_id) {
	
}
void Packet::_bind_methods(){
ClassDB::bind_static_method("Packet", D_METHOD("is_script_valid_packet", "script"), &Packet::is_script_valid_packet);
ClassDB::bind_method(D_METHOD("_execute", "_sender_id"), &Packet::_execute);
}