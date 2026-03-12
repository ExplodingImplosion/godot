#include "stupid_4_pt_5_mesh.h"

class DebugMeshes: public RefCounted {
GDCLASS(DebugMeshes, RefCounted);
public:
static StandardMaterial3D raycast_debug_mesh;
static StandardMaterial3D raycast_colliding_debug_mesh;
static ArrayMesh impact_mesh;
const Color DEFAULT_DEBUG_COLLISION_COLOR = (0.0, 0.6, 0.702, 0.4196);
const Color DEFAULT_DEBUG_COLLISION_VERTEX_COLOR = (0.0, 0.6, 0.698, 0.0235);
static void add_debug_boxmesh(Transform3d transform, float time, Vector3 custom_extents);
static MeshInstance3D spawn_debug_raycast_mesh(RayCast3D raycast, float time);
static MeshInstance3D draw_line(Vector3 start, Vector3 end, float lifetime, Color color);
static MeshInstance3D spawn_debug_mesh(Mesh mesh, Transform3d transform, float time);
static bool can_add_debug_mesh();
static bool can_add_debug_ray();
static MeshInstance3D spawn_colldier_debug_mesh(CollisionShape3D collider, float time);
static MeshInstance3D spawn_recolored_debug_mesh(Mesh mesh, Color color, Transform3d transform, float time);
static MeshInstance3D spawn_recolored_colldier_debug_mesh(CollisionShape3D collider, Color color, float time);
static void spawn_debug_mesh_child(CollisionShape3D collider, bool interp);
static StandardMaterial3D get_raycast_debug_mesh();
static void set_raycast_debug_mesh(StandardMaterial3D p_raycast_debug_mesh);
static StandardMaterial3D get_raycast_colliding_debug_mesh();
static void set_raycast_colliding_debug_mesh(StandardMaterial3D p_raycast_colliding_debug_mesh);
static ArrayMesh get_impact_mesh();
static void set_impact_mesh(ArrayMesh p_impact_mesh);
static void _bind_methods();
DebugMeshes();~DebugMeshes();
};
