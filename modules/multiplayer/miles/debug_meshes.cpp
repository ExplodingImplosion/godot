#include "debug_meshes.h"
DebugMeshes::DebugMeshes(){
	
}
DebugMeshes::~DebugMeshes(){
	
}
void DebugMeshes::add_debug_boxmesh(Transform3d transform, float time, Vector3 custom_extents) {
	
}
MeshInstance3D DebugMeshes::spawn_debug_raycast_mesh(RayCast3D raycast, float time) {
	
}
MeshInstance3D DebugMeshes::draw_line(Vector3 start, Vector3 end, float lifetime, Color color) {
	
}
MeshInstance3D DebugMeshes::spawn_debug_mesh(Mesh mesh, Transform3d transform, float time) {
	
}
bool DebugMeshes::can_add_debug_mesh() {
	
}
bool DebugMeshes::can_add_debug_ray() {
	
}
MeshInstance3D DebugMeshes::spawn_colldier_debug_mesh(CollisionShape3D collider, float time) {
	
}
MeshInstance3D DebugMeshes::spawn_recolored_debug_mesh(Mesh mesh, Color color, Transform3d transform, float time) {
	
}
MeshInstance3D DebugMeshes::spawn_recolored_colldier_debug_mesh(CollisionShape3D collider, Color color, float time) {
	
}
void DebugMeshes::spawn_debug_mesh_child(CollisionShape3D collider, bool interp) {
	
}
static StandardMaterial3D DebugMeshes::get_raycast_debug_mesh() {
	return raycast_debug_mesh;
}
static void DebugMeshes::set_raycast_debug_mesh(StandardMaterial3D p_raycast_debug_mesh) {
	raycast_debug_mesh = p_raycast_debug_mesh;
}
static StandardMaterial3D DebugMeshes::get_raycast_colliding_debug_mesh() {
	return raycast_colliding_debug_mesh;
}
static void DebugMeshes::set_raycast_colliding_debug_mesh(StandardMaterial3D p_raycast_colliding_debug_mesh) {
	raycast_colliding_debug_mesh = p_raycast_colliding_debug_mesh;
}
static ArrayMesh DebugMeshes::get_impact_mesh() {
	return impact_mesh;
}
static void DebugMeshes::set_impact_mesh(ArrayMesh p_impact_mesh) {
	impact_mesh = p_impact_mesh;
}
void DebugMeshes::_bind_methods(){
ClassDB::bind_static_method("DebugMeshes", D_METHOD("add_debug_boxmesh", "transform", "time", "custom_extents"), &DebugMeshes::add_debug_boxmesh, DEFVAL(3.0), DEFVAL((0.05, 0.05, 0.05)));
ClassDB::bind_static_method("DebugMeshes", D_METHOD("spawn_debug_raycast_mesh", "raycast", "time"), &DebugMeshes::spawn_debug_raycast_mesh, DEFVAL(3.0));
ClassDB::bind_static_method("DebugMeshes", D_METHOD("draw_line", "start", "end", "lifetime", "color"), &DebugMeshes::draw_line, DEFVAL((0.6275, 0.1255, 0.9412, 1.0)));
ClassDB::bind_static_method("DebugMeshes", D_METHOD("spawn_debug_mesh", "mesh", "transform", "time"), &DebugMeshes::spawn_debug_mesh, DEFVAL(3.0));
ClassDB::bind_static_method("DebugMeshes", D_METHOD("can_add_debug_mesh"), &DebugMeshes::can_add_debug_mesh);
ClassDB::bind_static_method("DebugMeshes", D_METHOD("can_add_debug_ray"), &DebugMeshes::can_add_debug_ray);
ClassDB::bind_static_method("DebugMeshes", D_METHOD("spawn_colldier_debug_mesh", "collider", "time"), &DebugMeshes::spawn_colldier_debug_mesh, DEFVAL(<null>));
ClassDB::bind_static_method("DebugMeshes", D_METHOD("spawn_recolored_debug_mesh", "mesh", "color", "transform", "time"), &DebugMeshes::spawn_recolored_debug_mesh);
ClassDB::bind_static_method("DebugMeshes", D_METHOD("spawn_recolored_colldier_debug_mesh", "collider", "color", "time"), &DebugMeshes::spawn_recolored_colldier_debug_mesh, DEFVAL((0.0, 0.6, 0.698, 0.0235)), DEFVAL(<null>));
ClassDB::bind_static_method("DebugMeshes", D_METHOD("spawn_debug_mesh_child", "collider", "interp"), &DebugMeshes::spawn_debug_mesh_child, DEFVAL(false));
ClassDB::bind_method(D_METHOD("set_raycast_debug_mesh", "value"), &DebugMeshes::set_raycast_debug_mesh);
ClassDB::bind_method(D_METHOD("get_raycast_debug_mesh"), &DebugMeshes::get_raycast_debug_mesh);
ADD_PROPERTY(PropertyInfo(Variant::OBJECT, "raycast_debug_mesh"), "set_raycast_debug_mesh", "get_raycast_debug_mesh"); // unfinished and u should prolly change this
ClassDB::bind_method(D_METHOD("set_raycast_colliding_debug_mesh", "value"), &DebugMeshes::set_raycast_colliding_debug_mesh);
ClassDB::bind_method(D_METHOD("get_raycast_colliding_debug_mesh"), &DebugMeshes::get_raycast_colliding_debug_mesh);
ADD_PROPERTY(PropertyInfo(Variant::OBJECT, "raycast_colliding_debug_mesh"), "set_raycast_colliding_debug_mesh", "get_raycast_colliding_debug_mesh"); // unfinished and u should prolly change this
ClassDB::bind_method(D_METHOD("set_impact_mesh", "value"), &DebugMeshes::set_impact_mesh);
ClassDB::bind_method(D_METHOD("get_impact_mesh"), &DebugMeshes::get_impact_mesh);
ADD_PROPERTY(PropertyInfo(Variant::OBJECT, "impact_mesh"), "set_impact_mesh", "get_impact_mesh"); // unfinished and u should prolly change this
}