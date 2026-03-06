#include collider_component.h
#include debug_meshes.h

class ColliderComponent: public CollisionShape3D {
GDCLASS(ColliderComponent, CollisionShape3D);
public:
CollisionObject3d object;
void _ready();
void _exit_tree();
};
