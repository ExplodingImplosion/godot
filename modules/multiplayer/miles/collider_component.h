#include "collider_component".h
#include "debug_meshes".h

class ColliderComponent: public CollisionShape3D {
GDCLASS(ColliderComponent, CollisionShape3D);
public:
static Dictionary component_list;
CollisionObject3D object;
void _ready();
void _exit_tree();
static Dictionary get_component_list();
static void set_component_list(Dictionary p_component_list);
CollisionObject3D get_object();
void set_object(CollisionObject3D p_object);
static void _bind_methods();
ColliderComponent();~ColliderComponent();
};
