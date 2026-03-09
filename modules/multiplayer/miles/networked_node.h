#include quack_multiplayer.h
#include stream_peer_bit_buffer.h

class NetworkedNode: public Resource {
GDCLASS(NetworkedNode, Resource);
public:
bool ready;
bool owner;
String owner_scene_path;
int num_props;
Script source_script;
StringName base_class;
Array properties;
PackedByteArray iter_all;
PackedByteArray iter_owner_only;
PackedByteArray iter_team_only;
PackedByteArray iter_physical;
Array iters;
Array iters_visible;
Dictionary bitmask_map;
bool is_fixed_size;
int num_bools;
int fixed_size_bytes;
GdScript type;
Callable get_plist_func;
Callable get_plist_short_func;
enum VisType {
ALL = 0,
OWNER_ONLY = 1,
TEAM_ONLY = 2,
VIS_TYPE_MAX = 3,
};
const bool node_changed = true;
const bool node_unchanged = false;
const bool node_delta = true;
const bool node_not_delta = false;
const bool node_spawned = true;
const bool node_not_spawned = false;
const bool node_deleted = false;
const bool property_changed = true;
const bool property_unchanged = false;
enum StatusFlags {
STATUS_FLAGS_NONE = 0,
UPDATE = 1,
DELTA = 2,
SPAWN = 4,
DELETE = 0,
UpdateBit = 0,
DeltaBit = 1,
SpawnBit = 2,
DELTA_NODE = 3,
SPAWN_NODE = 5,
DELETE_NODE = 1,
};
String _to_string();
void _init();
void setup();
static String get_function_declaration(String function_name, String function_body, bool indent);
void get_properties_by_type(Node node, Array array);
void get_properties_by_type_hostile(Node node, Array array);
void get_properties_by_type_teammate(Node node, Array array);
void set_properties_by_type(Node node, Array array);
void set_properties_by_type_hostile(Node node, Array array);
void set_properties_by_type_teammate(Node node, Array array);
void set_node_physical_properties(Node node, Array array);
void encode_by_type(Array array, StreamPeerBuffer buffer);
void encode_teammate_by_type(Array array, StreamPeerBuffer buffer);
void encode_hostile_by_type(Array array, StreamPeerBuffer buffer);
void decode_by_type(Array array, StreamPeerBuffer buffer);
void decode_teammate_by_type(Array array, StreamPeerBuffer buffer);
void decode_hostile_by_type(Array array, StreamPeerBuffer buffer);
void encode_delta_array_by_type(Array current_properties, Array prev_properties, StreamPeerBuffer buffer);
void encode_teammate_delta_array_by_type(Array current_properties, Array prev_properties, StreamPeerBuffer buffer);
void encode_hostile_delta_array_by_type(Array current_properties, Array prev_properties, StreamPeerBuffer buffer);
void decode_delta_array_by_type(Array array, StreamPeerBuffer buffer);
void decode_teammate_delta_array_by_type(Array array, StreamPeerBuffer buffer);
void decode_hostile_delta_array_by_type(Array array, StreamPeerBuffer buffer);
void encode_object_by_type(Object object, StreamPeerBuffer buffer);
void decode_object_by_type(Object object, StreamPeerBuffer buffer);
String generate_script();
String generate_shader();
static Array get_full_property_list(Script script);
static Dictionary get_property_list_map(Script script);
static Dictionary get_property_list_map_by_base_type(StringName type);
void apply_to_array(Object node, Array array);
Array get_array();
Array to_array(Object node);
void from_array(Array array, Object node);
void from_array_no_nulls(Array array, Object node);
void from_array_interpolated(Array array, Object node, float weight);
void interpolate(Array current_array, Array prev_array, Object node, float weight);
void encode_node(Object node, StreamPeerBuffer buffer);
static void encode_owner_delta(StreamPeerBuffer buffer);
static void encode_owner_spawn(int uid, int scene_id, StreamPeerBuffer buffer);
static void encode_owner_delete(int uid, StreamPeerBuffer buffer);
void encode_array(Array array, StreamPeerBuffer buffer, int vis_type);
void encode_array_iter(Array array, StreamPeerBuffer buffer, PackedByteArray iter);
void encode_delta_array(Array current, Array prev, StreamPeerBuffer buffer, int vis_type);
void encode_delta_array_iter(Array current, Array prev, StreamPeerBuffer buffer, PackedByteArray iter);
void decode(Object node, StreamPeerBuffer buffer);
void decode_delta(Object node, StreamPeerBuffer buffer);
void decode_array(Array array, StreamPeerBuffer buffer, int vis_type);
void decode_array_iter(Array array, StreamPeerBuffer buffer, PackedByteArray iter);
void decode_delta_array(Array array, StreamPeerBuffer buffer, int vis_type);
void decode_delta_array_iter(Array array, StreamPeerBuffer buffer, PackedByteArray iter);
bool get_ready();
bool set_ready(bool ready);
bool get_owner();
bool set_owner(bool owner);
String get_owner_scene_path();
String set_owner_scene_path(String owner_scene_path);
int get_num_props();
int set_num_props(int num_props);
Script get_source_script();
Script set_source_script(Script source_script);
StringName get_base_class();
StringName set_base_class(StringName base_class);
Array get_properties();
Array set_properties(Array properties);
PackedByteArray get_iter_all();
PackedByteArray set_iter_all(PackedByteArray iter_all);
PackedByteArray get_iter_owner_only();
PackedByteArray set_iter_owner_only(PackedByteArray iter_owner_only);
PackedByteArray get_iter_team_only();
PackedByteArray set_iter_team_only(PackedByteArray iter_team_only);
PackedByteArray get_iter_physical();
PackedByteArray set_iter_physical(PackedByteArray iter_physical);
Array get_iters();
Array set_iters(Array iters);
Array get_iters_visible();
Array set_iters_visible(Array iters_visible);
Dictionary get_bitmask_map();
Dictionary set_bitmask_map(Dictionary bitmask_map);
bool get_is_fixed_size();
bool set_is_fixed_size(bool is_fixed_size);
int get_num_bools();
int set_num_bools(int num_bools);
int get_fixed_size_bytes();
int set_fixed_size_bytes(int fixed_size_bytes);
GdScript get_type();
GdScript set_type(GdScript type);
Callable get_get_plist_func();
Callable set_get_plist_func(Callable get_plist_func);
Callable get_get_plist_short_func();
Callable set_get_plist_short_func(Callable get_plist_short_func);
};
VARIANT_ENUM_CAST(NetworkedNode::VisType);
VARIANT_ENUM_CAST(NetworkedNode::StatusFlags);
