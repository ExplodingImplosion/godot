
class PacketTypeCollection: public RefCounted {
GDCLASS(PacketTypeCollection, RefCounted);
public:
Dictionary map;
Array type_list;
PackedStringArray debug_name_list;
int num_types;
RefCounted get_packet_type(GdScript script);
void add_packet_type(RefCounted type);
Dictionary get_map();
Dictionary set_map(Dictionary map);
Array get_type_list();
Array set_type_list(Array type_list);
PackedStringArray get_debug_name_list();
PackedStringArray set_debug_name_list(PackedStringArray debug_name_list);
int get_num_types();
int set_num_types(int num_types);
};
