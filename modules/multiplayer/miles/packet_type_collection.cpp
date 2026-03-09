#include packet_type_collection.h
RefCounted PacketTypeCollection::get_packet_type(GdScript script) {
	
}
void PacketTypeCollection::add_packet_type(RefCounted type) {
	
}
Dictionary PacketTypeCollection::get_map() {
	
}
Dictionary PacketTypeCollection::set_map(Dictionary map) {
	
}
Array PacketTypeCollection::get_type_list() {
	
}
Array PacketTypeCollection::set_type_list(Array type_list) {
	
}
PackedStringArray PacketTypeCollection::get_debug_name_list() {
	
}
PackedStringArray PacketTypeCollection::set_debug_name_list(PackedStringArray debug_name_list) {
	
}
int PacketTypeCollection::get_num_types() {
	
}
int PacketTypeCollection::set_num_types(int num_types) {
	
}
void PacketTypeCollection::_bind_methods(){
ClassDB::bind_method(D_METHOD("get_packet_type", "script"), &PacketTypeCollection::get_packet_type);
ClassDB::bind_method(D_METHOD("add_packet_type", "type"), &PacketTypeCollection::add_packet_type);
ADD_PROPERTY(PropertyInfo(Variant::DICTIONARY, "map" , "get_map", "set_map", 38, "GDScript;RefCounted", 4096)); // unfinished and u should prolly change this
ADD_PROPERTY(PropertyInfo(Variant::ARRAY, "type_list" , "get_type_list", "set_type_list", 31, "RefCounted", 4096)); // unfinished and u should prolly change this
ADD_PROPERTY(PropertyInfo(Variant::PACKED_STRING_ARRAY, "debug_name_list" , "get_debug_name_list", "set_debug_name_list")); // unfinished and u should prolly change this
ADD_PROPERTY(PropertyInfo(Variant::INT, "num_types" , "get_num_types", "set_num_types")); // unfinished and u should prolly change this
}