#include packet_type.h
String PacketType::_to_string() {
	
}
void PacketType::setup_packet_map() {
	
}
void PacketType::_init(GdScript script) {
	
}
bool PacketType::is_valid_packet_property(Dictionary info) {
	
}
PackedByteArray PacketType::packet_encode(RefCounted packet) {
	
}
RefCounted PacketType::packet_decode(PackedByteArray packet) {
	
}
RefCounted PacketType::decode(int sender_id, PackedByteArray packet, RefCounted collection) {
	
}
void PacketType::send_packet_to_server(RefCounted packet) {
	
}
void PacketType::send_packet_to_client(int id, RefCounted packet) {
	
}
GdScript PacketType::get_packet_class() {
	
}
GdScript PacketType::set_packet_class(GdScript p_packet_class) {
	
}
int PacketType::get_id() {
	
}
int PacketType::set_id(int p_id) {
	
}
NetworkedNode PacketType::get_property_list() {
	
}
NetworkedNode PacketType::set_property_list(NetworkedNode p_property_list) {
	
}
int PacketType::get_receivable_by() {
	
}
int PacketType::set_receivable_by(int p_receivable_by) {
	
}
bool PacketType::get_compressable() {
	
}
bool PacketType::set_compressable(bool p_compressable) {
	
}
int PacketType::get_send_mode() {
	
}
int PacketType::set_send_mode(int p_send_mode) {
	
}
void PacketType::_bind_methods(){
ClassDB::bind_method(D_METHOD("_to_string"), &PacketType::_to_string);
ClassDB::bind_static_method("PacketType", D_METHOD("setup_packet_map"), &PacketType::setup_packet_map);
ClassDB::bind_method(D_METHOD("_init", "script"), &PacketType::_init);
ClassDB::bind_static_method("PacketType", D_METHOD("is_valid_packet_property", "info"), &PacketType::is_valid_packet_property);
ClassDB::bind_method(D_METHOD("packet_encode", "packet"), &PacketType::packet_encode);
ClassDB::bind_method(D_METHOD("packet_decode", "packet"), &PacketType::packet_decode);
ClassDB::bind_static_method("PacketType", D_METHOD("decode", "sender_id", "packet", "collection"), &PacketType::decode);
ClassDB::bind_static_method("PacketType", D_METHOD("send_packet_to_server", "packet"), &PacketType::send_packet_to_server);
ClassDB::bind_static_method("PacketType", D_METHOD("send_packet_to_client", "id", "packet"), &PacketType::send_packet_to_client);
ADD_PROPERTY(PropertyInfo(Variant::OBJECT, "packet_class"), "set_packet_class," "get_packet_class"); // unfinished and u should prolly change this
ADD_PROPERTY(PropertyInfo(Variant::INT, "id"), "set_id," "get_id"); // unfinished and u should prolly change this
ADD_PROPERTY(PropertyInfo(Variant::OBJECT, "property_list"), "set_property_list," "get_property_list"); // unfinished and u should prolly change this
ADD_PROPERTY(PropertyInfo(Variant::INT, "receivable_by"), "set_receivable_by," "get_receivable_by"); // unfinished and u should prolly change this
ADD_PROPERTY(PropertyInfo(Variant::BOOL, "compressable"), "set_compressable," "get_compressable"); // unfinished and u should prolly change this
ADD_PROPERTY(PropertyInfo(Variant::INT, "send_mode"), "set_send_mode," "get_send_mode"); // unfinished and u should prolly change this
BIND_ENUM_CONSTANT(CLIENT);
BIND_ENUM_CONSTANT(SERVER);
BIND_ENUM_CONSTANT(BOTH);
BIND_ENUM_CONSTANT(NEITHER);
BIND_ENUM_CONSTANT(PACKET_RECEIVE_MAX);
BIND_ENUM_CONSTANT(PACKET_RECEIVE_MIN);

}