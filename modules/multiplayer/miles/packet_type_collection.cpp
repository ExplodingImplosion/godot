#include packet_type_collection.h
RefCounted get_packet_type(GdScript script) {
	
}
void add_packet_type(RefCounted type) {
	
}
void PacketTypeCollection::_bind_methods(){
ClassDB::bind_method(D_METHOD("get_packet_type", "script"), &PacketTypeCollection::get_packet_type);
ClassDB::bind_method(D_METHOD("add_packet_type", "type"), &PacketTypeCollection::add_packet_type);
ADD_PROPERTY(PropertyInfo(Variant::DICTIONARY, "map", 38, "GDScript;RefCounted", 4096))),); // unfinished and u should prolly change this
ADD_PROPERTY(PropertyInfo(Variant::ARRAY, "type_list", 31, "RefCounted", 4096))),); // unfinished and u should prolly change this
ADD_PROPERTY(PropertyInfo(Variant::PACKED_STRING_ARRAY, "debug_name_list"))),); // unfinished and u should prolly change this
ADD_PROPERTY(PropertyInfo(Variant::INT, "num_types"))),); // unfinished and u should prolly change this
}