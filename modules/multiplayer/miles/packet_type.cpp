#include packet_type.h
String _to_string() {
	
}
static void setup_packet_map() {
	
}
void _init(GdScript script) {
	
}
static bool is_valid_packet_property(Dictionary info) {
	
}
PackedByteArray packet_encode(RefCounted packet) {
	
}
RefCounted packet_decode(PackedByteArray packet) {
	
}
static RefCounted decode(int sender_id, PackedByteArray packet, RefCounted collection) {
	
}
static void send_packet_to_server(RefCounted packet) {
	
}
static void send_packet_to_client(int id, RefCounted packet) {
	
}
void PacketType::_bind_methods(){
ClassDB::bind_method(D_METHOD("_to_string"), &PacketType::_to_string);
ClassDB::bind_method(D_METHOD("setup_packet_map"), &PacketType::setup_packet_map);
ClassDB::bind_method(D_METHOD("_init", "script"), &PacketType::_init);
ClassDB::bind_method(D_METHOD("is_valid_packet_property", "info"), &PacketType::is_valid_packet_property);
ClassDB::bind_method(D_METHOD("packet_encode", "packet"), &PacketType::packet_encode);
ClassDB::bind_method(D_METHOD("packet_decode", "packet"), &PacketType::packet_decode);
ClassDB::bind_method(D_METHOD("decode", "sender_id", "packet", "collection"), &PacketType::decode);
ClassDB::bind_method(D_METHOD("send_packet_to_server", "packet"), &PacketType::send_packet_to_server);
ClassDB::bind_method(D_METHOD("send_packet_to_client", "id", "packet"), &PacketType::send_packet_to_client);
ADD_PROPERTY(PropertyInfo(Variant::OBJECT, "packet_class"))),); // unfinished and u should prolly change this
ADD_PROPERTY(PropertyInfo(Variant::INT, "id"))),); // unfinished and u should prolly change this
ADD_PROPERTY(PropertyInfo(Variant::OBJECT, "property_list"))),); // unfinished and u should prolly change this
ADD_PROPERTY(PropertyInfo(Variant::INT, "receivable_by"))),); // unfinished and u should prolly change this
ADD_PROPERTY(PropertyInfo(Variant::BOOL, "compressable"))),); // unfinished and u should prolly change this
ADD_PROPERTY(PropertyInfo(Variant::INT, "send_mode"))),); // unfinished and u should prolly change this
BIND_ENUM_CONSTANT(CLIENT);
BIND_ENUM_CONSTANT(SERVER);
BIND_ENUM_CONSTANT(BOTH);
BIND_ENUM_CONSTANT(NEITHER);
BIND_ENUM_CONSTANT(PACKET_RECEIVE_MAX);
BIND_ENUM_CONSTANT(PACKET_RECEIVE_MIN);

}