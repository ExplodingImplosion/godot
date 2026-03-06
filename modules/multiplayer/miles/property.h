#include quack_multiplayer.h
#include stream_peer_bit_buffer.h
#include multiplayer_session.h
#include team_component.h
#include owner_id.h
#include serializer.h

class Property: public Resource {
GDCLASS(Property, Resource);
public:
StringName name;
int type;
int precision_level;
int sub_property_index;
int interp_type;
int visibility_type;
bool physical;
bool rotation;
bool recent_only;
int network_type;
int max_bits;
int size_bytes;
int encode_type;
Property value_type;
Property key_type;
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
const PackedByteArray max_bits_per_level = [32, 64, 16, 8, 32, 64, 16, 8, 255];
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
void _init(StringName name, int type);
void setup();
static bool is_interpolatable(int type);
String _to_string();
void get_property(Object node);
static Node property_to_node(int property);
static int node_to_property(Object node);
void set_property(void property, Object node);
void set_property_interpolated(void property, Object node, float weight);
void interpolate_property(void current_property, void prev_property, Object node, float weight);
static int get_visibility(int node_owner_id, int node_team, int receiver_id, int hostility_mask);
static int get_visibility_by_clients(int owner_id, int receiver_id);
static int get_visibility_by_team(int owner_id, int owner_team, int receiver_id);
static int get_visibility_by_node(Node node, int receiver_id, int hostility_mask);
bool get_visible(int owner_id, int receiver_id);
void encode(void property, StreamPeerBuffer buffer);
void decode(StreamPeerBuffer buffer);
static int get_encode_type(int type, int sub_property_index, int precision_level);
static int name_to_precision(String name);
String get_node_accessor_setter(String node_name);
String get_setter(String value, String node_name);
String get_interpolator(String prev_value, String current_value, String node_name);
String get_getter(String assignment, String node_name);
String get_type_func(String buffer_name, String property_value_name);
String set_type_func(String buffer_name, String property_value_name);
String get_compute_encoder(int offset, int input_offset, int bool_offset, int input_bool_offset);
String get_compute_decoder(int offset, int input_offset);
};
VARIANT_ENUM_CAST(Property::NetworkType);
VARIANT_ENUM_CAST(Property::PrecisionLevel);
VARIANT_ENUM_CAST(Property::InterpType);
VARIANT_ENUM_CAST(Property::VisibilityType);
VARIANT_ENUM_CAST(Property::PropertyIndex);
