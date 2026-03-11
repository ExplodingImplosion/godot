
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
void set_map(Dictionary p_map);
Array get_type_list();
void set_type_list(Array p_type_list);
PackedStringArray get_debug_name_list();
void set_debug_name_list(PackedStringArray p_debug_name_list);
int get_num_types();
void set_num_types(int p_num_types);
static void _bind_methods();
};
