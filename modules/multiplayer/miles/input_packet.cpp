#include input_packet.h
void InputPacket::send() {
	
}
void InputPacket::_execute(int sender_id) {
	
}
bool InputPacket::is_script_valid_packet(GdScript script) {
	
}
void InputPacket::_execute(int _sender_id) {
	
}
int InputPacket::get_u32_signature() {
	
}
int InputPacket::set_u32_signature(int p_u32_signature) {
	
}
int InputPacket::get_u8_num_inputs() {
	
}
int InputPacket::set_u8_num_inputs(int p_u8_num_inputs) {
	
}
PackedByteArray InputPacket::get_inputs() {
	
}
PackedByteArray InputPacket::set_inputs(PackedByteArray p_inputs) {
	
}
void InputPacket::_bind_methods(){
ClassDB::bind_method(D_METHOD("send"), &InputPacket::send);
ClassDB::bind_method(D_METHOD("_execute", "sender_id"), &InputPacket::_execute);
ClassDB::bind_method(D_METHOD("is_script_valid_packet", "script"), &InputPacket::is_script_valid_packet);
ClassDB::bind_method(D_METHOD("_execute", "_sender_id"), &InputPacket::_execute);
ADD_PROPERTY(PropertyInfo(Variant::INT, "u32_signature"), "get_u32_signature," "set_u32_signature"); // unfinished and u should prolly change this
ADD_PROPERTY(PropertyInfo(Variant::INT, "u8_num_inputs"), "get_u8_num_inputs," "set_u8_num_inputs"); // unfinished and u should prolly change this
ADD_PROPERTY(PropertyInfo(Variant::PACKED_BYTE_ARRAY, "inputs"), "get_inputs," "set_inputs"); // unfinished and u should prolly change this
}