#include collider_component.h
void ColliderComponent::_ready() {
	
}
void ColliderComponent::_exit_tree() {
	
}
CollisionObject3d ColliderComponent::get_object() {
	
}
CollisionObject3d ColliderComponent::set_object(CollisionObject3d p_object) {
	
}
void ColliderComponent::_bind_methods(){
ClassDB::bind_method(D_METHOD("_ready"), &ColliderComponent::_ready);
ClassDB::bind_method(D_METHOD("_exit_tree"), &ColliderComponent::_exit_tree);
ClassDB::bind_method(D_METHOD("set_object", "value"), &ColliderComponent::set_object);
ClassDB::bind_method(D_METHOD("get_object"), &ColliderComponent::get_object);
ADD_PROPERTY(PropertyInfo(Variant::OBJECT, "object"), "set_object," "get_object"); // unfinished and u should prolly change this
}