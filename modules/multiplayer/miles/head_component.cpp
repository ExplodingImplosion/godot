#include head_component.h
void HeadComponent::_ready() {
	
}
void HeadComponent::_physics_process(float delta) {
	
}
void HeadComponent::apply_physics_interp_by_locality() {
	
}
void HeadComponent::_exit_tree() {
	
}
void HeadComponent::take_mouse_control() {
	
}
void HeadComponent::take_stick_control(RefCounted stick) {
	
}
void HeadComponent::release_mouse_control() {
	
}
void HeadComponent::release_stick_control() {
	
}
void HeadComponent::aim(Vector2 direction) {
	
}
void HeadComponent::_process(float delta) {
	
}
CharacterBody3d HeadComponent::get_player() {
	
}
CharacterBody3d HeadComponent::set_player(CharacterBody3d p_player) {
	
}
Camera3d HeadComponent::get_camera() {
	
}
Camera3d HeadComponent::set_camera(Camera3d p_camera) {
	
}
RemoteTransform3d HeadComponent::get_transformer() {
	
}
RemoteTransform3d HeadComponent::set_transformer(RemoteTransform3d p_transformer) {
	
}
Callable HeadComponent::get_stick_aim_func() {
	
}
Callable HeadComponent::set_stick_aim_func(Callable p_stick_aim_func) {
	
}
Callable HeadComponent::get_release_mouse_aim() {
	
}
Callable HeadComponent::set_release_mouse_aim(Callable p_release_mouse_aim) {
	
}
Callable HeadComponent::get_release_stick_aim() {
	
}
Callable HeadComponent::set_release_stick_aim(Callable p_release_stick_aim) {
	
}
void HeadComponent::_bind_methods(){
ClassDB::bind_method(D_METHOD("_ready"), &HeadComponent::_ready);
ClassDB::bind_method(D_METHOD("_physics_process", "delta"), &HeadComponent::_physics_process);
ClassDB::bind_method(D_METHOD("apply_physics_interp_by_locality"), &HeadComponent::apply_physics_interp_by_locality);
ClassDB::bind_method(D_METHOD("_exit_tree"), &HeadComponent::_exit_tree);
ClassDB::bind_method(D_METHOD("take_mouse_control"), &HeadComponent::take_mouse_control);
ClassDB::bind_method(D_METHOD("take_stick_control", "stick"), &HeadComponent::take_stick_control);
ClassDB::bind_method(D_METHOD("release_mouse_control"), &HeadComponent::release_mouse_control);
ClassDB::bind_method(D_METHOD("release_stick_control"), &HeadComponent::release_stick_control);
ClassDB::bind_method(D_METHOD("aim", "direction"), &HeadComponent::aim);
ClassDB::bind_method(D_METHOD("_process", "delta"), &HeadComponent::_process);
ClassDB::bind_method(D_METHOD("set_player", "value"), &HeadComponent::set_player);
ClassDB::bind_method(D_METHOD("get_player"), &HeadComponent::get_player);
ADD_PROPERTY(PropertyInfo(Variant::OBJECT, "player"), "set_player," "get_player"); // unfinished and u should prolly change this
ClassDB::bind_method(D_METHOD("set_camera", "value"), &HeadComponent::set_camera);
ClassDB::bind_method(D_METHOD("get_camera"), &HeadComponent::get_camera);
ADD_PROPERTY(PropertyInfo(Variant::OBJECT, "camera"), "set_camera," "get_camera"); // unfinished and u should prolly change this
ClassDB::bind_method(D_METHOD("set_transformer", "value"), &HeadComponent::set_transformer);
ClassDB::bind_method(D_METHOD("get_transformer"), &HeadComponent::get_transformer);
ADD_PROPERTY(PropertyInfo(Variant::OBJECT, "transformer"), "set_transformer," "get_transformer"); // unfinished and u should prolly change this
ClassDB::bind_method(D_METHOD("set_stick_aim_func", "value"), &HeadComponent::set_stick_aim_func);
ClassDB::bind_method(D_METHOD("get_stick_aim_func"), &HeadComponent::get_stick_aim_func);
ADD_PROPERTY(PropertyInfo(Variant::CALLABLE, "stick_aim_func"), "set_stick_aim_func," "get_stick_aim_func"); // unfinished and u should prolly change this
ClassDB::bind_method(D_METHOD("set_release_mouse_aim", "value"), &HeadComponent::set_release_mouse_aim);
ClassDB::bind_method(D_METHOD("get_release_mouse_aim"), &HeadComponent::get_release_mouse_aim);
ADD_PROPERTY(PropertyInfo(Variant::CALLABLE, "release_mouse_aim"), "set_release_mouse_aim," "get_release_mouse_aim"); // unfinished and u should prolly change this
ClassDB::bind_method(D_METHOD("set_release_stick_aim", "value"), &HeadComponent::set_release_stick_aim);
ClassDB::bind_method(D_METHOD("get_release_stick_aim"), &HeadComponent::get_release_stick_aim);
ADD_PROPERTY(PropertyInfo(Variant::CALLABLE, "release_stick_aim"), "set_release_stick_aim," "get_release_stick_aim"); // unfinished and u should prolly change this
}