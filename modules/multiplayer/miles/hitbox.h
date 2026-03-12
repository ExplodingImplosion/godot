#include "collider_component.h"
#include "collision.h"
#include "hitbox.h"

class Hitbox: public StaticBody3D {
GDCLASS(Hitbox, StaticBody3D);
public:
static Dictionary hitbox_owners;
void _ready();
void on_owner_exit_tree(Node node_owner);
static CollisionShape3D get_parent_collider_component(CollisionObject3D collider);
static Dictionary get_hitbox_owners();
static void set_hitbox_owners(Dictionary p_hitbox_owners);
static void _bind_methods();
Hitbox();~Hitbox();
};
