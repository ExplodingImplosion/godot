
class Stupid4Pt5Mesh: public MeshInstance3D {
GDCLASS(Stupid4Pt5Mesh, MeshInstance3D);
public:
CollisionShape3d parent_collider;
void _init(CollisionShape3d collider, bool interp);
void _physics_process(float _delta);
void update_transform();
};
