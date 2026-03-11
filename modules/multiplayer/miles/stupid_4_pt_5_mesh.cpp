#include "stupid_4_pt_5_mesh.h"
Stupid4Pt5Mesh::Stupid4Pt5Mesh(){
	
}
Stupid4Pt5Mesh::~Stupid4Pt5Mesh(){
	
}
void Stupid4Pt5Mesh::_init(CollisionShape3D collider, bool interp) {
	
}
void Stupid4Pt5Mesh::_physics_process(float _delta) {
	
}
void Stupid4Pt5Mesh::update_transform() {
	
}
CollisionShape3D Stupid4Pt5Mesh::get_parent_collider() {
	return parent_collider;
}
void Stupid4Pt5Mesh::set_parent_collider(CollisionShape3D p_parent_collider) {
	parent_collider = p_parent_collider;
}
void Stupid4Pt5Mesh::_bind_methods(){
ClassDB::bind_method(D_METHOD("_init", "collider", "interp"), &Stupid4Pt5Mesh::_init, DEFVAL(false));
ClassDB::bind_method(D_METHOD("_physics_process", "_delta"), &Stupid4Pt5Mesh::_physics_process);
ClassDB::bind_method(D_METHOD("update_transform"), &Stupid4Pt5Mesh::update_transform);
ClassDB::bind_method(D_METHOD("set_parent_collider", "value"), &Stupid4Pt5Mesh::set_parent_collider);
ClassDB::bind_method(D_METHOD("get_parent_collider"), &Stupid4Pt5Mesh::get_parent_collider);
ADD_PROPERTY(PropertyInfo(Variant::OBJECT, "parent_collider"), "set_parent_collider", "get_parent_collider"); // unfinished and u should prolly change this
}