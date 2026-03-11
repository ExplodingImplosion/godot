#include "collider_component.h"
ColliderComponent::ColliderComponent(){
	
}
ColliderComponent::~ColliderComponent(){
	
}
void ColliderComponent::_ready() {
	
}
void ColliderComponent::_exit_tree() {
	
}
static Dictionary ColliderComponent::get_component_list() {
	return component_list;
}
static void ColliderComponent::set_component_list(Dictionary p_component_list) {
	component_list = p_component_list;
}
CollisionObject3D ColliderComponent::get_object() {
	return object;
}
void ColliderComponent::set_object(CollisionObject3D p_object) {
	object = p_object;
}
void ColliderComponent::_bind_methods(){
ClassDB::bind_method(D_METHOD("_ready"), &ColliderComponent::_ready);
ClassDB::bind_method(D_METHOD("_exit_tree"), &ColliderComponent::_exit_tree);
ClassDB::bind_method(D_METHOD("set_component_list", "value"), &ColliderComponent::set_component_list);
ClassDB::bind_method(D_METHOD("get_component_list"), &ColliderComponent::get_component_list);
ADD_PROPERTY(PropertyInfo(Variant::DICTIONARY, "component_list", PropertyHint(38), "CollisionObject3D;CollisionShape3D", 4096), "set_component_list", "get_component_list"); // unfinished and u should prolly change this
ClassDB::bind_method(D_METHOD("set_object", "value"), &ColliderComponent::set_object);
ClassDB::bind_method(D_METHOD("get_object"), &ColliderComponent::get_object);
ADD_PROPERTY(PropertyInfo(Variant::OBJECT, "object"), "set_object", "get_object"); // unfinished and u should prolly change this
}