#include "hitbox.h"
Hitbox::Hitbox(){
	
}
Hitbox::~Hitbox(){
	
}
void Hitbox::_ready() {
	
}
void Hitbox::on_owner_exit_tree(Node node_owner) {
	
}
CollisionShape3D Hitbox::get_parent_collider_component(CollisionObject3D collider) {
	
}
static Dictionary Hitbox::get_hitbox_owners() {
	return hitbox_owners;
}
static void Hitbox::set_hitbox_owners(Dictionary p_hitbox_owners) {
	hitbox_owners = p_hitbox_owners;
}
void Hitbox::_bind_methods(){
ClassDB::bind_method(D_METHOD("_ready"), &Hitbox::_ready);
ClassDB::bind_method(D_METHOD("on_owner_exit_tree", "node_owner"), &Hitbox::on_owner_exit_tree);
ClassDB::bind_static_method("Hitbox", D_METHOD("get_parent_collider_component", "collider"), &Hitbox::get_parent_collider_component);
ClassDB::bind_method(D_METHOD("set_hitbox_owners", "value"), &Hitbox::set_hitbox_owners);
ClassDB::bind_method(D_METHOD("get_hitbox_owners"), &Hitbox::get_hitbox_owners);
ADD_PROPERTY(PropertyInfo(Variant::DICTIONARY, "hitbox_owners", PropertyHint(38), "Node;Array", 4096), "set_hitbox_owners", "get_hitbox_owners"); // unfinished and u should prolly change this
}