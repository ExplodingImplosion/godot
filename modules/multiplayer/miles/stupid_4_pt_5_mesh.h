
class Stupid4Pt5Mesh: public MeshInstance3D {
GDCLASS(Stupid4Pt5Mesh, MeshInstance3D);
public:
CollisionShape3d parent_collider;
void _init(CollisionShape3d collider, bool interp);
void _physics_process(float _delta);
void update_transform();
CollisionShape3d get_parent_collider();
CollisionShape3d set_parent_collider(CollisionShape3d p_parent_collider);
};
