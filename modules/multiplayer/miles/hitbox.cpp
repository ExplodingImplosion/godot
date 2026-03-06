#include hitbox.h
void _ready() {
	
}
void on_owner_exit_tree(Node node_owner) {
	
}
static CollisionShape3d get_parent_collider_component(CollisionObject3d collider) {
	
}
void Hitbox::_bind_methods(){
ClassDB::bind_method(D_METHOD("_ready"), &Hitbox::_ready);
ClassDB::bind_method(D_METHOD("on_owner_exit_tree", "node_owner"), &Hitbox::on_owner_exit_tree);
ClassDB::bind_method(D_METHOD("get_parent_collider_component", "collider"), &Hitbox::get_parent_collider_component);
}