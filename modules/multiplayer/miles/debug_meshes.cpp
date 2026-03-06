#include debug_meshes.h
static void add_debug_boxmesh(Transform3d transform, float time, Vector3 custom_extents) {
	
}
static MeshInstance3d spawn_debug_raycast_mesh(RayCast3d raycast, float time) {
	
}
static MeshInstance3d draw_line(Vector3 start, Vector3 end, float lifetime, Color color) {
	
}
static MeshInstance3d spawn_debug_mesh(Mesh mesh, Transform3d transform, float time) {
	
}
static bool can_add_debug_mesh() {
	
}
static bool can_add_debug_ray() {
	
}
static MeshInstance3d spawn_colldier_debug_mesh(CollisionShape3d collider, float time) {
	
}
static MeshInstance3d spawn_recolored_debug_mesh(Mesh mesh, Color color, Transform3d transform, float time) {
	
}
static MeshInstance3d spawn_recolored_colldier_debug_mesh(CollisionShape3d collider, Color color, float time) {
	
}
static void spawn_debug_mesh_child(CollisionShape3d collider, bool interp) {
	
}
void DebugMeshes::_bind_methods(){
ClassDB::bind_method(D_METHOD("add_debug_boxmesh", "transform", "time", "custom_extents"), &DebugMeshes::add_debug_boxmesh);
ClassDB::bind_method(D_METHOD("spawn_debug_raycast_mesh", "raycast", "time"), &DebugMeshes::spawn_debug_raycast_mesh);
ClassDB::bind_method(D_METHOD("draw_line", "start", "end", "lifetime", "color"), &DebugMeshes::draw_line);
ClassDB::bind_method(D_METHOD("spawn_debug_mesh", "mesh", "transform", "time"), &DebugMeshes::spawn_debug_mesh);
ClassDB::bind_method(D_METHOD("can_add_debug_mesh"), &DebugMeshes::can_add_debug_mesh);
ClassDB::bind_method(D_METHOD("can_add_debug_ray"), &DebugMeshes::can_add_debug_ray);
ClassDB::bind_method(D_METHOD("spawn_colldier_debug_mesh", "collider", "time"), &DebugMeshes::spawn_colldier_debug_mesh);
ClassDB::bind_method(D_METHOD("spawn_recolored_debug_mesh", "mesh", "color", "transform", "time"), &DebugMeshes::spawn_recolored_debug_mesh);
ClassDB::bind_method(D_METHOD("spawn_recolored_colldier_debug_mesh", "collider", "color", "time"), &DebugMeshes::spawn_recolored_colldier_debug_mesh);
ClassDB::bind_method(D_METHOD("spawn_debug_mesh_child", "collider", "interp"), &DebugMeshes::spawn_debug_mesh_child);
}