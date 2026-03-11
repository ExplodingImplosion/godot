#include "property.h"
void Property::_init(StringName name, int type) {
	
}
void Property::setup() {
	
}
bool Property::is_interpolatable(int type) {
	
}
String Property::_to_string() {
	
}
void Property::get_property(Object node) {
	
}
Node Property::property_to_node(int property) {
	
}
int Property::node_to_property(Object node) {
	
}
void Property::set_property(void property, Object node) {
	
}
void Property::set_property_interpolated(void property, Object node, float weight) {
	
}
void Property::interpolate_property(void current_property, void prev_property, Object node, float weight) {
	
}
int Property::get_visibility(int node_owner_id, int node_team, int receiver_id, int hostility_mask) {
	
}
int Property::get_visibility_by_clients(int owner_id, int receiver_id) {
	
}
int Property::get_visibility_by_team(int owner_id, int owner_team, int receiver_id) {
	
}
int Property::get_visibility_by_node(Node node, int receiver_id, int hostility_mask) {
	
}
bool Property::get_visible(int owner_id, int receiver_id) {
	
}
void Property::encode(void property, StreamPeerBitBuffer buffer) {
	
}
void Property::decode(StreamPeerBitBuffer buffer) {
	
}
int Property::get_encode_type(int type, int sub_property_index, int precision_level) {
	
}
int Property::name_to_precision(String name) {
	
}
String Property::get_node_accessor_setter(String node_name) {
	
}
String Property::get_setter(String value, String node_name) {
	
}
String Property::get_interpolator(String prev_value, String current_value, String node_name) {
	
}
String Property::get_getter(String assignment, String node_name) {
	
}
String Property::get_type_func(String buffer_name, String property_value_name) {
	
}
String Property::set_type_func(String buffer_name, String property_value_name) {
	
}
StringName Property::get_name() {
	return name;
}
void Property::set_name(StringName p_name) {
	name = p_name;
}
int Property::get_type() {
	return type;
}
void Property::set_type(int p_type) {
	type = p_type;
}
int Property::get_precision_level() {
	return precision_level;
}
void Property::set_precision_level(int p_precision_level) {
	precision_level = p_precision_level;
}
int Property::get_sub_property_index() {
	return sub_property_index;
}
void Property::set_sub_property_index(int p_sub_property_index) {
	sub_property_index = p_sub_property_index;
}
int Property::get_interp_type() {
	return interp_type;
}
void Property::set_interp_type(int p_interp_type) {
	interp_type = p_interp_type;
}
int Property::get_visibility_type() {
	return visibility_type;
}
void Property::set_visibility_type(int p_visibility_type) {
	visibility_type = p_visibility_type;
}
bool Property::get_physical() {
	return physical;
}
void Property::set_physical(bool p_physical) {
	physical = p_physical;
}
bool Property::get_rotation() {
	return rotation;
}
void Property::set_rotation(bool p_rotation) {
	rotation = p_rotation;
}
bool Property::get_recent_only() {
	return recent_only;
}
void Property::set_recent_only(bool p_recent_only) {
	recent_only = p_recent_only;
}
int Property::get_network_type() {
	return network_type;
}
void Property::set_network_type(int p_network_type) {
	network_type = p_network_type;
}
int Property::get_max_bits() {
	return max_bits;
}
void Property::set_max_bits(int p_max_bits) {
	max_bits = p_max_bits;
}
int Property::get_size_bytes() {
	return size_bytes;
}
void Property::set_size_bytes(int p_size_bytes) {
	size_bytes = p_size_bytes;
}
int Property::get_encode_type() {
	return encode_type;
}
void Property::set_encode_type(int p_encode_type) {
	encode_type = p_encode_type;
}
Property Property::get_value_type() {
	return value_type;
}
void Property::set_value_type(Property p_value_type) {
	value_type = p_value_type;
}
Property Property::get_key_type() {
	return key_type;
}
void Property::set_key_type(Property p_key_type) {
	key_type = p_key_type;
}
void Property::_bind_methods(){
ClassDB::bind_method(D_METHOD("_init", "name", "type"), &Property::_init);
ClassDB::bind_method(D_METHOD("setup"), &Property::setup);
ClassDB::bind_static_method("Property", D_METHOD("is_interpolatable", "type"), &Property::is_interpolatable);
ClassDB::bind_method(D_METHOD("_to_string"), &Property::_to_string);
ClassDB::bind_method(D_METHOD("get_property", "node"), &Property::get_property);
ClassDB::bind_static_method("Property", D_METHOD("property_to_node", "property"), &Property::property_to_node);
ClassDB::bind_static_method("Property", D_METHOD("node_to_property", "node"), &Property::node_to_property);
ClassDB::bind_method(D_METHOD("set_property", "property", "node"), &Property::set_property);
ClassDB::bind_method(D_METHOD("set_property_interpolated", "property", "node", "weight"), &Property::set_property_interpolated);
ClassDB::bind_method(D_METHOD("interpolate_property", "current_property", "prev_property", "node", "weight"), &Property::interpolate_property);
ClassDB::bind_static_method("Property", D_METHOD("get_visibility", "node_owner_id", "node_team", "receiver_id", "hostility_mask"), &Property::get_visibility);
ClassDB::bind_static_method("Property", D_METHOD("get_visibility_by_clients", "owner_id", "receiver_id"), &Property::get_visibility_by_clients);
ClassDB::bind_static_method("Property", D_METHOD("get_visibility_by_team", "owner_id", "owner_team", "receiver_id"), &Property::get_visibility_by_team);
ClassDB::bind_static_method("Property", D_METHOD("get_visibility_by_node", "node", "receiver_id", "hostility_mask"), &Property::get_visibility_by_node);
ClassDB::bind_method(D_METHOD("get_visible", "owner_id", "receiver_id"), &Property::get_visible);
ClassDB::bind_method(D_METHOD("encode", "property", "buffer"), &Property::encode);
ClassDB::bind_method(D_METHOD("decode", "buffer"), &Property::decode);
ClassDB::bind_static_method("Property", D_METHOD("get_encode_type", "type", "sub_property_index", "precision_level"), &Property::get_encode_type);
ClassDB::bind_static_method("Property", D_METHOD("name_to_precision", "name"), &Property::name_to_precision);
ClassDB::bind_method(D_METHOD("get_node_accessor_setter", "node_name"), &Property::get_node_accessor_setter);
ClassDB::bind_method(D_METHOD("get_setter", "value", "node_name"), &Property::get_setter);
ClassDB::bind_method(D_METHOD("get_interpolator", "prev_value", "current_value", "node_name"), &Property::get_interpolator);
ClassDB::bind_method(D_METHOD("get_getter", "assignment", "node_name"), &Property::get_getter);
ClassDB::bind_method(D_METHOD("get_type_func", "buffer_name", "property_value_name"), &Property::get_type_func);
ClassDB::bind_method(D_METHOD("set_type_func", "buffer_name", "property_value_name"), &Property::set_type_func);
ClassDB::bind_method(D_METHOD("set_name", "value"), &Property::set_name);
ClassDB::bind_method(D_METHOD("get_name"), &Property::get_name);
ADD_PROPERTY(PropertyInfo(Variant::STRING_NAME, "name"), "set_name", "get_name"); // unfinished and u should prolly change this
ClassDB::bind_method(D_METHOD("set_type", "value"), &Property::set_type);
ClassDB::bind_method(D_METHOD("get_type"), &Property::get_type);
ADD_PROPERTY(PropertyInfo(Variant::INT, "type", PropertyHint(2), "Type Nil:0,Type Bool:1,Type Int:2,Type Float:3,Type String:4,Type Vector 2:5,Type Vector 2i:6,Type Rect 2:7,Type Rect 2i:8,Type Vector 3:9,Type Vector 3i:10,Type Transform 2d:11,Type Vector 4:12,Type Vector 4i:13,Type Plane:14,Type Quaternion:15,Type Aabb:16,Type Basis:17,Type Transform 3d:18,Type Projection:19,Type Color:20,Type String Name:21,Type Node Path:22,Type Rid:23,Type Object:24,Type Callable:25,Type Signal:26,Type Dictionary:27,Type Array:28,Type Packed Byte Array:29,Type Packed Int 32 Array:30,Type Packed Int 64 Array:31,Type Packed Float 32 Array:32,Type Packed Float 64 Array:33,Type Packed String Array:34,Type Packed Vector 2 Array:35,Type Packed Vector 3 Array:36,Type Packed Color Array:37,Type Packed Vector 4 Array:38,Type Max:39", 69638), "set_type", "get_type"); // unfinished and u should prolly change this
ClassDB::bind_method(D_METHOD("set_precision_level", "value"), &Property::set_precision_level);
ClassDB::bind_method(D_METHOD("get_precision_level"), &Property::get_precision_level);
ADD_PROPERTY(PropertyInfo(Variant::INT, "precision_level", PropertyHint(2), "Default:0,Max:1,Half:2,Byte:3,U 32:4,U 64:5,U 16:6,U 8:7,Dynamic:8,U Dynamic:9,Enum:10", 69638), "set_precision_level", "get_precision_level"); // unfinished and u should prolly change this
ClassDB::bind_method(D_METHOD("set_sub_property_index", "value"), &Property::set_sub_property_index);
ClassDB::bind_method(D_METHOD("get_sub_property_index"), &Property::get_sub_property_index);
ADD_PROPERTY(PropertyInfo(Variant::INT, "sub_property_index", PropertyHint(2), "None:-1,X:0,Y:1,Z:2,W:3", 69638), "set_sub_property_index", "get_sub_property_index"); // unfinished and u should prolly change this
ClassDB::bind_method(D_METHOD("set_interp_type", "value"), &Property::set_interp_type);
ClassDB::bind_method(D_METHOD("get_interp_type"), &Property::get_interp_type);
ADD_PROPERTY(PropertyInfo(Variant::INT, "interp_type", PropertyHint(2), "Interpolate:0,Discrete Latest:1,Discrete Previous:2", 69638), "set_interp_type", "get_interp_type"); // unfinished and u should prolly change this
ClassDB::bind_method(D_METHOD("set_visibility_type", "value"), &Property::set_visibility_type);
ClassDB::bind_method(D_METHOD("get_visibility_type"), &Property::get_visibility_type);
ADD_PROPERTY(PropertyInfo(Variant::INT, "visibility_type", PropertyHint(2), "All:0,Owner Only:1,Team Only:2,Vis Type Max:3", 69638), "set_visibility_type", "get_visibility_type"); // unfinished and u should prolly change this
ClassDB::bind_method(D_METHOD("set_physical", "value"), &Property::set_physical);
ClassDB::bind_method(D_METHOD("get_physical"), &Property::get_physical);
ADD_PROPERTY(PropertyInfo(Variant::BOOL, "physical"), "set_physical", "get_physical"); // unfinished and u should prolly change this
ClassDB::bind_method(D_METHOD("set_rotation", "value"), &Property::set_rotation);
ClassDB::bind_method(D_METHOD("get_rotation"), &Property::get_rotation);
ADD_PROPERTY(PropertyInfo(Variant::BOOL, "rotation"), "set_rotation", "get_rotation"); // unfinished and u should prolly change this
ClassDB::bind_method(D_METHOD("set_recent_only", "value"), &Property::set_recent_only);
ClassDB::bind_method(D_METHOD("get_recent_only"), &Property::get_recent_only);
ADD_PROPERTY(PropertyInfo(Variant::BOOL, "recent_only"), "set_recent_only", "get_recent_only"); // unfinished and u should prolly change this
ClassDB::bind_method(D_METHOD("set_network_type", "value"), &Property::set_network_type);
ClassDB::bind_method(D_METHOD("get_network_type"), &Property::get_network_type);
ADD_PROPERTY(PropertyInfo(Variant::INT, "network_type"), "set_network_type", "get_network_type"); // unfinished and u should prolly change this
ClassDB::bind_method(D_METHOD("set_max_bits", "value"), &Property::set_max_bits);
ClassDB::bind_method(D_METHOD("get_max_bits"), &Property::get_max_bits);
ADD_PROPERTY(PropertyInfo(Variant::INT, "max_bits"), "set_max_bits", "get_max_bits"); // unfinished and u should prolly change this
ClassDB::bind_method(D_METHOD("set_size_bytes", "value"), &Property::set_size_bytes);
ClassDB::bind_method(D_METHOD("get_size_bytes"), &Property::get_size_bytes);
ADD_PROPERTY(PropertyInfo(Variant::INT, "size_bytes"), "set_size_bytes", "get_size_bytes"); // unfinished and u should prolly change this
ClassDB::bind_method(D_METHOD("set_encode_type", "value"), &Property::set_encode_type);
ClassDB::bind_method(D_METHOD("get_encode_type"), &Property::get_encode_type);
ADD_PROPERTY(PropertyInfo(Variant::INT, "encode_type"), "set_encode_type", "get_encode_type"); // unfinished and u should prolly change this
ClassDB::bind_method(D_METHOD("set_value_type", "value"), &Property::set_value_type);
ClassDB::bind_method(D_METHOD("get_value_type"), &Property::get_value_type);
ADD_PROPERTY(PropertyInfo(Variant::OBJECT, "value_type", PropertyHint(17), "Property", 4102), "set_value_type", "get_value_type"); // unfinished and u should prolly change this
ClassDB::bind_method(D_METHOD("set_key_type", "value"), &Property::set_key_type);
ClassDB::bind_method(D_METHOD("get_key_type"), &Property::get_key_type);
ADD_PROPERTY(PropertyInfo(Variant::OBJECT, "key_type", PropertyHint(17), "Property", 4102), "set_key_type", "get_key_type"); // unfinished and u should prolly change this
BIND_ENUM_CONSTANT(TYPE_NIL);
BIND_ENUM_CONSTANT(TYPE_INT);
BIND_ENUM_CONSTANT(INT_FLAG);
BIND_ENUM_CONSTANT(TYPE_FLOAT);
BIND_ENUM_CONSTANT(FLOAT_FLAG);
BIND_ENUM_CONSTANT(TYPE_BOOL);
BIND_ENUM_CONSTANT(TYPE_STRING);
BIND_ENUM_CONSTANT(TYPE_VECTOR2);
BIND_ENUM_CONSTANT(TYPE_VECTOR2I);
BIND_ENUM_CONSTANT(TYPE_RECT2);
BIND_ENUM_CONSTANT(TYPE_RECT2I);
BIND_ENUM_CONSTANT(TYPE_VECTOR3);
BIND_ENUM_CONSTANT(TYPE_VECTOR3I);
BIND_ENUM_CONSTANT(TYPE_TRANSFORM2D);
BIND_ENUM_CONSTANT(TYPE_VECTOR4);
BIND_ENUM_CONSTANT(TYPE_VECTOR4I);
BIND_ENUM_CONSTANT(TYPE_PLANE);
BIND_ENUM_CONSTANT(TYPE_QUATERNION);
BIND_ENUM_CONSTANT(TYPE_QUAT);
BIND_ENUM_CONSTANT(TYPE_BASIS);
BIND_ENUM_CONSTANT(TYPE_TRANSFORM3D);
BIND_ENUM_CONSTANT(TYPE_PROJECTION);
BIND_ENUM_CONSTANT(TYPE_COLOR);
BIND_ENUM_CONSTANT(TYPE_COLORI);
BIND_ENUM_CONSTANT(TYPE_STRING_NAME);
BIND_ENUM_CONSTANT(TYPE_NODE_PATH);
BIND_ENUM_CONSTANT(TYPE_RID);
BIND_ENUM_CONSTANT(TYPE_OBJECT);
BIND_ENUM_CONSTANT(TYPE_CALLABLE);
BIND_ENUM_CONSTANT(TYPE_SIGNAL);
BIND_ENUM_CONSTANT(TYPE_DICTIONARY);
BIND_ENUM_CONSTANT(TYPE_DICT);
BIND_ENUM_CONSTANT(TYPE_ARRAY);
BIND_ENUM_CONSTANT(TYPE_PACKED_BYTE_ARRAY);
BIND_ENUM_CONSTANT(TYPE_PACKED_INT32_ARRAY);
BIND_ENUM_CONSTANT(TYPE_PACKED_INT64_ARRAY);
BIND_ENUM_CONSTANT(TYPE_PACKED_FLOAT32_ARRAY);
BIND_ENUM_CONSTANT(TYPE_PACKED_FLOAT64_ARRAY);
BIND_ENUM_CONSTANT(TYPE_PACKED_STRING_ARRAY);
BIND_ENUM_CONSTANT(TYPE_PACKED_VECTOR2_ARRAY);
BIND_ENUM_CONSTANT(TYPE_PACKED_VECTOR3_ARRAY);
BIND_ENUM_CONSTANT(TYPE_PACKED_COLOR_ARRAY);
BIND_ENUM_CONSTANT(TYPE_PACKED_VECTOR4_ARRAY);
BIND_ENUM_CONSTANT(TYPE_U8);
BIND_ENUM_CONSTANT(TYPE_S8);
BIND_ENUM_CONSTANT(TYPE_U16);
BIND_ENUM_CONSTANT(TYPE_S16);
BIND_ENUM_CONSTANT(TYPE_U32);
BIND_ENUM_CONSTANT(TYPE_S32);
BIND_ENUM_CONSTANT(TYPE_U64);
BIND_ENUM_CONSTANT(TYPE_S64);
BIND_ENUM_CONSTANT(TYPE_UDYNAMIC);
BIND_ENUM_CONSTANT(TYPE_SDYNAMIC);
BIND_ENUM_CONSTANT(TYPE_DOUBLE);
BIND_ENUM_CONSTANT(TYPE_HALF);
BIND_ENUM_CONSTANT(TYPE_ENUM);

BIND_ENUM_CONSTANT(DEFAULT);
BIND_ENUM_CONSTANT(MAX);
BIND_ENUM_CONSTANT(HALF);
BIND_ENUM_CONSTANT(BYTE);
BIND_ENUM_CONSTANT(u32);
BIND_ENUM_CONSTANT(u64);
BIND_ENUM_CONSTANT(u16);
BIND_ENUM_CONSTANT(u8);
BIND_ENUM_CONSTANT(Dynamic);
BIND_ENUM_CONSTANT(uDynamic);
BIND_ENUM_CONSTANT(ENUM);

BIND_ENUM_CONSTANT(INTERPOLATE);
BIND_ENUM_CONSTANT(DISCRETE_LATEST);
BIND_ENUM_CONSTANT(DISCRETE_PREVIOUS);

BIND_ENUM_CONSTANT(ALL);
BIND_ENUM_CONSTANT(OWNER_ONLY);
BIND_ENUM_CONSTANT(TEAM_ONLY);
BIND_ENUM_CONSTANT(VIS_TYPE_MAX);

BIND_ENUM_CONSTANT(NONE);
BIND_ENUM_CONSTANT(X);
BIND_ENUM_CONSTANT(Y);
BIND_ENUM_CONSTANT(Z);
BIND_ENUM_CONSTANT(W);

}