#include "stream_peer_bit_buffer.h"
#include "core/io/marshalls.h"
#include "core/math/math_defs.h"
#include "core/variant/variant_utility.h"

String StreamPeerBitBuffer::_to_string() {
	return vformat(
        "StreamPeerBitBuffer (%s, %s allocated bools, %s bools used, %s bytes used)",
        String::humanize_size(get_size()),
        num_allocated_bools,
        bool_position,
        get_var_pos()
    );
}

void StreamPeerBitBuffer::reset() {
	bool_position = 0;
    seek(bool_bytes);
}

Ref<StreamPeerBitBuffer> StreamPeerBitBuffer::allocate(int with_size, int allocated_bools) {
	Ref<StreamPeerBitBuffer> buffer;
    buffer.instantiate();
    buffer->init(with_size,allocated_bools);
    return buffer;
}

// NOTE: BUG! reallocating bools turns var_pos negative (wtf?)
void StreamPeerBitBuffer::init(int with_size, int allocated_bools) {
	bool_bytes = (allocated_bools+7) / 8;
    with_size = VariantUtilityFunctions::clampi(with_size,bool_bytes,0x7FFFFFFF)
    num_allocated_bools = bool_bytes * 8;
    resize(with_size);
    seek(bool_bytes);
}

// uint64_t size = p_instance->size();
// 		ERR_FAIL_COND(p_offset < 0 || p_offset > int64_t(size) - 4);
// 		uint8_t *w = p_instance->ptrw();
// 		encode_uint32((uint32_t)p_value, &w[p_offset]);

