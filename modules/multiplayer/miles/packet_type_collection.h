
class PacketTypeCollection: public RefCounted {
GDCLASS(PacketTypeCollection, RefCounted);
public:
Dictionary map;
Array type_list;
PackedStringArray debug_name_list;
int num_types;
RefCounted get_packet_type(GdScript script);
void add_packet_type(RefCounted type);
};
