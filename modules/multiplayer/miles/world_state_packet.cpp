#include world_state_packet.h
RefCounted WorldStatePacket::create(int frame, int last_frame, PackedByteArray packet, int input_signature, int acked_signature) {
	
}
void WorldStatePacket::_execute(int sender_id) {
	
}
String WorldStatePacket::_to_string() {
	
}
bool WorldStatePacket::is_script_valid_packet(GdScript script) {
	
}
void WorldStatePacket::_execute(int _sender_id) {
	
}
int WorldStatePacket::get_u32_frame() {
	
}
int WorldStatePacket::set_u32_frame(int u32_frame) {
	
}
int WorldStatePacket::get_u32_last_frame() {
	
}
int WorldStatePacket::set_u32_last_frame(int u32_last_frame) {
	
}
int WorldStatePacket::get_u32_input_signature() {
	
}
int WorldStatePacket::set_u32_input_signature(int u32_input_signature) {
	
}
int WorldStatePacket::get_u32_acked_signature() {
	
}
int WorldStatePacket::set_u32_acked_signature(int u32_acked_signature) {
	
}
PackedByteArray WorldStatePacket::get_contents() {
	
}
PackedByteArray WorldStatePacket::set_contents(PackedByteArray contents) {
	
}
void WorldStatePacket::_bind_methods(){
ClassDB::bind_method(D_METHOD("create", "frame", "last_frame", "packet", "input_signature", "acked_signature"), &WorldStatePacket::create);
ClassDB::bind_method(D_METHOD("_execute", "sender_id"), &WorldStatePacket::_execute);
ClassDB::bind_method(D_METHOD("_to_string"), &WorldStatePacket::_to_string);
ClassDB::bind_method(D_METHOD("is_script_valid_packet", "script"), &WorldStatePacket::is_script_valid_packet);
ClassDB::bind_method(D_METHOD("_execute", "_sender_id"), &WorldStatePacket::_execute);
ADD_PROPERTY(PropertyInfo(Variant::INT, "u32_frame" , "get_u32_frame", "set_u32_frame")); // unfinished and u should prolly change this
ADD_PROPERTY(PropertyInfo(Variant::INT, "u32_last_frame" , "get_u32_last_frame", "set_u32_last_frame")); // unfinished and u should prolly change this
ADD_PROPERTY(PropertyInfo(Variant::INT, "u32_input_signature" , "get_u32_input_signature", "set_u32_input_signature")); // unfinished and u should prolly change this
ADD_PROPERTY(PropertyInfo(Variant::INT, "u32_acked_signature" , "get_u32_acked_signature", "set_u32_acked_signature")); // unfinished and u should prolly change this
ADD_PROPERTY(PropertyInfo(Variant::PACKED_BYTE_ARRAY, "contents" , "get_contents", "set_contents")); // unfinished and u should prolly change this
}