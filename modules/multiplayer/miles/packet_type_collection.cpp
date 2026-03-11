#include "packet_type_collection.h"
RefCounted PacketTypeCollection::get_packet_type(GdScript script) {
	
}
void PacketTypeCollection::add_packet_type(RefCounted type) {
	
}
Dictionary PacketTypeCollection::get_map() {
	return map;
}
void PacketTypeCollection::set_map(Dictionary p_map) {
	map = p_map;
}
Array PacketTypeCollection::get_type_list() {
	return type_list;
}
void PacketTypeCollection::set_type_list(Array p_type_list) {
	type_list = p_type_list;
}
PackedStringArray PacketTypeCollection::get_debug_name_list() {
	return debug_name_list;
}
void PacketTypeCollection::set_debug_name_list(PackedStringArray p_debug_name_list) {
	debug_name_list = p_debug_name_list;
}
int PacketTypeCollection::get_num_types() {
	return num_types;
}
void PacketTypeCollection::set_num_types(int p_num_types) {
	num_types = p_num_types;
}
void PacketTypeCollection::_bind_methods(){
ClassDB::bind_method(D_METHOD("get_packet_type", "script"), &PacketTypeCollection::get_packet_type);
ClassDB::bind_method(D_METHOD("add_packet_type", "type"), &PacketTypeCollection::add_packet_type);
ClassDB::bind_method(D_METHOD("set_map", "value"), &PacketTypeCollection::set_map);
ClassDB::bind_method(D_METHOD("get_map"), &PacketTypeCollection::get_map);
ADD_PROPERTY(PropertyInfo(Variant::DICTIONARY, "map", PropertyHint(38), "GDScript;RefCounted", 4096), "set_map", "get_map"); // unfinished and u should prolly change this
ClassDB::bind_method(D_METHOD("set_type_list", "value"), &PacketTypeCollection::set_type_list);
ClassDB::bind_method(D_METHOD("get_type_list"), &PacketTypeCollection::get_type_list);
ADD_PROPERTY(PropertyInfo(Variant::ARRAY, "type_list", PropertyHint(31), "RefCounted", 4096), "set_type_list", "get_type_list"); // unfinished and u should prolly change this
ClassDB::bind_method(D_METHOD("set_debug_name_list", "value"), &PacketTypeCollection::set_debug_name_list);
ClassDB::bind_method(D_METHOD("get_debug_name_list"), &PacketTypeCollection::get_debug_name_list);
ADD_PROPERTY(PropertyInfo(Variant::PACKED_STRING_ARRAY, "debug_name_list"), "set_debug_name_list", "get_debug_name_list"); // unfinished and u should prolly change this
ClassDB::bind_method(D_METHOD("set_num_types", "value"), &PacketTypeCollection::set_num_types);
ClassDB::bind_method(D_METHOD("get_num_types"), &PacketTypeCollection::get_num_types);
ADD_PROPERTY(PropertyInfo(Variant::INT, "num_types"), "set_num_types", "get_num_types"); // unfinished and u should prolly change this
}