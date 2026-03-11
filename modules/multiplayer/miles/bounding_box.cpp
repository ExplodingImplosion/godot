#include "bounding_box.h"
BoundingBox::BoundingBox(){
	
}
BoundingBox::~BoundingBox(){
	
}
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
Array BoundingBox::get_raycast_intersections(RayCast3D raycast, Array ignore_owners) {
	
}
Array BoundingBox::get_ray_intersection_intersections(World3D world, PhysicsRayQueryParameters3D ray_intersection) {
	
}
void BoundingBox::add_debug_mesh(StaticBody3D box) {
	
}
void BoundingBox::on_debug_mesh_removed(MeshInstance3D mesh, int frame) {
	
}
Array BoundingBox::get_shapecast_intersections(ShapeCast3D shapecast, bool disable_after, Array ignore_owners) {
	
}
Array BoundingBox::get_characterbody_intersections(CharacterBody3D characterbody, float move_delta, Array ignore_owners) {
	
}
Array BoundingBox::get_area_intersections(Area3D area) {
	
}
static Dictionary BoundingBox::get_component_list() {
	return component_list;
}
static void BoundingBox::set_component_list(Dictionary p_component_list) {
	component_list = p_component_list;
}
static Dictionary BoundingBox::get_bb_frames() {
	return bb_frames;
}
static void BoundingBox::set_bb_frames(Dictionary p_bb_frames) {
	bb_frames = p_bb_frames;
}
static Dictionary BoundingBox::get_bb_meshes() {
	return bb_meshes;
}
static void BoundingBox::set_bb_meshes(Dictionary p_bb_meshes) {
	bb_meshes = p_bb_meshes;
}
static Dictionary BoundingBox::get_meshes() {
	return meshes;
}
static void BoundingBox::set_meshes(Dictionary p_meshes) {
	meshes = p_meshes;
}
MeshInstance3D BoundingBox::get_mesh() {
	return mesh;
}
void BoundingBox::set_mesh(MeshInstance3D p_mesh) {
	mesh = p_mesh;
}
Array BoundingBox::get_states() {
	return states;
}
void BoundingBox::set_states(Array p_states) {
	states = p_states;
}
int BoundingBox::get_state_idx() {
	return state_idx;
}
void BoundingBox::set_state_idx(int p_state_idx) {
	state_idx = p_state_idx;
}
int BoundingBox::get_num_states() {
	return num_states;
}
void BoundingBox::set_num_states(int p_num_states) {
	num_states = p_num_states;
}
CollisionShape3D BoundingBox::get_collider() {
	return collider;
}
void BoundingBox::set_collider(CollisionShape3D p_collider) {
	collider = p_collider;
}
BoxShape3D BoundingBox::get_shape() {
	return shape;
}
void BoundingBox::set_shape(BoxShape3D p_shape) {
	shape = p_shape;
}
void BoundingBox::_bind_methods(){
ClassDB::bind_method(D_METHOD("_init"), &BoundingBox::_init);
ClassDB::bind_method(D_METHOD("_ready"), &BoundingBox::_ready);
ClassDB::bind_method(D_METHOD("fill_states"), &BoundingBox::fill_states);
ClassDB::bind_method(D_METHOD("_exit_tree"), &BoundingBox::_exit_tree);
ClassDB::bind_method(D_METHOD("tick_state", "aabb"), &BoundingBox::tick_state);
ClassDB::bind_method(D_METHOD("_physics_process", "_delta"), &BoundingBox::_physics_process);
ClassDB::bind_static_method("BoundingBox", D_METHOD("can_show_hitreg"), &BoundingBox::can_show_hitreg);
ClassDB::bind_static_method("BoundingBox", D_METHOD("get_raycast_intersections", "raycast", "ignore_owners"), &BoundingBox::get_raycast_intersections, DEFVAL(<null>));
ClassDB::bind_static_method("BoundingBox", D_METHOD("get_ray_intersection_intersections", "world", "ray_intersection"), &BoundingBox::get_ray_intersection_intersections);
ClassDB::bind_static_method("BoundingBox", D_METHOD("add_debug_mesh", "box"), &BoundingBox::add_debug_mesh);
ClassDB::bind_static_method("BoundingBox", D_METHOD("on_debug_mesh_removed", "mesh", "frame"), &BoundingBox::on_debug_mesh_removed);
ClassDB::bind_static_method("BoundingBox", D_METHOD("get_shapecast_intersections", "shapecast", "disable_after", "ignore_owners"), &BoundingBox::get_shapecast_intersections, DEFVAL(false), DEFVAL(<null>));
ClassDB::bind_static_method("BoundingBox", D_METHOD("get_characterbody_intersections", "characterbody", "move_delta", "ignore_owners"), &BoundingBox::get_characterbody_intersections, DEFVAL(<null>));
ClassDB::bind_static_method("BoundingBox", D_METHOD("get_area_intersections", "area"), &BoundingBox::get_area_intersections);
ClassDB::bind_method(D_METHOD("set_component_list", "value"), &BoundingBox::set_component_list);
ClassDB::bind_method(D_METHOD("get_component_list"), &BoundingBox::get_component_list);
ADD_PROPERTY(PropertyInfo(Variant::DICTIONARY, "component_list", PropertyHint(38), "MeshInstance3D;StaticBody3D", 4096), "set_component_list", "get_component_list"); // unfinished and u should prolly change this
ClassDB::bind_method(D_METHOD("set_bb_frames", "value"), &BoundingBox::set_bb_frames);
ClassDB::bind_method(D_METHOD("get_bb_frames"), &BoundingBox::get_bb_frames);
ADD_PROPERTY(PropertyInfo(Variant::DICTIONARY, "bb_frames", PropertyHint(38), "StaticBody3D;Dictionary", 4096), "set_bb_frames", "get_bb_frames"); // unfinished and u should prolly change this
ClassDB::bind_method(D_METHOD("set_bb_meshes", "value"), &BoundingBox::set_bb_meshes);
ClassDB::bind_method(D_METHOD("get_bb_meshes"), &BoundingBox::get_bb_meshes);
ADD_PROPERTY(PropertyInfo(Variant::DICTIONARY, "bb_meshes", PropertyHint(38), "int;MeshInstance3D", 4096), "set_bb_meshes", "get_bb_meshes"); // unfinished and u should prolly change this
ClassDB::bind_method(D_METHOD("set_meshes", "value"), &BoundingBox::set_meshes);
ClassDB::bind_method(D_METHOD("get_meshes"), &BoundingBox::get_meshes);
ADD_PROPERTY(PropertyInfo(Variant::DICTIONARY, "meshes", PropertyHint(38), "MeshInstance3D;StaticBody3D", 4096), "set_meshes", "get_meshes"); // unfinished and u should prolly change this
ClassDB::bind_method(D_METHOD("set_mesh", "value"), &BoundingBox::set_mesh);
ClassDB::bind_method(D_METHOD("get_mesh"), &BoundingBox::get_mesh);
ADD_PROPERTY(PropertyInfo(Variant::OBJECT, "mesh", PropertyHint(34), "MeshInstance3D", 4102), "set_mesh", "get_mesh"); // unfinished and u should prolly change this
ClassDB::bind_method(D_METHOD("set_states", "value"), &BoundingBox::set_states);
ClassDB::bind_method(D_METHOD("get_states"), &BoundingBox::get_states);
ADD_PROPERTY(PropertyInfo(Variant::ARRAY, "states", PropertyHint(31), "AABB", 4096), "set_states", "get_states"); // unfinished and u should prolly change this
ClassDB::bind_method(D_METHOD("set_state_idx", "value"), &BoundingBox::set_state_idx);
ClassDB::bind_method(D_METHOD("get_state_idx"), &BoundingBox::get_state_idx);
ADD_PROPERTY(PropertyInfo(Variant::INT, "state_idx"), "set_state_idx", "get_state_idx"); // unfinished and u should prolly change this
ClassDB::bind_method(D_METHOD("set_num_states", "value"), &BoundingBox::set_num_states);
ClassDB::bind_method(D_METHOD("get_num_states"), &BoundingBox::get_num_states);
ADD_PROPERTY(PropertyInfo(Variant::INT, "num_states"), "set_num_states", "get_num_states"); // unfinished and u should prolly change this
ClassDB::bind_method(D_METHOD("set_collider", "value"), &BoundingBox::set_collider);
ClassDB::bind_method(D_METHOD("get_collider"), &BoundingBox::get_collider);
ADD_PROPERTY(PropertyInfo(Variant::OBJECT, "collider"), "set_collider", "get_collider"); // unfinished and u should prolly change this
ClassDB::bind_method(D_METHOD("set_shape", "value"), &BoundingBox::set_shape);
ClassDB::bind_method(D_METHOD("get_shape"), &BoundingBox::get_shape);
ADD_PROPERTY(PropertyInfo(Variant::OBJECT, "shape"), "set_shape", "get_shape"); // unfinished and u should prolly change this
}