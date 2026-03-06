#include serialization_fuckup_packet.h
static void send(int fuckup) {
	
}
void _execute(int sender_id) {
	
}
String get_fuckup_string() {
	
}
static bool is_script_valid_packet(GdScript script) {
	
}
void _execute(int _sender_id) {
	
}
void SerializationFuckupPacket::_bind_methods(){
ClassDB::bind_method(D_METHOD("send", "fuckup"), &SerializationFuckupPacket::send);
ClassDB::bind_method(D_METHOD("_execute", "sender_id"), &SerializationFuckupPacket::_execute);
ClassDB::bind_method(D_METHOD("get_fuckup_string"), &SerializationFuckupPacket::get_fuckup_string);
ClassDB::bind_method(D_METHOD("is_script_valid_packet", "script"), &SerializationFuckupPacket::is_script_valid_packet);
ClassDB::bind_method(D_METHOD("_execute", "_sender_id"), &SerializationFuckupPacket::_execute);
ADD_PROPERTY(PropertyInfo(Variant::INT, "u8_fuckup"))),); // unfinished and u should prolly change this
ADD_PROPERTY(PropertyInfo(Variant::ARRAY, "data"))),); // unfinished and u should prolly change this
}