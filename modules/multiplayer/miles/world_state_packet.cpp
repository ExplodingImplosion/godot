#include world_state_packet.h
static RefCounted create(int frame, int last_frame, PackedByteArray packet, int input_signature, int acked_signature) {
	
}
void _execute(int sender_id) {
	
}
String _to_string() {
	
}
static bool is_script_valid_packet(GdScript script) {
	
}
void _execute(int _sender_id) {
	
}
void WorldStatePacket::_bind_methods(){
ClassDB::bind_method(D_METHOD("create", "frame", "last_frame", "packet", "input_signature", "acked_signature"), &WorldStatePacket::create);
ClassDB::bind_method(D_METHOD("_execute", "sender_id"), &WorldStatePacket::_execute);
ClassDB::bind_method(D_METHOD("_to_string"), &WorldStatePacket::_to_string);
ClassDB::bind_method(D_METHOD("is_script_valid_packet", "script"), &WorldStatePacket::is_script_valid_packet);
ClassDB::bind_method(D_METHOD("_execute", "_sender_id"), &WorldStatePacket::_execute);
ADD_PROPERTY(PropertyInfo(Variant::INT, "u32_frame"))),); // unfinished and u should prolly change this
ADD_PROPERTY(PropertyInfo(Variant::INT, "u32_last_frame"))),); // unfinished and u should prolly change this
ADD_PROPERTY(PropertyInfo(Variant::INT, "u32_input_signature"))),); // unfinished and u should prolly change this
ADD_PROPERTY(PropertyInfo(Variant::INT, "u32_acked_signature"))),); // unfinished and u should prolly change this
ADD_PROPERTY(PropertyInfo(Variant::PACKED_BYTE_ARRAY, "contents"))),); // unfinished and u should prolly change this
}