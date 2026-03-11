#include "player.h"
Player::Player(){
	
}
Player::~Player(){
	
}
void Player::_init(RefCounted client_owner, int player_index) {
	
}
RefCounted Player::get_input(int prev_frame_offset) {
	
}
RefCounted Player::get_input_by_signature(int signature) {
	
}
void Player::apply_local_inputs() {
	
}
RefCounted Player::get_client() {
	return client;
}
void Player::set_client(RefCounted p_client) {
	client = p_client;
}
int Player::get_id() {
	return id;
}
void Player::set_id(int p_id) {
	id = p_id;
}
int Player::get_idx() {
	return idx;
}
void Player::set_idx(int p_idx) {
	idx = p_idx;
}
int Player::get_team() {
	return team;
}
void Player::set_team(int p_team) {
	team = p_team;
}
bool Player::get_spectating() {
	return spectating;
}
void Player::set_spectating(bool p_spectating) {
	spectating = p_spectating;
}
Camera3D Player::get_camera() {
	return camera;
}
void Player::set_camera(Camera3D p_camera) {
	camera = p_camera;
}
String Player::get_action_suffix() {
	return action_suffix;
}
void Player::set_action_suffix(String p_action_suffix) {
	action_suffix = p_action_suffix;
}
Array Player::get_input_buffer() {
	return input_buffer;
}
void Player::set_input_buffer(Array p_input_buffer) {
	input_buffer = p_input_buffer;
}
Vector2 Player::get_aim_angle() {
	return aim_angle;
}
void Player::set_aim_angle(Vector2 p_aim_angle) {
	aim_angle = p_aim_angle;
}
void Player::_bind_methods(){
ClassDB::bind_method(D_METHOD("_init", "client_owner", "player_index"), &Player::_init);
ClassDB::bind_method(D_METHOD("get_input", "prev_frame_offset"), &Player::get_input, DEFVAL(0));
ClassDB::bind_method(D_METHOD("get_input_by_signature", "signature"), &Player::get_input_by_signature, DEFVAL(<null>));
ClassDB::bind_method(D_METHOD("apply_local_inputs"), &Player::apply_local_inputs);
ClassDB::bind_method(D_METHOD("set_client", "value"), &Player::set_client);
ClassDB::bind_method(D_METHOD("get_client"), &Player::get_client);
ADD_PROPERTY(PropertyInfo(Variant::OBJECT, "client"), "set_client", "get_client"); // unfinished and u should prolly change this
ClassDB::bind_method(D_METHOD("set_id", "value"), &Player::set_id);
ClassDB::bind_method(D_METHOD("get_id"), &Player::get_id);
ADD_PROPERTY(PropertyInfo(Variant::INT, "id"), "set_id", "get_id"); // unfinished and u should prolly change this
ClassDB::bind_method(D_METHOD("set_idx", "value"), &Player::set_idx);
ClassDB::bind_method(D_METHOD("get_idx"), &Player::get_idx);
ADD_PROPERTY(PropertyInfo(Variant::INT, "idx"), "set_idx", "get_idx"); // unfinished and u should prolly change this
ClassDB::bind_method(D_METHOD("set_team", "value"), &Player::set_team);
ClassDB::bind_method(D_METHOD("get_team"), &Player::get_team);
ADD_PROPERTY(PropertyInfo(Variant::INT, "team"), "set_team", "get_team"); // unfinished and u should prolly change this
ClassDB::bind_method(D_METHOD("set_spectating", "value"), &Player::set_spectating);
ClassDB::bind_method(D_METHOD("get_spectating"), &Player::get_spectating);
ADD_PROPERTY(PropertyInfo(Variant::BOOL, "spectating"), "set_spectating", "get_spectating"); // unfinished and u should prolly change this
ClassDB::bind_method(D_METHOD("set_camera", "value"), &Player::set_camera);
ClassDB::bind_method(D_METHOD("get_camera"), &Player::get_camera);
ADD_PROPERTY(PropertyInfo(Variant::OBJECT, "camera"), "set_camera", "get_camera"); // unfinished and u should prolly change this
ClassDB::bind_method(D_METHOD("set_action_suffix", "value"), &Player::set_action_suffix);
ClassDB::bind_method(D_METHOD("get_action_suffix"), &Player::get_action_suffix);
ADD_PROPERTY(PropertyInfo(Variant::STRING, "action_suffix"), "set_action_suffix", "get_action_suffix"); // unfinished and u should prolly change this
ClassDB::bind_method(D_METHOD("set_input_buffer", "value"), &Player::set_input_buffer);
ClassDB::bind_method(D_METHOD("get_input_buffer"), &Player::get_input_buffer);
ADD_PROPERTY(PropertyInfo(Variant::ARRAY, "input_buffer", PropertyHint(31), "RefCounted", 4096), "set_input_buffer", "get_input_buffer"); // unfinished and u should prolly change this
ClassDB::bind_method(D_METHOD("set_aim_angle", "value"), &Player::set_aim_angle);
ClassDB::bind_method(D_METHOD("get_aim_angle"), &Player::get_aim_angle);
ADD_PROPERTY(PropertyInfo(Variant::VECTOR_2, "aim_angle"), "set_aim_angle", "get_aim_angle"); // unfinished and u should prolly change this
}