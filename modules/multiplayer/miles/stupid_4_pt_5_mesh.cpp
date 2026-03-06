#include stupid_4_pt_5_mesh.h
void _init(CollisionShape3d collider, bool interp) {
	
}
void _physics_process(float _delta) {
	
}
void update_transform() {
	
}
void Stupid4Pt5Mesh::_bind_methods(){
ClassDB::bind_method(D_METHOD("_init", "collider", "interp"), &Stupid4Pt5Mesh::_init);
ClassDB::bind_method(D_METHOD("_physics_process", "_delta"), &Stupid4Pt5Mesh::_physics_process);
ClassDB::bind_method(D_METHOD("update_transform"), &Stupid4Pt5Mesh::update_transform);
ADD_PROPERTY(PropertyInfo(Variant::OBJECT, "parent_collider"))),); // unfinished and u should prolly change this
}