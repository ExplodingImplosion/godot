
class Stupid4Pt5Mesh: public MeshInstance3D {
GDCLASS(Stupid4Pt5Mesh, MeshInstance3D);
public:
CollisionShape3D parent_collider;
void _init(CollisionShape3D collider, bool interp);
void _physics_process(float _delta);
void update_transform();
CollisionShape3D get_parent_collider();
void set_parent_collider(CollisionShape3D p_parent_collider);
static void _bind_methods();
Stupid4Pt5Mesh();~Stupid4Pt5Mesh();
};
