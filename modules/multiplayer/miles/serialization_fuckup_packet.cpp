#include "serialization_fuckup_packet.h"
SerializationFuckupPacket::SerializationFuckupPacket(){
	
}
SerializationFuckupPacket::~SerializationFuckupPacket(){
	
}
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
	return u8_fuckup;
}
void SerializationFuckupPacket::set_u8_fuckup(int p_u8_fuckup) {
	u8_fuckup = p_u8_fuckup;
}
Array SerializationFuckupPacket::get_data() {
	return data;
}
void SerializationFuckupPacket::set_data(Array p_data) {
	data = p_data;
}
void SerializationFuckupPacket::_bind_methods(){
ClassDB::bind_static_method("SerializationFuckupPacket", D_METHOD("send", "fuckup"), &SerializationFuckupPacket::send);
ClassDB::bind_method(D_METHOD("_execute", "sender_id"), &SerializationFuckupPacket::_execute);
ClassDB::bind_method(D_METHOD("get_fuckup_string"), &SerializationFuckupPacket::get_fuckup_string);
ClassDB::bind_static_method("SerializationFuckupPacket", D_METHOD("is_script_valid_packet", "script"), &SerializationFuckupPacket::is_script_valid_packet);
ClassDB::bind_method(D_METHOD("_execute", "_sender_id"), &SerializationFuckupPacket::_execute);
ClassDB::bind_method(D_METHOD("set_u8_fuckup", "value"), &SerializationFuckupPacket::set_u8_fuckup);
ClassDB::bind_method(D_METHOD("get_u8_fuckup"), &SerializationFuckupPacket::get_u8_fuckup);
ADD_PROPERTY(PropertyInfo(Variant::INT, "u8_fuckup"), "set_u8_fuckup", "get_u8_fuckup"); // unfinished and u should prolly change this
ClassDB::bind_method(D_METHOD("set_data", "value"), &SerializationFuckupPacket::set_data);
ClassDB::bind_method(D_METHOD("get_data"), &SerializationFuckupPacket::get_data);
ADD_PROPERTY(PropertyInfo(Variant::ARRAY, "data"), "set_data", "get_data"); // unfinished and u should prolly change this
}