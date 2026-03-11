#include "debug_meshes.h"
void DebugMeshes::add_debug_boxmesh(Transform3d transform, float time, Vector3 custom_extents) {
	
}
MeshInstance3d DebugMeshes::spawn_debug_raycast_mesh(RayCast3d raycast, float time) {
	
}
MeshInstance3d DebugMeshes::draw_line(Vector3 start, Vector3 end, float lifetime, Color color) {
	
}
MeshInstance3d DebugMeshes::spawn_debug_mesh(Mesh mesh, Transform3d transform, float time) {
	
}
bool DebugMeshes::can_add_debug_mesh() {
	
}
bool DebugMeshes::can_add_debug_ray() {
	
}
MeshInstance3d DebugMeshes::spawn_colldier_debug_mesh(CollisionShape3d collider, float time) {
	
}
MeshInstance3d DebugMeshes::spawn_recolored_debug_mesh(Mesh mesh, Color color, Transform3d transform, float time) {
	
}
MeshInstance3d DebugMeshes::spawn_recolored_colldier_debug_mesh(CollisionShape3d collider, Color color, float time) {
	
}
void DebugMeshes::spawn_debug_mesh_child(CollisionShape3d collider, bool interp) {
	
}
void DebugMeshes::_bind_methods(){
ClassDB::bind_static_method("DebugMeshes", D_METHOD("add_debug_boxmesh", "transform", "time", "custom_extents"), &DebugMeshes::add_debug_boxmesh);
ClassDB::bind_static_method("DebugMeshes", D_METHOD("spawn_debug_raycast_mesh", "raycast", "time"), &DebugMeshes::spawn_debug_raycast_mesh);
ClassDB::bind_static_method("DebugMeshes", D_METHOD("draw_line", "start", "end", "lifetime", "color"), &DebugMeshes::draw_line);
ClassDB::bind_static_method("DebugMeshes", D_METHOD("spawn_debug_mesh", "mesh", "transform", "time"), &DebugMeshes::spawn_debug_mesh);
ClassDB::bind_static_method("DebugMeshes", D_METHOD("can_add_debug_mesh"), &DebugMeshes::can_add_debug_mesh);
ClassDB::bind_static_method("DebugMeshes", D_METHOD("can_add_debug_ray"), &DebugMeshes::can_add_debug_ray);
ClassDB::bind_static_method("DebugMeshes", D_METHOD("spawn_colldier_debug_mesh", "collider", "time"), &DebugMeshes::spawn_colldier_debug_mesh);
ClassDB::bind_static_method("DebugMeshes", D_METHOD("spawn_recolored_debug_mesh", "mesh", "color", "transform", "time"), &DebugMeshes::spawn_recolored_debug_mesh);
ClassDB::bind_static_method("DebugMeshes", D_METHOD("spawn_recolored_colldier_debug_mesh", "collider", "color", "time"), &DebugMeshes::spawn_recolored_colldier_debug_mesh);
ClassDB::bind_static_method("DebugMeshes", D_METHOD("spawn_debug_mesh_child", "collider", "interp"), &DebugMeshes::spawn_debug_mesh_child);
}