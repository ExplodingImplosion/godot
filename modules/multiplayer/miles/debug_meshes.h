#include stupid_4_pt_5_mesh.h

class DebugMeshes: public RefCounted {
GDCLASS(DebugMeshes, RefCounted);
public:
const Color DEFAULT_DEBUG_COLLISION_COLOR = (0.0, 0.6, 0.702, 0.4196);
const Color DEFAULT_DEBUG_COLLISION_VERTEX_COLOR = (0.0, 0.6, 0.698, 0.0235);
static void add_debug_boxmesh(Transform3d transform, float time, Vector3 custom_extents);
static MeshInstance3d spawn_debug_raycast_mesh(RayCast3d raycast, float time);
static MeshInstance3d draw_line(Vector3 start, Vector3 end, float lifetime, Color color);
static MeshInstance3d spawn_debug_mesh(Mesh mesh, Transform3d transform, float time);
static bool can_add_debug_mesh();
static bool can_add_debug_ray();
static MeshInstance3d spawn_colldier_debug_mesh(CollisionShape3d collider, float time);
static MeshInstance3d spawn_recolored_debug_mesh(Mesh mesh, Color color, Transform3d transform, float time);
static MeshInstance3d spawn_recolored_colldier_debug_mesh(CollisionShape3d collider, Color color, float time);
static void spawn_debug_mesh_child(CollisionShape3d collider, bool interp);
static void _bind_methods();
};
