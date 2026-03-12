#include "quack_multiplayer.h"
#include "byte_utils.h"
#include "serializer.h"

class QuackMultiplayer: public RefCounted {
GDCLASS(QuackMultiplayer, RefCounted);
public:
static Dictionary scene_registry;
static Array scenes;
static bool ready;
static Dictionary NetworkTypeAssertLmao;
const String net_prefix = "net_";
const String u8_prefix = "u8_";
const String s8_prefix = "s8_";
const String u16_prefix = "u16_";
const String s16_prefix = "s16_";
const String u32_prefix = "u32_";
const String u64_prefix = "u64_";
const String s64_prefix = "s64_";
const String double_prefix = "double_";
const String half_prefix = "half_";
const String dynamic_prefix = "d_";
const String udynamic_prefix = "ud_";
const StringName net_updated_this_frame = StringName("net_updated_this_frame");
const StringName net_predicted_locally = StringName("net_predicted_locally");
const StringName net_u32_owner_id = StringName("net_u32_owner_id");
const String GAMEPLAY_DIRECTORY = "res://gameplay";
const int BOOL_OFFSET = -1;
const int VARIABLE_SIZE = -2;
enum NetworkType {
TYPE_NIL = 0,
TYPE_INT = 1,
INT_FLAG = 1,
TYPE_FLOAT = 2,
FLOAT_FLAG = 2,
TYPE_BOOL = 4,
TYPE_STRING = 8,
TYPE_VECTOR2 = 6,
TYPE_VECTOR2I = 5,
TYPE_RECT2 = 10,
TYPE_RECT2I = 9,
TYPE_VECTOR3 = 14,
TYPE_VECTOR3I = 13,
TYPE_TRANSFORM2D = 18,
TYPE_VECTOR4 = 26,
TYPE_VECTOR4I = 17,
TYPE_PLANE = 30,
TYPE_QUATERNION = 34,
TYPE_QUAT = 34,
TYPE_BASIS = 38,
TYPE_TRANSFORM3D = 42,
TYPE_PROJECTION = 46,
TYPE_COLOR = 50,
TYPE_COLORI = 21,
TYPE_STRING_NAME = 12,
TYPE_NODE_PATH = 16,
TYPE_RID = 24,
TYPE_OBJECT = 28,
TYPE_CALLABLE = 32,
TYPE_SIGNAL = 36,
TYPE_DICTIONARY = 40,
TYPE_DICT = 40,
TYPE_ARRAY = 44,
TYPE_PACKED_BYTE_ARRAY = 48,
TYPE_PACKED_INT32_ARRAY = 52,
TYPE_PACKED_INT64_ARRAY = 56,
TYPE_PACKED_FLOAT32_ARRAY = 60,
TYPE_PACKED_FLOAT64_ARRAY = 64,
TYPE_PACKED_STRING_ARRAY = 68,
TYPE_PACKED_VECTOR2_ARRAY = 72,
TYPE_PACKED_VECTOR3_ARRAY = 76,
TYPE_PACKED_COLOR_ARRAY = 80,
TYPE_PACKED_VECTOR4_ARRAY = 84,
TYPE_U8 = 29,
TYPE_S8 = 33,
TYPE_U16 = 37,
TYPE_S16 = 41,
TYPE_U32 = 45,
TYPE_S32 = 1,
TYPE_U64 = 49,
TYPE_S64 = 53,
TYPE_UDYNAMIC = 57,
TYPE_SDYNAMIC = 61,
TYPE_DOUBLE = 54,
TYPE_HALF = 58,
TYPE_ENUM = 57,
};
static bool register_scene(String path, int idx);
static void register_scenes();
static PackedStringArray get_scene_paths(String path);
static void register_all_scripts();
static void add_networked_property(Dictionary property_info, Array property_names, PackedByteArray property_types);
static bool is_script_predicted(Script script);
static int get_net_var_type(Dictionary property_info);
static int get_property_type(String name, int type);
static int get_int_type(String name);
static int get_float_type(String name);
static bool is_script_variable(Dictionary property_info);
static bool is_net_updated_this_frame(Dictionary property_info);
static bool is_valid_net_var(Dictionary property_info);
static void set_node_position_on_ready(Node3D node, Vector3 position);
static void set_node_position_on_tree_entered(Node3D node, Vector3 position);
static void set_node_rotation_on_ready(Node3D node, Vector3 rotation);
static void set_node_rotation_on_tree_entered(Node3D node, Vector3 rotation);
static void set_node_transform_on_ready(Node3D node, Vector3 position, Vector3 rotation);
static void set_node_transform_on_tree_entered(Node3D node, Vector3 position, Vector3 rotation);
static int get_net_type(int type);
static bool is_int_type(int type);
static bool is_float_type(int type);
static bool is_non_numerical(int type);
static int get_property_size_by_type(int type);
static Dictionary get_scene_registry();
static void set_scene_registry(Dictionary p_scene_registry);
static Array get_scenes();
static void set_scenes(Array p_scenes);
static bool get_ready();
static void set_ready(bool p_ready);
static Dictionary get_NetworkTypeAssertLmao();
static void set_NetworkTypeAssertLmao(Dictionary p_NetworkTypeAssertLmao);
static void _bind_methods();
QuackMultiplayer();~QuackMultiplayer();
};
VARIANT_ENUM_CAST(QuackMultiplayer::NetworkType);
