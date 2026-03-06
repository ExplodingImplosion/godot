#include byte_utils.h
static int get_byte_change_to_set_bitflag_in_bytes(int bit_index, bool on, PackedByteArray bytes) {
	
}
static int get_byte_change_to_flip_bit_index_in_bytes(int bit_index, PackedByteArray bytes) {
	
}
static int get_byte_with_flipped_bit(int bit, int byte) {
	
}
static int get_byte_with_flipped_bit_index(int bit_index, int byte) {
	
}
static int set_bit_in_byte(int bit, int byte, bool on) {
	
}
static int set_bit_in_int(int bit, int num, bool on) {
	
}
static int set_bit_by_index_in_byte(int bit_index, int byte, bool on) {
	
}
static int set_bit_by_index_in_int(int bit_index, int num, bool on) {
	
}
static bool get_bit_by_index(int idx, PackedByteArray bytes) {
	
}
static int set_bit_by_index(int idx, PackedByteArray bytes, bool on) {
	
}
static int flip_bit_by_index(int idx, PackedByteArray bytes) {
	
}
static int get_bit_offset_within_byte(int bit) {
	
}
static bool is_multiple_of(int a, int b) {
	
}
static bool bit_has_flag(int bit, int flag) {
	
}
static bool get_bit_by_index_in_byte(int bit_index, int byte) {
	
}
static int which_byte_is_bit_in(int bit_offset) {
	
}
static int get_num_bytes_to_hold_num_bits(int num_bits) {
	
}
static bool is_valid_u8(int byte) {
	
}
static void assert_valid_u8(int byte) {
	
}
static bool is_valid_u16(int num) {
	
}
static void assert_valid_u16(int num) {
	
}
static int wrap_u16(int num) {
	
}
static int wrap_u8(int num) {
	
}
static int dumbhash(PackedByteArray bytes) {
	
}
static PackedByteArray serialize_v2(Vector2 v2) {
	
}
static PackedByteArray encode_v2(PackedByteArray bytes, Vector2 v2, int offset) {
	
}
static Vector2 decode_v2(PackedByteArray bytes, int offset) {
	
}
static PackedByteArray encode_v3(PackedByteArray bytes, Vector3 v3, int offset) {
	
}
static Vector3 decode_v3(PackedByteArray bytes, int offset) {
	
}
static PackedByteArray encode_v4(PackedByteArray bytes, Vector4 v4, int offset) {
	
}
static Vector4 decode_v4(PackedByteArray bytes, int offset) {
	
}
static PackedByteArray encode_v2i(PackedByteArray bytes, Vector2i v2, int offset) {
	
}
static Vector2i decode_v2i(PackedByteArray bytes, int offset) {
	
}
static PackedByteArray encode_v3i(PackedByteArray bytes, Vector3i v3, int offset) {
	
}
static Vector3i decode_v3i(PackedByteArray bytes, int offset) {
	
}
static PackedByteArray encode_v4i(PackedByteArray bytes, Vector4i v4, int offset) {
	
}
static Vector4i decode_v4i(PackedByteArray bytes, int offset) {
	
}
static PackedByteArray encode_r2(PackedByteArray bytes, Rect2 r2, int offset) {
	
}
static Rect2 decode_r2(PackedByteArray bytes, int offset) {
	
}
static PackedByteArray encode_r2i(PackedByteArray bytes, Rect2i r2i, int offset) {
	
}
static Rect2i decode_r2i(PackedByteArray bytes, int offset) {
	
}
static PackedByteArray encode_quat(PackedByteArray bytes, Quaternion quat, int offset) {
	
}
static Quaternion decode_quat(PackedByteArray bytes, int offset) {
	
}
static PackedByteArray encode_color(PackedByteArray bytes, Color color, int offset) {
	
}
static Color decode_color(PackedByteArray bytes, int offset) {
	
}
static void encode_array(PackedByteArray encode_to, PackedByteArray array_to_encode, int offset) {
	
}
static void turn_all_bits_on(PackedByteArray buffer) {
	
}
static Array get_all_bits_by_index(PackedByteArray bytearray) {
	
}
static String get_even_string(PackedByteArray bytearray) {
	
}
static int get_digits(int byte) {
	
}
static float bytes_to_megabytes(int bytes) {
	
}
static float bytes_to_gigabytes(int bytes) {
	
}
static int clamp_u16(int value) {
	
}
static PackedByteArray get_compressed(PackedByteArray bytes, int mode, int size_indicator_bytes) {
	
}
static PackedByteArray get_decompressed(PackedByteArray bytes, int mode, int size_indicator_bytes) {
	
}
static float get_pct(int num, int factor) {
	
}
static String to_binary_string(int num, bool Ob, int min_size) {
	
}
static PackedStringArray to_binary_array(PackedByteArray bytes, bool Ob) {
	
}
static String array_to_binary_string(PackedByteArray bytes, bool Ob) {
	
}
static PackedByteArray create_bitmask(int num_bits, bool on) {
	
}
static int get_bit_count(int num) {
	
}
void ByteUtils::_bind_methods(){
ClassDB::bind_method(D_METHOD("get_byte_change_to_set_bitflag_in_bytes", "bit_index", "on", "bytes"), &ByteUtils::get_byte_change_to_set_bitflag_in_bytes);
ClassDB::bind_method(D_METHOD("get_byte_change_to_flip_bit_index_in_bytes", "bit_index", "bytes"), &ByteUtils::get_byte_change_to_flip_bit_index_in_bytes);
ClassDB::bind_method(D_METHOD("get_byte_with_flipped_bit", "bit", "byte"), &ByteUtils::get_byte_with_flipped_bit);
ClassDB::bind_method(D_METHOD("get_byte_with_flipped_bit_index", "bit_index", "byte"), &ByteUtils::get_byte_with_flipped_bit_index);
ClassDB::bind_method(D_METHOD("set_bit_in_byte", "bit", "byte", "on"), &ByteUtils::set_bit_in_byte);
ClassDB::bind_method(D_METHOD("set_bit_in_int", "bit", "num", "on"), &ByteUtils::set_bit_in_int);
ClassDB::bind_method(D_METHOD("set_bit_by_index_in_byte", "bit_index", "byte", "on"), &ByteUtils::set_bit_by_index_in_byte);
ClassDB::bind_method(D_METHOD("set_bit_by_index_in_int", "bit_index", "num", "on"), &ByteUtils::set_bit_by_index_in_int);
ClassDB::bind_method(D_METHOD("get_bit_by_index", "idx", "bytes"), &ByteUtils::get_bit_by_index);
ClassDB::bind_method(D_METHOD("set_bit_by_index", "idx", "bytes", "on"), &ByteUtils::set_bit_by_index);
ClassDB::bind_method(D_METHOD("flip_bit_by_index", "idx", "bytes"), &ByteUtils::flip_bit_by_index);
ClassDB::bind_method(D_METHOD("get_bit_offset_within_byte", "bit"), &ByteUtils::get_bit_offset_within_byte);
ClassDB::bind_method(D_METHOD("is_multiple_of", "a", "b"), &ByteUtils::is_multiple_of);
ClassDB::bind_method(D_METHOD("bit_has_flag", "bit", "flag"), &ByteUtils::bit_has_flag);
ClassDB::bind_method(D_METHOD("get_bit_by_index_in_byte", "bit_index", "byte"), &ByteUtils::get_bit_by_index_in_byte);
ClassDB::bind_method(D_METHOD("which_byte_is_bit_in", "bit_offset"), &ByteUtils::which_byte_is_bit_in);
ClassDB::bind_method(D_METHOD("get_num_bytes_to_hold_num_bits", "num_bits"), &ByteUtils::get_num_bytes_to_hold_num_bits);
ClassDB::bind_method(D_METHOD("is_valid_u8", "byte"), &ByteUtils::is_valid_u8);
ClassDB::bind_method(D_METHOD("assert_valid_u8", "byte"), &ByteUtils::assert_valid_u8);
ClassDB::bind_method(D_METHOD("is_valid_u16", "num"), &ByteUtils::is_valid_u16);
ClassDB::bind_method(D_METHOD("assert_valid_u16", "num"), &ByteUtils::assert_valid_u16);
ClassDB::bind_method(D_METHOD("wrap_u16", "num"), &ByteUtils::wrap_u16);
ClassDB::bind_method(D_METHOD("wrap_u8", "num"), &ByteUtils::wrap_u8);
ClassDB::bind_method(D_METHOD("dumbhash", "bytes"), &ByteUtils::dumbhash);
ClassDB::bind_method(D_METHOD("serialize_v2", "v2"), &ByteUtils::serialize_v2);
ClassDB::bind_method(D_METHOD("encode_v2", "bytes", "v2", "offset"), &ByteUtils::encode_v2);
ClassDB::bind_method(D_METHOD("decode_v2", "bytes", "offset"), &ByteUtils::decode_v2);
ClassDB::bind_method(D_METHOD("encode_v3", "bytes", "v3", "offset"), &ByteUtils::encode_v3);
ClassDB::bind_method(D_METHOD("decode_v3", "bytes", "offset"), &ByteUtils::decode_v3);
ClassDB::bind_method(D_METHOD("encode_v4", "bytes", "v4", "offset"), &ByteUtils::encode_v4);
ClassDB::bind_method(D_METHOD("decode_v4", "bytes", "offset"), &ByteUtils::decode_v4);
ClassDB::bind_method(D_METHOD("encode_v2i", "bytes", "v2", "offset"), &ByteUtils::encode_v2i);
ClassDB::bind_method(D_METHOD("decode_v2i", "bytes", "offset"), &ByteUtils::decode_v2i);
ClassDB::bind_method(D_METHOD("encode_v3i", "bytes", "v3", "offset"), &ByteUtils::encode_v3i);
ClassDB::bind_method(D_METHOD("decode_v3i", "bytes", "offset"), &ByteUtils::decode_v3i);
ClassDB::bind_method(D_METHOD("encode_v4i", "bytes", "v4", "offset"), &ByteUtils::encode_v4i);
ClassDB::bind_method(D_METHOD("decode_v4i", "bytes", "offset"), &ByteUtils::decode_v4i);
ClassDB::bind_method(D_METHOD("encode_r2", "bytes", "r2", "offset"), &ByteUtils::encode_r2);
ClassDB::bind_method(D_METHOD("decode_r2", "bytes", "offset"), &ByteUtils::decode_r2);
ClassDB::bind_method(D_METHOD("encode_r2i", "bytes", "r2i", "offset"), &ByteUtils::encode_r2i);
ClassDB::bind_method(D_METHOD("decode_r2i", "bytes", "offset"), &ByteUtils::decode_r2i);
ClassDB::bind_method(D_METHOD("encode_quat", "bytes", "quat", "offset"), &ByteUtils::encode_quat);
ClassDB::bind_method(D_METHOD("decode_quat", "bytes", "offset"), &ByteUtils::decode_quat);
ClassDB::bind_method(D_METHOD("encode_color", "bytes", "color", "offset"), &ByteUtils::encode_color);
ClassDB::bind_method(D_METHOD("decode_color", "bytes", "offset"), &ByteUtils::decode_color);
ClassDB::bind_method(D_METHOD("encode_array", "encode_to", "array_to_encode", "offset"), &ByteUtils::encode_array);
ClassDB::bind_method(D_METHOD("turn_all_bits_on", "buffer"), &ByteUtils::turn_all_bits_on);
ClassDB::bind_method(D_METHOD("get_all_bits_by_index", "bytearray"), &ByteUtils::get_all_bits_by_index);
ClassDB::bind_method(D_METHOD("get_even_string", "bytearray"), &ByteUtils::get_even_string);
ClassDB::bind_method(D_METHOD("get_digits", "byte"), &ByteUtils::get_digits);
ClassDB::bind_method(D_METHOD("bytes_to_megabytes", "bytes"), &ByteUtils::bytes_to_megabytes);
ClassDB::bind_method(D_METHOD("bytes_to_gigabytes", "bytes"), &ByteUtils::bytes_to_gigabytes);
ClassDB::bind_method(D_METHOD("clamp_u16", "value"), &ByteUtils::clamp_u16);
ClassDB::bind_method(D_METHOD("get_compressed", "bytes", "mode", "size_indicator_bytes"), &ByteUtils::get_compressed);
ClassDB::bind_method(D_METHOD("get_decompressed", "bytes", "mode", "size_indicator_bytes"), &ByteUtils::get_decompressed);
ClassDB::bind_method(D_METHOD("get_pct", "num", "factor"), &ByteUtils::get_pct);
ClassDB::bind_method(D_METHOD("to_binary_string", "num", "Ob", "min_size"), &ByteUtils::to_binary_string);
ClassDB::bind_method(D_METHOD("to_binary_array", "bytes", "Ob"), &ByteUtils::to_binary_array);
ClassDB::bind_method(D_METHOD("array_to_binary_string", "bytes", "Ob"), &ByteUtils::array_to_binary_string);
ClassDB::bind_method(D_METHOD("create_bitmask", "num_bits", "on"), &ByteUtils::create_bitmask);
ClassDB::bind_method(D_METHOD("get_bit_count", "num"), &ByteUtils::get_bit_count);
}