#include "scene/3d/physics/collision_shape_3d.h"
#include "scene/3d/mesh_instance_3d.h"

class Stupid4Pt5Mesh: public MeshInstance3D {
    GDCLASS(Stupid4Pt5Mesh, MeshInstance3D);
    public:
        CollisionShape3D* parent_collider;
        void update_transform();
        void Stupid4Pt5Mesh::_notification(int what);
        // CollisionShape3D get_parent_collider();
        // void set_parent_collider(CollisionShape3D p_parent_collider);
        static void _bind_methods();
        static Stupid4Pt5Mesh* create(CollisionShape3D* p_collider, bool p_interp);
        Stupid4Pt5Mesh();
        // ~Stupid4Pt5Mesh();
};