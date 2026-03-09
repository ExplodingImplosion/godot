#include world_state_confirmation_packet.h
void WorldStateConfirmationPacket::send(int confirmation_frame_num) {
	
}
void WorldStateConfirmationPacket::_execute(int sender_id) {
	
}
bool WorldStateConfirmationPacket::is_script_valid_packet(GdScript script) {
	
}
void WorldStateConfirmationPacket::_execute(int _sender_id) {
	
}
int WorldStateConfirmationPacket::get_u32_confirmation_frame_num() {
	
}
int WorldStateConfirmationPacket::set_u32_confirmation_frame_num(int p_u32_confirmation_frame_num) {
	
}
void WorldStateConfirmationPacket::_bind_methods(){
ClassDB::bind_static_method("WorldStateConfirmationPacket", D_METHOD("send", "confirmation_frame_num"), &WorldStateConfirmationPacket::send);
ClassDB::bind_method(D_METHOD("_execute", "sender_id"), &WorldStateConfirmationPacket::_execute);
ClassDB::bind_static_method("WorldStateConfirmationPacket", D_METHOD("is_script_valid_packet", "script"), &WorldStateConfirmationPacket::is_script_valid_packet);
ClassDB::bind_method(D_METHOD("_execute", "_sender_id"), &WorldStateConfirmationPacket::_execute);
ADD_PROPERTY(PropertyInfo(Variant::INT, "u32_confirmation_frame_num"), "set_u32_confirmation_frame_num," "get_u32_confirmation_frame_num"); // unfinished and u should prolly change this
}