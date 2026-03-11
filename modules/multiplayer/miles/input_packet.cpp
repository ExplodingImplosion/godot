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
	return u32_signature;
}
void InputPacket::set_u32_signature(int p_u32_signature) {
	u32_signature = p_u32_signature;
}
int InputPacket::get_u8_num_inputs() {
	return u8_num_inputs;
}
void InputPacket::set_u8_num_inputs(int p_u8_num_inputs) {
	u8_num_inputs = p_u8_num_inputs;
}
PackedByteArray InputPacket::get_inputs() {
	return inputs;
}
void InputPacket::set_inputs(PackedByteArray p_inputs) {
	inputs = p_inputs;
}
void InputPacket::_bind_methods(){
ClassDB::bind_static_method("InputPacket", D_METHOD("send"), &InputPacket::send);
ClassDB::bind_method(D_METHOD("_execute", "sender_id"), &InputPacket::_execute);
ClassDB::bind_static_method("InputPacket", D_METHOD("is_script_valid_packet", "script"), &InputPacket::is_script_valid_packet);
ClassDB::bind_method(D_METHOD("_execute", "_sender_id"), &InputPacket::_execute);
ClassDB::bind_method(D_METHOD("set_u32_signature", "value"), &InputPacket::set_u32_signature);
ClassDB::bind_method(D_METHOD("get_u32_signature"), &InputPacket::get_u32_signature);
ADD_PROPERTY(PropertyInfo(Variant::INT, "u32_signature"), "set_u32_signature", "get_u32_signature"); // unfinished and u should prolly change this
ClassDB::bind_method(D_METHOD("set_u8_num_inputs", "value"), &InputPacket::set_u8_num_inputs);
ClassDB::bind_method(D_METHOD("get_u8_num_inputs"), &InputPacket::get_u8_num_inputs);
ADD_PROPERTY(PropertyInfo(Variant::INT, "u8_num_inputs"), "set_u8_num_inputs", "get_u8_num_inputs"); // unfinished and u should prolly change this
ClassDB::bind_method(D_METHOD("set_inputs", "value"), &InputPacket::set_inputs);
ClassDB::bind_method(D_METHOD("get_inputs"), &InputPacket::get_inputs);
ADD_PROPERTY(PropertyInfo(Variant::PACKED_BYTE_ARRAY, "inputs"), "set_inputs", "get_inputs"); // unfinished and u should prolly change this
}