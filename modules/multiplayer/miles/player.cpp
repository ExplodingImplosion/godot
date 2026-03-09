#include player.h
void Player::_init(RefCounted client_owner, int player_index) {
	
}
RefCounted Player::get_input(int prev_frame_offset) {
	
}
RefCounted Player::get_input_by_signature(int signature) {
	
}
void Player::apply_local_inputs() {
	
}
RefCounted Player::get_client() {
	
}
RefCounted Player::set_client(RefCounted client) {
	
}
int Player::get_id() {
	
}
int Player::set_id(int id) {
	
}
int Player::get_idx() {
	
}
int Player::set_idx(int idx) {
	
}
int Player::get_team() {
	
}
int Player::set_team(int team) {
	
}
bool Player::get_spectating() {
	
}
bool Player::set_spectating(bool spectating) {
	
}
Camera3d Player::get_camera() {
	
}
Camera3d Player::set_camera(Camera3d camera) {
	
}
String Player::get_action_suffix() {
	
}
String Player::set_action_suffix(String action_suffix) {
	
}
Array Player::get_input_buffer() {
	
}
Array Player::set_input_buffer(Array input_buffer) {
	
}
Vector2 Player::get_aim_angle() {
	
}
Vector2 Player::set_aim_angle(Vector2 aim_angle) {
	
}
void Player::_bind_methods(){
ClassDB::bind_method(D_METHOD("_init", "client_owner", "player_index"), &Player::_init);
ClassDB::bind_method(D_METHOD("get_input", "prev_frame_offset"), &Player::get_input);
ClassDB::bind_method(D_METHOD("get_input_by_signature", "signature"), &Player::get_input_by_signature);
ClassDB::bind_method(D_METHOD("apply_local_inputs"), &Player::apply_local_inputs);
ADD_PROPERTY(PropertyInfo(Variant::OBJECT, "client" , "get_client", "set_client")); // unfinished and u should prolly change this
ADD_PROPERTY(PropertyInfo(Variant::INT, "id" , "get_id", "set_id")); // unfinished and u should prolly change this
ADD_PROPERTY(PropertyInfo(Variant::INT, "idx" , "get_idx", "set_idx")); // unfinished and u should prolly change this
ADD_PROPERTY(PropertyInfo(Variant::INT, "team" , "get_team", "set_team")); // unfinished and u should prolly change this
ADD_PROPERTY(PropertyInfo(Variant::BOOL, "spectating" , "get_spectating", "set_spectating")); // unfinished and u should prolly change this
ADD_PROPERTY(PropertyInfo(Variant::OBJECT, "camera" , "get_camera", "set_camera")); // unfinished and u should prolly change this
ADD_PROPERTY(PropertyInfo(Variant::STRING, "action_suffix" , "get_action_suffix", "set_action_suffix")); // unfinished and u should prolly change this
ADD_PROPERTY(PropertyInfo(Variant::ARRAY, "input_buffer" , "get_input_buffer", "set_input_buffer", 31, "RefCounted", 4096)); // unfinished and u should prolly change this
ADD_PROPERTY(PropertyInfo(Variant::VECTOR_2, "aim_angle" , "get_aim_angle", "set_aim_angle")); // unfinished and u should prolly change this
}