#include collider_component.h
void _ready() {
	
}
void _exit_tree() {
	
}
void ColliderComponent::_bind_methods(){
ClassDB::bind_method(D_METHOD("_ready"), &ColliderComponent::_ready);
ClassDB::bind_method(D_METHOD("_exit_tree"), &ColliderComponent::_exit_tree);
ADD_PROPERTY(PropertyInfo(Variant::OBJECT, "object"))),); // unfinished and u should prolly change this
}