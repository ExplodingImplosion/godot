#include serialization_fuckup_packet.h
void SerializationFuckupPacket::send(int fuckup) {
	
}
void SerializationFuckupPacket::_execute(int sender_id) {
	
}
String SerializationFuckupPacket::get_fuckup_string() {
	
}
bool SerializationFuckupPacket::is_script_valid_packet(GdScript script) {
	
}
void SerializationFuckupPacket::_execute(int _sender_id) {
	
}
int SerializationFuckupPacket::get_u8_fuckup() {
	
}
int SerializationFuckupPacket::set_u8_fuckup(int u8_fuckup) {
	
}
Array SerializationFuckupPacket::get_data() {
	
}
Array SerializationFuckupPacket::set_data(Array data) {
	
}
void SerializationFuckupPacket::_bind_methods(){
ClassDB::bind_method(D_METHOD("send", "fuckup"), &SerializationFuckupPacket::send);
ClassDB::bind_method(D_METHOD("_execute", "sender_id"), &SerializationFuckupPacket::_execute);
ClassDB::bind_method(D_METHOD("get_fuckup_string"), &SerializationFuckupPacket::get_fuckup_string);
ClassDB::bind_method(D_METHOD("is_script_valid_packet", "script"), &SerializationFuckupPacket::is_script_valid_packet);
ClassDB::bind_method(D_METHOD("_execute", "_sender_id"), &SerializationFuckupPacket::_execute);
ADD_PROPERTY(PropertyInfo(Variant::INT, "u8_fuckup" , "get_u8_fuckup", "set_u8_fuckup")); // unfinished and u should prolly change this
ADD_PROPERTY(PropertyInfo(Variant::ARRAY, "data" , "get_data", "set_data")); // unfinished and u should prolly change this
}