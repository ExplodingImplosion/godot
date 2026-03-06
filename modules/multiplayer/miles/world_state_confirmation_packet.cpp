#include world_state_confirmation_packet.h
static void send(int confirmation_frame_num) {
	
}
void _execute(int sender_id) {
	
}
static bool is_script_valid_packet(GdScript script) {
	
}
void _execute(int _sender_id) {
	
}
void WorldStateConfirmationPacket::_bind_methods(){
ClassDB::bind_method(D_METHOD("send", "confirmation_frame_num"), &WorldStateConfirmationPacket::send);
ClassDB::bind_method(D_METHOD("_execute", "sender_id"), &WorldStateConfirmationPacket::_execute);
ClassDB::bind_method(D_METHOD("is_script_valid_packet", "script"), &WorldStateConfirmationPacket::is_script_valid_packet);
ClassDB::bind_method(D_METHOD("_execute", "_sender_id"), &WorldStateConfirmationPacket::_execute);
ADD_PROPERTY(PropertyInfo(Variant::INT, "u32_confirmation_frame_num"))),); // unfinished and u should prolly change this
}