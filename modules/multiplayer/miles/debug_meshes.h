// #include "core/object/ref_counted.h"
// #include "scene/resources/mesh.h"
#include "scene/resources/3d/primitive_meshes.h"
#include "scene/3d/mesh_instance_3d.h"
#include "scene/3d/physics/ray_cast_3d.h"
#include "scene/3d/physics/collision_shape_3d.h"
#include "settings.h"

class DebugMeshes: public RefCounted {
    GDCLASS(DebugMeshes, RefCounted);
    public:
        static Ref<StandardMaterial3D> raycast_debug_mesh;
        static Ref<StandardMaterial3D> raycast_colliding_debug_mesh;
        static Ref<ArrayMesh> impact_mesh;
        const Color DEFAULT_DEBUG_COLLISION_COLOR = Color(0.0, 0.6, 0.702, 0.4196);
        const Color DEFAULT_DEBUG_COLLISION_VERTEX_COLOR = Color(0.0, 0.6, 0.698, 0.0235);
        static void add_debug_boxmesh(Transform3D transform, float time, Vector3 custom_extents);
        static MeshInstance3D* spawn_debug_raycast_mesh(RayCast3D* raycast, float time);
        static MeshInstance3D* draw_line(Vector3 start, Vector3 end, float lifetime, Color color);
        static MeshInstance3D* spawn_debug_mesh(Ref<Mesh>mesh, Transform3D transform, float time);
        static bool can_add_debug_mesh();
        static bool can_add_debug_ray();
        static MeshInstance3D* spawn_colldier_debug_mesh(CollisionShape3D* collider, float time);
        static MeshInstance3D* spawn_recolored_debug_mesh(Ref<Mesh>mesh, Color color, Transform3D transform, float time);
        static MeshInstance3D* spawn_recolored_colldier_debug_mesh(CollisionShape3D* collider, Color color, float time);
        static void spawn_debug_mesh_child(CollisionShape3D* collider, bool interp);
        static Ref<StandardMaterial3D> get_raycast_debug_mesh();
        static void set_raycast_debug_mesh(Ref<StandardMaterial3D> p_raycast_debug_mesh);
        static Ref<StandardMaterial3D> get_raycast_colliding_debug_mesh();
        static void set_raycast_colliding_debug_mesh(StandardMaterial3D* p_raycast_colliding_debug_mesh);
        static Ref<ArrayMesh> get_impact_mesh();
        static void set_impact_mesh(Ref<ArrayMesh> p_impact_mesh);
        static void _bind_methods();
        // DebugMeshes();~DebugMeshes();
};
