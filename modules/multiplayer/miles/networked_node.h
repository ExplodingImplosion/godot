#include "quack_multiplayer.h"

class NetworkedNode: public Resource {
GDCLASS(NetworkedNode, Resource);
public:
static Dictionary types;
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
void encode_by_type(Array array, StreamPeerBitBuffer buffer);
void encode_teammate_by_type(Array array, StreamPeerBitBuffer buffer);
void encode_hostile_by_type(Array array, StreamPeerBitBuffer buffer);
void decode_by_type(Array array, StreamPeerBitBuffer buffer);
void decode_teammate_by_type(Array array, StreamPeerBitBuffer buffer);
void decode_hostile_by_type(Array array, StreamPeerBitBuffer buffer);
void encode_delta_array_by_type(Array current_properties, Array prev_properties, StreamPeerBitBuffer buffer);
void encode_teammate_delta_array_by_type(Array current_properties, Array prev_properties, StreamPeerBitBuffer buffer);
void encode_hostile_delta_array_by_type(Array current_properties, Array prev_properties, StreamPeerBitBuffer buffer);
void decode_delta_array_by_type(Array array, StreamPeerBitBuffer buffer);
void decode_teammate_delta_array_by_type(Array array, StreamPeerBitBuffer buffer);
void decode_hostile_delta_array_by_type(Array array, StreamPeerBitBuffer buffer);
void encode_object_by_type(Object object, StreamPeerBitBuffer buffer);
void decode_object_by_type(Object object, StreamPeerBitBuffer buffer);
String generate_script();
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
void encode_node(Object node, StreamPeerBitBuffer buffer);
static void encode_owner_delta(StreamPeerBitBuffer buffer);
static void encode_owner_spawn(int uid, int scene_id, StreamPeerBitBuffer buffer);
static void encode_owner_delete(int uid, StreamPeerBitBuffer buffer);
void encode_array(Array array, StreamPeerBitBuffer buffer, int vis_type);
void encode_array_iter(Array array, StreamPeerBitBuffer buffer, PackedByteArray iter);
void encode_delta_array(Array current, Array prev, StreamPeerBitBuffer buffer, int vis_type);
void encode_delta_array_iter(Array current, Array prev, StreamPeerBitBuffer buffer, PackedByteArray iter);
void decode(Object node, StreamPeerBitBuffer buffer);
void decode_delta(Object node, StreamPeerBitBuffer buffer);
void decode_array(Array array, StreamPeerBitBuffer buffer, int vis_type);
void decode_array_iter(Array array, StreamPeerBitBuffer buffer, PackedByteArray iter);
void decode_delta_array(Array array, StreamPeerBitBuffer buffer, int vis_type);
void decode_delta_array_iter(Array array, StreamPeerBitBuffer buffer, PackedByteArray iter);
static Dictionary get_types();
static void set_types(Dictionary p_types);
bool get_ready();
void set_ready(bool p_ready);
bool get_owner();
void set_owner(bool p_owner);
String get_owner_scene_path();
void set_owner_scene_path(String p_owner_scene_path);
int get_num_props();
void set_num_props(int p_num_props);
Script get_source_script();
void set_source_script(Script p_source_script);
StringName get_base_class();
void set_base_class(StringName p_base_class);
Array get_properties();
void set_properties(Array p_properties);
PackedByteArray get_iter_all();
void set_iter_all(PackedByteArray p_iter_all);
PackedByteArray get_iter_owner_only();
void set_iter_owner_only(PackedByteArray p_iter_owner_only);
PackedByteArray get_iter_team_only();
void set_iter_team_only(PackedByteArray p_iter_team_only);
PackedByteArray get_iter_physical();
void set_iter_physical(PackedByteArray p_iter_physical);
Array get_iters();
void set_iters(Array p_iters);
Array get_iters_visible();
void set_iters_visible(Array p_iters_visible);
Dictionary get_bitmask_map();
void set_bitmask_map(Dictionary p_bitmask_map);
bool get_is_fixed_size();
void set_is_fixed_size(bool p_is_fixed_size);
int get_num_bools();
void set_num_bools(int p_num_bools);
int get_fixed_size_bytes();
void set_fixed_size_bytes(int p_fixed_size_bytes);
GdScript get_type();
void set_type(GdScript p_type);
Callable get_get_plist_func();
void set_get_plist_func(Callable p_get_plist_func);
Callable get_get_plist_short_func();
void set_get_plist_short_func(Callable p_get_plist_short_func);
static void _bind_methods();
NetworkedNode();~NetworkedNode();
};
VARIANT_ENUM_CAST(NetworkedNode::VisType);
VARIANT_ENUM_CAST(NetworkedNode::StatusFlags);
