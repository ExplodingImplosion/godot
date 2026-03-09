#include bounding_box.h
void BoundingBox::_init() {
	
}
void BoundingBox::_ready() {
	
}
void BoundingBox::fill_states() {
	
}
void BoundingBox::_exit_tree() {
	
}
void BoundingBox::tick_state(What the fuuuuck lmao aabb) {
	
}
void BoundingBox::_physics_process(float _delta) {
	
}
bool BoundingBox::can_show_hitreg() {
	
}
Array BoundingBox::get_raycast_intersections(RayCast3d raycast, Array ignore_owners) {
	
}
Array BoundingBox::get_ray_intersection_intersections(World3d world, PhysicsRayQueryParameters3d ray_intersection) {
	
}
void BoundingBox::add_debug_mesh(StaticBody3d box) {
	
}
void BoundingBox::on_debug_mesh_removed(MeshInstance3d mesh, int frame) {
	
}
Array BoundingBox::get_shapecast_intersections(ShapeCast3d shapecast, bool disable_after, Array ignore_owners) {
	
}
Array BoundingBox::get_characterbody_intersections(CharacterBody3d characterbody, float move_delta, Array ignore_owners) {
	
}
Array BoundingBox::get_area_intersections(Area3d area) {
	
}
MeshInstance3d BoundingBox::get_mesh() {
	
}
MeshInstance3d BoundingBox::set_mesh(MeshInstance3d p_mesh) {
	
}
Array BoundingBox::get_states() {
	
}
Array BoundingBox::set_states(Array p_states) {
	
}
int BoundingBox::get_state_idx() {
	
}
int BoundingBox::set_state_idx(int p_state_idx) {
	
}
int BoundingBox::get_num_states() {
	
}
int BoundingBox::set_num_states(int p_num_states) {
	
}
CollisionShape3d BoundingBox::get_collider() {
	
}
CollisionShape3d BoundingBox::set_collider(CollisionShape3d p_collider) {
	
}
BoxShape3d BoundingBox::get_shape() {
	
}
BoxShape3d BoundingBox::set_shape(BoxShape3d p_shape) {
	
}
void BoundingBox::_bind_methods(){
ClassDB::bind_method(D_METHOD("_init"), &BoundingBox::_init);
ClassDB::bind_method(D_METHOD("_ready"), &BoundingBox::_ready);
ClassDB::bind_method(D_METHOD("fill_states"), &BoundingBox::fill_states);
ClassDB::bind_method(D_METHOD("_exit_tree"), &BoundingBox::_exit_tree);
ClassDB::bind_method(D_METHOD("tick_state", "aabb"), &BoundingBox::tick_state);
ClassDB::bind_method(D_METHOD("_physics_process", "_delta"), &BoundingBox::_physics_process);
ClassDB::bind_static_method("BoundingBox", D_METHOD("can_show_hitreg"), &BoundingBox::can_show_hitreg);
ClassDB::bind_static_method("BoundingBox", D_METHOD("get_raycast_intersections", "raycast", "ignore_owners"), &BoundingBox::get_raycast_intersections);
ClassDB::bind_static_method("BoundingBox", D_METHOD("get_ray_intersection_intersections", "world", "ray_intersection"), &BoundingBox::get_ray_intersection_intersections);
ClassDB::bind_static_method("BoundingBox", D_METHOD("add_debug_mesh", "box"), &BoundingBox::add_debug_mesh);
ClassDB::bind_static_method("BoundingBox", D_METHOD("on_debug_mesh_removed", "mesh", "frame"), &BoundingBox::on_debug_mesh_removed);
ClassDB::bind_static_method("BoundingBox", D_METHOD("get_shapecast_intersections", "shapecast", "disable_after", "ignore_owners"), &BoundingBox::get_shapecast_intersections);
ClassDB::bind_static_method("BoundingBox", D_METHOD("get_characterbody_intersections", "characterbody", "move_delta", "ignore_owners"), &BoundingBox::get_characterbody_intersections);
ClassDB::bind_static_method("BoundingBox", D_METHOD("get_area_intersections", "area"), &BoundingBox::get_area_intersections);
ADD_PROPERTY(PropertyInfo(Variant::OBJECT, "mesh", 34, "MeshInstance3D", 4102), "set_mesh," "get_mesh"); // unfinished and u should prolly change this
ADD_PROPERTY(PropertyInfo(Variant::ARRAY, "states", 31, "AABB", 4096), "set_states," "get_states"); // unfinished and u should prolly change this
ADD_PROPERTY(PropertyInfo(Variant::INT, "state_idx"), "set_state_idx," "get_state_idx"); // unfinished and u should prolly change this
ADD_PROPERTY(PropertyInfo(Variant::INT, "num_states"), "set_num_states," "get_num_states"); // unfinished and u should prolly change this
ADD_PROPERTY(PropertyInfo(Variant::OBJECT, "collider"), "set_collider," "get_collider"); // unfinished and u should prolly change this
ADD_PROPERTY(PropertyInfo(Variant::OBJECT, "shape"), "set_shape," "get_shape"); // unfinished and u should prolly change this
}