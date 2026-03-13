// #include "quack_multiplayer.h"
// #include "multiplayer_session.h"
// #include "team_component.h"
// #include "owner_id.h"
// #include "serializer.h"
#include "core/io/resource.h"
#include "stream_peer_bit_buffer.h"

class Property: public Resource {
GDCLASS(Property, Resource);
public:
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
const int ENUM_MAX_BITS = -1;
enum PrecisionLevel {
DEFAULT = 0,
MAX = 1,
HALF = 2,
BYTE = 3,
u32 = 4,
u64 = 5,
u16 = 6,
u8 = 7,
Dynamic = 8,
uDynamic = 9,
ENUM = 10,
};
enum InterpType {
INTERPOLATE = 0,
DISCRETE_LATEST = 1,
DISCRETE_PREVIOUS = 2,
};
enum VisibilityType {
ALL = 0,
OWNER_ONLY = 1,
TEAM_ONLY = 2,
VIS_TYPE_MAX = 3,
};
const PackedByteArray max_bits_per_level = get_max_bits_per_level();
static const PackedByteArray get_max_bits_per_level() {
    PackedByteArray max_bits; max_bits.resize(9);
    max_bits.write[0] = 32; max_bits.write[1] = 64; max_bits.write[2] = 16; max_bits.write[3] = 8;
    max_bits.write[4] = 32; max_bits.write[5] = 64; max_bits.write[6] = 16; max_bits.write[7] = 8;
    max_bits.write[8] = 255;
    return max_bits;
}
enum PropertyIndex {
NONE = -1,
X = 0,
Y = 1,
Z = 2,
W = 3,
};
const int NO_NODE = -1;
const int UN_SERIALIZED_NODE = -2;
const int OBJECT = -3;

// variables
bool physical;
bool rotation;
bool recent_only;
StringName name;
Variant::Type type;
PrecisionLevel precision_level;
PropertyIndex sub_property_index;
InterpType interp_type;
VisibilityType visibility_type;
NetworkType network_type;
NetworkType encode_type;
int max_bits;
int size_bytes;
Ref<Property> value_type;
Ref<Property> key_type;

void _init(StringName name, Variant::Type type);
void setup();
static bool is_interpolatable(Variant::Type type);
String _to_string();
Variant get_property(Object* node);
static Node* property_to_node(int property);
static int node_to_property(Object* node);
void set_property(Ref<Property> property, Object* node);
void set_property_interpolated(Ref<Property> property, Object* node, float weight);
void interpolate_property(Ref<Property> current_property, Ref<Property> prev_property, Object* node, float weight);
static int get_visibility(int node_owner_id, int node_team, int receiver_id, int hostility_mask);
static int get_visibility_by_clients(int owner_id, int receiver_id);
static int get_visibility_by_team(int owner_id, int owner_team, int receiver_id);
static int get_visibility_by_node(Node* node, int receiver_id, int hostility_mask);
bool get_visible(int owner_id, int receiver_id);
static void encode(Ref<Property> property, StreamPeerBitBuffer buffer);
void decode(StreamPeerBitBuffer buffer);
static int get_encode_type(NetworkType type, PropertyIndex sub_property_index, PrecisionLevel precision_level);
static int name_to_precision(String name);
// String get_node_accessor_setter(String node_name);
// String get_setter(String value, String node_name);
// String get_interpolator(String prev_value, String current_value, String node_name);
// String get_getter(String assignment, String node_name);
// String get_type_func(String buffer_name, String property_value_name);
// String set_type_func(String buffer_name, String property_value_name);
StringName get_name();
void set_name(StringName p_name);
int get_type();
void set_type(Variant::Type p_type);
int get_precision_level();
void set_precision_level(PrecisionLevel p_precision_level);
int get_sub_property_index();
void set_sub_property_index(PropertyIndex p_sub_property_index);
int get_interp_type();
void set_interp_type(InterpType p_interp_type);
int get_visibility_type();
void set_visibility_type(VisibilityType p_visibility_type);
bool get_physical();
void set_physical(bool p_physical);
bool get_rotation();
void set_rotation(bool p_rotation);
bool get_recent_only();
void set_recent_only(bool p_recent_only);
int get_network_type();
void set_network_type(NetworkType p_network_type);
int get_max_bits();
void set_max_bits(int p_max_bits);
int get_size_bytes();
void set_size_bytes(int p_size_bytes);
int get_encode_type_property();
void set_encode_type(NetworkType p_encode_type);
Ref<Property> get_value_type();
void set_value_type(Ref<Property> p_value_type);
Ref<Property> get_key_type();
void set_key_type(Ref<Property> p_key_type);
static void _bind_methods();
// Property();~Property();
void _notification(int p_what);
inline void ensure_correct_interp_type();
inline void ensure_array_has_value_type();
inline void ensure_type_params_arent_stupid();
};
VARIANT_ENUM_CAST(Property::NetworkType);
VARIANT_ENUM_CAST(Property::PrecisionLevel);
VARIANT_ENUM_CAST(Property::InterpType);
VARIANT_ENUM_CAST(Property::VisibilityType);
VARIANT_ENUM_CAST(Property::PropertyIndex);
