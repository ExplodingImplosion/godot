#include head_component.h
void _ready() {
	
}
void _physics_process(float delta) {
	
}
void apply_physics_interp_by_locality() {
	
}
void _exit_tree() {
	
}
void take_mouse_control() {
	
}
void take_stick_control(RefCounted stick) {
	
}
void release_mouse_control() {
	
}
void release_stick_control() {
	
}
void aim(Vector2 direction) {
	
}
void _process(float delta) {
	
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
ADD_PROPERTY(PropertyInfo(Variant::OBJECT, "player"))),); // unfinished and u should prolly change this
ADD_PROPERTY(PropertyInfo(Variant::OBJECT, "camera"))),); // unfinished and u should prolly change this
ADD_PROPERTY(PropertyInfo(Variant::OBJECT, "transformer"))),); // unfinished and u should prolly change this
ADD_PROPERTY(PropertyInfo(Variant::CALLABLE, "stick_aim_func"))),); // unfinished and u should prolly change this
ADD_PROPERTY(PropertyInfo(Variant::CALLABLE, "release_mouse_aim"))),); // unfinished and u should prolly change this
ADD_PROPERTY(PropertyInfo(Variant::CALLABLE, "release_stick_aim"))),); // unfinished and u should prolly change this
}