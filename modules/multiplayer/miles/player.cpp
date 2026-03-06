#include player.h
void _init(RefCounted client_owner, int player_index) {
	
}
RefCounted get_input(int prev_frame_offset) {
	
}
RefCounted get_input_by_signature(int signature) {
	
}
void apply_local_inputs() {
	
}
void Player::_bind_methods(){
ClassDB::bind_method(D_METHOD("_init", "client_owner", "player_index"), &Player::_init);
ClassDB::bind_method(D_METHOD("get_input", "prev_frame_offset"), &Player::get_input);
ClassDB::bind_method(D_METHOD("get_input_by_signature", "signature"), &Player::get_input_by_signature);
ClassDB::bind_method(D_METHOD("apply_local_inputs"), &Player::apply_local_inputs);
ADD_PROPERTY(PropertyInfo(Variant::OBJECT, "client"))),); // unfinished and u should prolly change this
ADD_PROPERTY(PropertyInfo(Variant::INT, "id"))),); // unfinished and u should prolly change this
ADD_PROPERTY(PropertyInfo(Variant::INT, "idx"))),); // unfinished and u should prolly change this
ADD_PROPERTY(PropertyInfo(Variant::INT, "team"))),); // unfinished and u should prolly change this
ADD_PROPERTY(PropertyInfo(Variant::BOOL, "spectating"))),); // unfinished and u should prolly change this
ADD_PROPERTY(PropertyInfo(Variant::OBJECT, "camera"))),); // unfinished and u should prolly change this
ADD_PROPERTY(PropertyInfo(Variant::STRING, "action_suffix"))),); // unfinished and u should prolly change this
ADD_PROPERTY(PropertyInfo(Variant::ARRAY, "input_buffer", 31, "RefCounted", 4096))),); // unfinished and u should prolly change this
ADD_PROPERTY(PropertyInfo(Variant::VECTOR_2, "aim_angle"))),); // unfinished and u should prolly change this
}