#include stream_peer_bit_buffer.h
String _to_string() {
	
}
void reset() {
	
}
void _init(int with_size, int allocated_bools) {
	
}
PackedByteArray export(bool until_position) {
	
}
void import(PackedByteArray bytes) {
	
}
PackedByteArray get_bools(bool until_position) {
	
}
static StreamPeerBuffer decode(PackedByteArray bytes) {
	
}
PackedByteArray get_non_bools(bool until_position) {
	
}
Array get_bools_as_array() {
	
}
void ensure_bools_allocated() {
	
}
void reallocate_bools(int amount) {
	
}
void put_bool(bool value) {
	
}
bool put_eval(bool evaluation) {
	
}
bool get_bool() {
	
}
void seek_var_pos(int position) {
	
}
int get_var_pos() {
	
}
void jump(int amount) {
	
}
void put_v2(Vector2 v2) {
	
}
Vector2 get_v2() {
	
}
void put_v3(Vector3 v3) {
	
}
Vector3 get_v3() {
	
}
void put_v4(Vector4 v4) {
	
}
Vector4 get_v4() {
	
}
void put_v2i(Vector2i v2) {
	
}
Vector2i get_v2i() {
	
}
void put_v3i(Vector3i v3) {
	
}
Vector3i get_v3i() {
	
}
void put_v4i(Vector4i v4) {
	
}
Vector4i get_v4i() {
	
}
void put_r2(Rect2 r2) {
	
}
Rect2 get_r2() {
	
}
void put_r2i(Rect2i r2i) {
	
}
Rect2i get_r2i() {
	
}
void put_quat(Quaternion quat) {
	
}
Quaternion get_quat() {
	
}
void put_color(Color color) {
	
}
Color get_color() {
	
}
void put_udynamic(int num) {
	
}
int get_udynamic() {
	
}
void put_dynamic(int num) {
	
}
int get_dynamic() {
	
}
void put_n8(float num, float unit) {
	
}
float get_n8(float unit) {
	
}
void put_n16(float num, float unit) {
	
}
float get_n16(float unit) {
	
}
void put_n32(float num, float unit) {
	
}
float get_n32(float unit) {
	
}
void put_n64(float num, float unit) {
	
}
float get_n64(float unit) {
	
}
void put_r8(float num, float unit) {
	
}
float get_r8(float unit) {
	
}
void put_r16(float num, float unit) {
	
}
float get_r16(float unit) {
	
}
void put_r32(float num, float unit) {
	
}
float get_r32(float unit) {
	
}
void put_r64(float num, float unit) {
	
}
float get_r64(float unit) {
	
}
void put_rotation(Vector3 rot) {
	
}
Vector3 get_rotation() {
	
}
void put_rotation_half(Vector3 rot) {
	
}
Vector3 get_rotation_half() {
	
}
void put_nv2(Vector2 v2, float unit) {
	
}
Vector2 get_nv2(float unit) {
	
}
void put_rv2_half(Vector2 v2, float unit) {
	
}
Vector2 get_rv2_half(float unit) {
	
}
void put_nv2_half(Vector2 v2, float unit) {
	
}
Vector2 get_nv2_half(float unit) {
	
}
void put_probabalistic_enum(int value) {
	
}
int get_probabalistic_enum(int enum_max) {
	
}
void StreamPeerBitBuffer::_bind_methods(){
ClassDB::bind_method(D_METHOD("_to_string"), &StreamPeerBitBuffer::_to_string);
ClassDB::bind_method(D_METHOD("reset"), &StreamPeerBitBuffer::reset);
ClassDB::bind_method(D_METHOD("_init", "with_size", "allocated_bools"), &StreamPeerBitBuffer::_init);
ClassDB::bind_method(D_METHOD("export", "until_position"), &StreamPeerBitBuffer::export);
ClassDB::bind_method(D_METHOD("import", "bytes"), &StreamPeerBitBuffer::import);
ClassDB::bind_method(D_METHOD("get_bools", "until_position"), &StreamPeerBitBuffer::get_bools);
ClassDB::bind_method(D_METHOD("decode", "bytes"), &StreamPeerBitBuffer::decode);
ClassDB::bind_method(D_METHOD("get_non_bools", "until_position"), &StreamPeerBitBuffer::get_non_bools);
ClassDB::bind_method(D_METHOD("get_bools_as_array"), &StreamPeerBitBuffer::get_bools_as_array);
ClassDB::bind_method(D_METHOD("ensure_bools_allocated"), &StreamPeerBitBuffer::ensure_bools_allocated);
ClassDB::bind_method(D_METHOD("reallocate_bools", "amount"), &StreamPeerBitBuffer::reallocate_bools);
ClassDB::bind_method(D_METHOD("put_bool", "value"), &StreamPeerBitBuffer::put_bool);
ClassDB::bind_method(D_METHOD("put_eval", "evaluation"), &StreamPeerBitBuffer::put_eval);
ClassDB::bind_method(D_METHOD("get_bool"), &StreamPeerBitBuffer::get_bool);
ClassDB::bind_method(D_METHOD("seek_var_pos", "position"), &StreamPeerBitBuffer::seek_var_pos);
ClassDB::bind_method(D_METHOD("get_var_pos"), &StreamPeerBitBuffer::get_var_pos);
ClassDB::bind_method(D_METHOD("jump", "amount"), &StreamPeerBitBuffer::jump);
ClassDB::bind_method(D_METHOD("put_v2", "v2"), &StreamPeerBitBuffer::put_v2);
ClassDB::bind_method(D_METHOD("get_v2"), &StreamPeerBitBuffer::get_v2);
ClassDB::bind_method(D_METHOD("put_v3", "v3"), &StreamPeerBitBuffer::put_v3);
ClassDB::bind_method(D_METHOD("get_v3"), &StreamPeerBitBuffer::get_v3);
ClassDB::bind_method(D_METHOD("put_v4", "v4"), &StreamPeerBitBuffer::put_v4);
ClassDB::bind_method(D_METHOD("get_v4"), &StreamPeerBitBuffer::get_v4);
ClassDB::bind_method(D_METHOD("put_v2i", "v2"), &StreamPeerBitBuffer::put_v2i);
ClassDB::bind_method(D_METHOD("get_v2i"), &StreamPeerBitBuffer::get_v2i);
ClassDB::bind_method(D_METHOD("put_v3i", "v3"), &StreamPeerBitBuffer::put_v3i);
ClassDB::bind_method(D_METHOD("get_v3i"), &StreamPeerBitBuffer::get_v3i);
ClassDB::bind_method(D_METHOD("put_v4i", "v4"), &StreamPeerBitBuffer::put_v4i);
ClassDB::bind_method(D_METHOD("get_v4i"), &StreamPeerBitBuffer::get_v4i);
ClassDB::bind_method(D_METHOD("put_r2", "r2"), &StreamPeerBitBuffer::put_r2);
ClassDB::bind_method(D_METHOD("get_r2"), &StreamPeerBitBuffer::get_r2);
ClassDB::bind_method(D_METHOD("put_r2i", "r2i"), &StreamPeerBitBuffer::put_r2i);
ClassDB::bind_method(D_METHOD("get_r2i"), &StreamPeerBitBuffer::get_r2i);
ClassDB::bind_method(D_METHOD("put_quat", "quat"), &StreamPeerBitBuffer::put_quat);
ClassDB::bind_method(D_METHOD("get_quat"), &StreamPeerBitBuffer::get_quat);
ClassDB::bind_method(D_METHOD("put_color", "color"), &StreamPeerBitBuffer::put_color);
ClassDB::bind_method(D_METHOD("get_color"), &StreamPeerBitBuffer::get_color);
ClassDB::bind_method(D_METHOD("put_udynamic", "num"), &StreamPeerBitBuffer::put_udynamic);
ClassDB::bind_method(D_METHOD("get_udynamic"), &StreamPeerBitBuffer::get_udynamic);
ClassDB::bind_method(D_METHOD("put_dynamic", "num"), &StreamPeerBitBuffer::put_dynamic);
ClassDB::bind_method(D_METHOD("get_dynamic"), &StreamPeerBitBuffer::get_dynamic);
ClassDB::bind_method(D_METHOD("put_n8", "num", "unit"), &StreamPeerBitBuffer::put_n8);
ClassDB::bind_method(D_METHOD("get_n8", "unit"), &StreamPeerBitBuffer::get_n8);
ClassDB::bind_method(D_METHOD("put_n16", "num", "unit"), &StreamPeerBitBuffer::put_n16);
ClassDB::bind_method(D_METHOD("get_n16", "unit"), &StreamPeerBitBuffer::get_n16);
ClassDB::bind_method(D_METHOD("put_n32", "num", "unit"), &StreamPeerBitBuffer::put_n32);
ClassDB::bind_method(D_METHOD("get_n32", "unit"), &StreamPeerBitBuffer::get_n32);
ClassDB::bind_method(D_METHOD("put_n64", "num", "unit"), &StreamPeerBitBuffer::put_n64);
ClassDB::bind_method(D_METHOD("get_n64", "unit"), &StreamPeerBitBuffer::get_n64);
ClassDB::bind_method(D_METHOD("put_r8", "num", "unit"), &StreamPeerBitBuffer::put_r8);
ClassDB::bind_method(D_METHOD("get_r8", "unit"), &StreamPeerBitBuffer::get_r8);
ClassDB::bind_method(D_METHOD("put_r16", "num", "unit"), &StreamPeerBitBuffer::put_r16);
ClassDB::bind_method(D_METHOD("get_r16", "unit"), &StreamPeerBitBuffer::get_r16);
ClassDB::bind_method(D_METHOD("put_r32", "num", "unit"), &StreamPeerBitBuffer::put_r32);
ClassDB::bind_method(D_METHOD("get_r32", "unit"), &StreamPeerBitBuffer::get_r32);
ClassDB::bind_method(D_METHOD("put_r64", "num", "unit"), &StreamPeerBitBuffer::put_r64);
ClassDB::bind_method(D_METHOD("get_r64", "unit"), &StreamPeerBitBuffer::get_r64);
ClassDB::bind_method(D_METHOD("put_rotation", "rot"), &StreamPeerBitBuffer::put_rotation);
ClassDB::bind_method(D_METHOD("get_rotation"), &StreamPeerBitBuffer::get_rotation);
ClassDB::bind_method(D_METHOD("put_rotation_half", "rot"), &StreamPeerBitBuffer::put_rotation_half);
ClassDB::bind_method(D_METHOD("get_rotation_half"), &StreamPeerBitBuffer::get_rotation_half);
ClassDB::bind_method(D_METHOD("put_nv2", "v2", "unit"), &StreamPeerBitBuffer::put_nv2);
ClassDB::bind_method(D_METHOD("get_nv2", "unit"), &StreamPeerBitBuffer::get_nv2);
ClassDB::bind_method(D_METHOD("put_rv2_half", "v2", "unit"), &StreamPeerBitBuffer::put_rv2_half);
ClassDB::bind_method(D_METHOD("get_rv2_half", "unit"), &StreamPeerBitBuffer::get_rv2_half);
ClassDB::bind_method(D_METHOD("put_nv2_half", "v2", "unit"), &StreamPeerBitBuffer::put_nv2_half);
ClassDB::bind_method(D_METHOD("get_nv2_half", "unit"), &StreamPeerBitBuffer::get_nv2_half);
ClassDB::bind_method(D_METHOD("put_probabalistic_enum", "value"), &StreamPeerBitBuffer::put_probabalistic_enum);
ClassDB::bind_method(D_METHOD("get_probabalistic_enum", "enum_max"), &StreamPeerBitBuffer::get_probabalistic_enum);
ADD_PROPERTY(PropertyInfo(Variant::INT, "bool_position"))),); // unfinished and u should prolly change this
ADD_PROPERTY(PropertyInfo(Variant::INT, "num_allocated_bools"))),); // unfinished and u should prolly change this
ADD_PROPERTY(PropertyInfo(Variant::INT, "bool_bytes"))),); // unfinished and u should prolly change this
}