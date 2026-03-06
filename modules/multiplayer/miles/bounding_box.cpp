#include bounding_box.h
void _init() {
	
}
void _ready() {
	
}
void fill_states() {
	
}
void _exit_tree() {
	
}
void tick_state(What the fuuuuck lmao aabb) {
	
}
void _physics_process(float _delta) {
	
}
static bool can_show_hitreg() {
	
}
static Array get_raycast_intersections(RayCast3d raycast, Array ignore_owners) {
	
}
static Array get_ray_intersection_intersections(World3d world, PhysicsRayQueryParameters3d ray_intersection) {
	
}
static void add_debug_mesh(StaticBody3d box) {
	
}
static void on_debug_mesh_removed(MeshInstance3d mesh, int frame) {
	
}
static Array get_shapecast_intersections(ShapeCast3d shapecast, bool disable_after, Array ignore_owners) {
	
}
static Array get_characterbody_intersections(CharacterBody3d characterbody, float move_delta, Array ignore_owners) {
	
}
static Array get_area_intersections(Area3d area) {
	
}
void BoundingBox::_bind_methods(){
ClassDB::bind_method(D_METHOD("_init"), &BoundingBox::_init);
ClassDB::bind_method(D_METHOD("_ready"), &BoundingBox::_ready);
ClassDB::bind_method(D_METHOD("fill_states"), &BoundingBox::fill_states);
ClassDB::bind_method(D_METHOD("_exit_tree"), &BoundingBox::_exit_tree);
ClassDB::bind_method(D_METHOD("tick_state", "aabb"), &BoundingBox::tick_state);
ClassDB::bind_method(D_METHOD("_physics_process", "_delta"), &BoundingBox::_physics_process);
ClassDB::bind_method(D_METHOD("can_show_hitreg"), &BoundingBox::can_show_hitreg);
ClassDB::bind_method(D_METHOD("get_raycast_intersections", "raycast", "ignore_owners"), &BoundingBox::get_raycast_intersections);
ClassDB::bind_method(D_METHOD("get_ray_intersection_intersections", "world", "ray_intersection"), &BoundingBox::get_ray_intersection_intersections);
ClassDB::bind_method(D_METHOD("add_debug_mesh", "box"), &BoundingBox::add_debug_mesh);
ClassDB::bind_method(D_METHOD("on_debug_mesh_removed", "mesh", "frame"), &BoundingBox::on_debug_mesh_removed);
ClassDB::bind_method(D_METHOD("get_shapecast_intersections", "shapecast", "disable_after", "ignore_owners"), &BoundingBox::get_shapecast_intersections);
ClassDB::bind_method(D_METHOD("get_characterbody_intersections", "characterbody", "move_delta", "ignore_owners"), &BoundingBox::get_characterbody_intersections);
ClassDB::bind_method(D_METHOD("get_area_intersections", "area"), &BoundingBox::get_area_intersections);
ADD_PROPERTY(PropertyInfo(Variant::OBJECT, "mesh", 34, "MeshInstance3D", 4102))),); // unfinished and u should prolly change this
ADD_PROPERTY(PropertyInfo(Variant::ARRAY, "states", 31, "AABB", 4096))),); // unfinished and u should prolly change this
ADD_PROPERTY(PropertyInfo(Variant::INT, "state_idx"))),); // unfinished and u should prolly change this
ADD_PROPERTY(PropertyInfo(Variant::INT, "num_states"))),); // unfinished and u should prolly change this
ADD_PROPERTY(PropertyInfo(Variant::OBJECT, "collider"))),); // unfinished and u should prolly change this
ADD_PROPERTY(PropertyInfo(Variant::OBJECT, "shape"))),); // unfinished and u should prolly change this
}