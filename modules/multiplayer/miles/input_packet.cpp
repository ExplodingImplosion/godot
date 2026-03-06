#include input_packet.h
static void send() {
	
}
void _execute(int sender_id) {
	
}
static bool is_script_valid_packet(GdScript script) {
	
}
void _execute(int _sender_id) {
	
}
void InputPacket::_bind_methods(){
ClassDB::bind_method(D_METHOD("send"), &InputPacket::send);
ClassDB::bind_method(D_METHOD("_execute", "sender_id"), &InputPacket::_execute);
ClassDB::bind_method(D_METHOD("is_script_valid_packet", "script"), &InputPacket::is_script_valid_packet);
ClassDB::bind_method(D_METHOD("_execute", "_sender_id"), &InputPacket::_execute);
ADD_PROPERTY(PropertyInfo(Variant::INT, "u32_signature"))),); // unfinished and u should prolly change this
ADD_PROPERTY(PropertyInfo(Variant::INT, "u8_num_inputs"))),); // unfinished and u should prolly change this
ADD_PROPERTY(PropertyInfo(Variant::PACKED_BYTE_ARRAY, "inputs"))),); // unfinished and u should prolly change this
}