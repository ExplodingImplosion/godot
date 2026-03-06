#include collider_component.h
#include collision.h
#include hitbox.h

class Hitbox: public StaticBody3D {
GDCLASS(Hitbox, StaticBody3D);
public:
void _ready();
void on_owner_exit_tree(Node node_owner);
static CollisionShape3d get_parent_collider_component(CollisionObject3d collider);
};