PackedByteArray StreamPeerBitBuffer::export_data(bool until_position) {
	PackedByteArray array;
    array.resize(4);
    uint8_t *w = array.ptrw();
    encode_uint32(bool_position,&w[0]);

    // These could probably be made faster
    array.append_array(get_bools(until_position));
    array.append_array(get_non_bools(until_position));
    return array;
}
void StreamPeerBitBuffer::import(PackedByteArray bytes) {
    ERR_FAIL_COND(bytes.size() < 4);
    const uint8_t *r = bytes.ptr();
	uint32_t max_bool_idx = decode_uint32(&r[0]);
    
    data = bytes.slice(4);
    bool_bytes = (max_bool_idx+7) / 8;
    num_allocated_bools = bool_bytes * 8;
    reset();
}
PackedByteArray StreamPeerBitBuffer::get_bools(bool until_position) {
	return data.slice(0, until_position ? (bool_position + 7) / 8 : bool_bytes);
}
Ref<StreamPeerBitBuffer> StreamPeerBitBuffer::decode(PackedByteArray bytes) {
	Ref<StreamPeerBitBuffer> buffer;
    buffer.instantiate();
    buffer->import(bytes);
    return buffer;
}
PackedByteArray StreamPeerBitBuffer::get_non_bools(bool until_position) {
	return data.slice(bool_bytes, until_position ? get_position()+1 : 0x7FFFFFFF);
}
// Array StreamPeerBitBuffer::get_bools_as_array() {
// 	Array<bool>
// }
void StreamPeerBitBuffer::ensure_bools_allocated() {
	if (unlikely(bool_position >= num_allocated_bools)) {
        // if (unlikely(bool_position > num_allocated_bools)) {
        //     // Console.get_assertfail_msg(false,"Bool pos was BIGGER than num allocated bools and not at the exact amount, which implies that the bool pos was incremented by more than 1 and data was potentially lost.",true)
        // }
        reallocate_bools(bool_position + 1 - num_allocated_bools);
    }
}
void StreamPeerBitBuffer::reallocate_bools(int amount) {
	ERR_FAIL_COND(amount < 1);
    uint32_t num_new_bytes = (amount+7) / 8;
    int pos = get_position();
    int size = get_size();

    bool_bytes += num_new_bytes;
    num_allocated_bools = bool_bytes * 8;

    PackedByteArray non_bools = get_non_bools(false);
    resize(size + num_new_bytes);
    seek(bool_bytes);

    // Move all other data ahead by num_new_bytes
    Error err = _put_data(non_bools);
    ERR_FAIL_COND_MSG(err == OK, "Yo this should never be an error, but got error [format me lmao]");
    
    // Go back to original pos + new bytes like nothing ever happened
    seek(pos + num_new_bytes);

}
void StreamPeerBitBuffer::put_bool(bool value) {
	ensure_bools_allocated();
    uint32_t idx = bool_position / 8;
    uint8_t bit = 1 << (bool_position % 8);
    ERR_FAIL_COND(idx >= data.size());
    uint8_t *w = data.ptrw();
    value ? w[idx] |= bit : w[idx] &= ~bit;
    bool_position += 1;
}
bool StreamPeerBitBuffer::put_eval(bool evaluation) {
	put_bool(evaluation);
    return evaluation;
}
bool StreamPeerBitBuffer::get_bool() {
	ERR_FAIL_COND_V(bool_position >= num_allocated_bools,false);
    uint32_t idx = bool_position / 8;
    uint8_t bit = 1 << bool_position % 8;
    ERR_FAIL_COND_V(idx >= data.size(),false);
    bool_position += 1;
    uint8_t *w = data.ptrw();
    return w[idx] & bit;
}
void StreamPeerBitBuffer::seek_var_pos(int position) {
	seek(bool_bytes + position);
}
int StreamPeerBitBuffer::get_var_pos() {
	return get_position() - bool_bytes;
}
void StreamPeerBitBuffer::jump(int amount) {
	seek(get_position()+amount);
}
void StreamPeerBitBuffer::put_v2(Vector2 v2) {
	put_float(v2.x);
    put_float(v2.y);
}
Vector2 StreamPeerBitBuffer::get_v2() {
	return Vector2(get_float(),get_float());
}
void StreamPeerBitBuffer::put_v3(Vector3 v3) {
	put_float(v3.x);
	put_float(v3.y);
	put_float(v3.z);
}
Vector3 StreamPeerBitBuffer::get_v3() {
	return Vector3(get_float(),get_float(),get_float());
}
void StreamPeerBitBuffer::put_v4(Vector4 v4) {
	put_float(v4.x);
	put_float(v4.y);
	put_float(v4.z);
	put_float(v4.w);
}
Vector4 StreamPeerBitBuffer::get_v4() {
	return Vector4(
		get_float(),
		get_float(),
		get_float(),
		get_float()
	);
}
void StreamPeerBitBuffer::put_v2i(Vector2i v2) {
	put_32(v2.x);
	put_32(v2.y);
}
Vector2i StreamPeerBitBuffer::get_v2i() {
	return Vector2i(get_32(),get_32());
}
void StreamPeerBitBuffer::put_v3i(Vector3i v3) {
	put_32(v3.x);
	put_32(v3.y);
	put_32(v3.z);
}
Vector3i StreamPeerBitBuffer::get_v3i() {
	return Vector3i(
		get_32(),
		get_32(),
		get_32()
	);
}
void StreamPeerBitBuffer::put_v4i(Vector4i v4) {
	put_32(v4.x);
	put_32(v4.y);
	put_32(v4.z);
	put_32(v4.w);
}
Vector4i StreamPeerBitBuffer::get_v4i() {
	return Vector4i(
		get_32(),
		get_32(),
		get_32(),
		get_32()
	);
}
void StreamPeerBitBuffer::put_r2(Rect2 r2) {
	put_v2(r2.position);
	put_v2(r2.size);
}
Rect2 StreamPeerBitBuffer::get_r2() {
	return Rect2(
		get_float(),
		get_float(),
		get_float(),
		get_float()
	);
}
void StreamPeerBitBuffer::put_r2i(Rect2i r2i) {
	put_v2i(r2i.position);
	put_v2i(r2i.size);
}
Rect2i StreamPeerBitBuffer::get_r2i() {
	return Rect2i(
		get_32(),
		get_32(),
		get_32(),
		get_32()
	);
}
void StreamPeerBitBuffer::put_quat(Quaternion quat) {
	put_float(quat.x);
	put_float(quat.y);
	put_float(quat.z);
	put_float(quat.w);
}
Quaternion StreamPeerBitBuffer::get_quat() {
	return Quaternion(
		get_float(),
		get_float(),
		get_float(),
		get_float()
	);
}
void StreamPeerBitBuffer::put_color(Color color) {
	put_float(color.r);
	put_float(color.g);
	put_float(color.b);
	put_float(color.a);
}
Color StreamPeerBitBuffer::get_color() {
	return Color(
		get_float(),
		get_float(),
		get_float(),
		get_float()
	);
}
void StreamPeerBitBuffer::put_udynamic(int num) {
	if (put_eval(num > 255)) {
        if (put_eval(num > 65535)) {
            if (put_eval(num > 4294967295)) {
                put_u64(num);
            }
            else{
                put_u32(num);
            }
        }
        else {
            put_u16(num);
        }
    }
    else{
        put_u8(num);
    }
}
int StreamPeerBitBuffer::get_udynamic() {
	if (get_bool()) {
        if (get_bool()) {
            if (get_bool()) {
                return get_u64();
            }
            else {
                return get_u32();
            }
        }
        else {
            return get_u16();
        }
    }
    else { 
        return get_u8();
    }
}
void StreamPeerBitBuffer::put_dynamic(int num) {
	if (put_eval(num > 255)) {
        if (put_eval(num > 65535)) {
            if (put_eval(num > 4294967295)) {
                put_64(num);
            }
            else{
                put_32(num);
            }
        }
        else {
            put_16(num);
        }
    }
    else{
        put_8(num);
    }
}
int StreamPeerBitBuffer::get_dynamic() {
	if (get_bool()) {
        if (get_bool()) {
            if (get_bool()) {
                return get_64();
            }
            else {
                return get_32();
            }
        }
        else {
            return get_16();
        }
    }
    else { 
        return get_8();
    }
}

// NOTE: because "1 = 0", this wastes at least a bit when it's encoded. Fix later?

void StreamPeerBitBuffer::put_n8(float num, float unit = 1.) {
	float frac = VariantUtilityFunctions::clampf(num / unit, 0., 1.);
    put_u8(uint8_t(255*frac));
}
float StreamPeerBitBuffer::get_n8(float unit = 1.) {
	float frac = float(get_u8()) / 255.;
    return unit * frac;
}
void StreamPeerBitBuffer::put_n16(float num, float unit = 1.) {
	float frac = VariantUtilityFunctions::clampf(num / unit, 0., 1.);
    put_u16(uint16_t(65535*frac));
}
float StreamPeerBitBuffer::get_n16(float unit = 1.) {
	float frac = float(get_u16())/65535.;
	return unit*frac;
}
void StreamPeerBitBuffer::put_n32(float num, float unit = 1.) {
	float frac = VariantUtilityFunctions::clampf(num / unit,0.,1.);
	put_u32(int(4294967295*frac));
}
float StreamPeerBitBuffer::get_n32(float unit = 1.) {
	float frac = float(get_u32())/4294967295.;
	return unit*frac;
}
void StreamPeerBitBuffer::put_n64(float num, float unit = 1.) {
	float frac = VariantUtilityFunctions::clampf(num / unit,0.,1.);
	put_u64(int(1.8446744e+19*frac));
}
float StreamPeerBitBuffer::get_n64(float unit = 1.) {
	float frac = float(get_u64())/1.8446744e+19;
	return unit*frac;
}
void StreamPeerBitBuffer::put_r8(float num, float unit = Math::TAU) {
	float frac = VariantUtilityFunctions::wrapf(num / unit,0.,1.);
	put_u8(int(255*frac));
}
float StreamPeerBitBuffer::get_r8(float unit = Math::TAU) {
	float frac = float(get_u8())/255.;
	return unit*frac;
}
void StreamPeerBitBuffer::put_r16(float num, float unit = Math::TAU) {
	float frac = VariantUtilityFunctions::wrapf(num / unit,0.,1.);
	put_u16(int(65535*frac));
}
float StreamPeerBitBuffer::get_r16(float unit = Math::TAU) {
	float frac = float(get_u16())/65535.;
	return unit*frac;
}
void StreamPeerBitBuffer::put_r32(float num, float unit = Math::TAU) {
	float frac = VariantUtilityFunctions::wrapf(num / unit,0.,1.);
	put_u32(int(4294967295*frac));
}
float StreamPeerBitBuffer::get_r32(float unit = Math::TAU) {
	float frac = float(get_u32())/4294967295.;
	return unit*frac;
}
void StreamPeerBitBuffer::put_r64(float num, float unit = Math::TAU) {
	float frac = VariantUtilityFunctions::wrapf(num / unit,0.,1.);
	put_u64(int(1.8446744e+19*frac));
}
float StreamPeerBitBuffer::get_r64(float unit = Math::TAU) {
	float frac = float(get_u64())/1.8446744e+19;
	return unit*frac;
}
void StreamPeerBitBuffer::put_rotation(Vector3 rot) {
	put_r32(rot.x);
	put_r32(rot.y);
	put_r32(rot.z);
}
Vector3 StreamPeerBitBuffer::get_rotation() {
	return Vector3(get_r32(),get_r32(),get_r32());
}
void StreamPeerBitBuffer::put_rotation_half(Vector3 rot) {
	put_r16(rot.x);
	put_r16(rot.y);
	put_r16(rot.z);
}
Vector3 StreamPeerBitBuffer::get_rotation_half() {
	return Vector3(get_r16(),get_r16(),get_r16());
}
void StreamPeerBitBuffer::put_nv2(Vector2 v2, float unit = 1.) {
	put_n32(v2.x, unit);
	put_n32(v2.y, unit);
}
Vector2 StreamPeerBitBuffer::get_nv2(float unit) {
	return Vector2(get_n32(unit),get_n32(unit));
}
void StreamPeerBitBuffer::put_rv2_half(Vector2 v2, float unit = Math::TAU) {
	put_r16(v2.x,unit);
	put_r16(v2.y,unit);
}
Vector2 StreamPeerBitBuffer::get_rv2_half(float unit = Math::TAU) {
	return Vector2(get_r16(unit),get_r16(unit));
}
void StreamPeerBitBuffer::put_nv2_half(Vector2 v2, float unit = 1.) {
	put_n16(v2.x, unit);
	put_n16(v2.y, unit);
}
Vector2 StreamPeerBitBuffer::get_nv2_half(float unit = 1.) {
	return Vector2(get_n16(unit),get_n16(unit));
}
void StreamPeerBitBuffer::put_probabalistic_enum(int value) {
    for (int i = 0; i < value + 1; i++) {
        put_eval(i == value);
    }
}
int StreamPeerBitBuffer::get_probabalistic_enum(int enum_max) {
	for (int i = 0; i < enum_max; i++) {
        if (get_bool()) { return i; }
    }
	return enum_max;
}
int StreamPeerBitBuffer::get_bool_position() {
	return bool_position;
}
void StreamPeerBitBuffer::set_bool_position(int p_bool_position) {
	ERR_FAIL_COND(p_bool_position < 0);
    ERR_FAIL_COND(static_cast<uint32_t>(p_bool_position) >= num_allocated_bools);
    bool_position = p_bool_position;
}
int StreamPeerBitBuffer::get_num_allocated_bools() {
	return num_allocated_bools;
}
void StreamPeerBitBuffer::set_num_allocated_bools(int p_num_allocated_bools) {
	// ERR_FAIL_COND();
    num_allocated_bools = p_num_allocated_bools;
}
int StreamPeerBitBuffer::get_bool_bytes() {
	return bool_bytes;
}
void StreamPeerBitBuffer::set_bool_bytes(int p_bool_bytes) {
	// ERR_FAIL_COND();
    bool_bytes = p_bool_bytes;
}
void StreamPeerBitBuffer::_bind_methods(){
    ClassDB::bind_method(D_METHOD("reset"), &StreamPeerBitBuffer::reset);
    ClassDB::bind_static_method("StreamPeerBitBuffer", D_METHOD("allocate", "with_size", "allocated_bools"), &StreamPeerBitBuffer::allocate);
    ClassDB::bind_method(D_METHOD("export", "until_position"), &StreamPeerBitBuffer::export_data);
    ClassDB::bind_method(D_METHOD("import", "bytes"), &StreamPeerBitBuffer::import);
    ClassDB::bind_method(D_METHOD("get_bools", "until_position"), &StreamPeerBitBuffer::get_bools);
    ClassDB::bind_static_method("StreamPeerBitBuffer", D_METHOD("decode", "bytes"), &StreamPeerBitBuffer::decode);
    ClassDB::bind_method(D_METHOD("get_non_bools", "until_position"), &StreamPeerBitBuffer::get_non_bools);
    // ClassDB::bind_method(D_METHOD("get_bools_as_array"), &StreamPeerBitBuffer::get_bools_as_array);
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
    ClassDB::bind_method(D_METHOD("set_bool_position","new_position"), &StreamPeerBitBuffer::set_bool_position);
    ClassDB::bind_method(D_METHOD("get_bool_position"), &StreamPeerBitBuffer::get_bool_position);
    ClassDB::bind_method(D_METHOD("set_num_allocated_bools","num_bools"), &StreamPeerBitBuffer::set_num_allocated_bools);
    ClassDB::bind_method(D_METHOD("get_num_allocated_bools"), &StreamPeerBitBuffer::get_num_allocated_bools);
    ClassDB::bind_method(D_METHOD("set_bool_bytes","num_bytes"), &StreamPeerBitBuffer::set_bool_bytes);
    ClassDB::bind_method(D_METHOD("get_bool_bytes"), &StreamPeerBitBuffer::get_bool_bytes);
    ADD_PROPERTY(PropertyInfo(Variant::INT, "bool_position") , "set_bool_position", "get_bool_position"); // unfinished and u should prolly change this
    ADD_PROPERTY(PropertyInfo(Variant::INT, "num_allocated_bools") , "set_num_allocated_bools", "get_num_allocated_bools"); // unfinished and u should prolly change this
    ADD_PROPERTY(PropertyInfo(Variant::INT, "bool_bytes") , "set_bool_bytes", "get_bool_bytes"); // unfinished and u should prolly change this
}
