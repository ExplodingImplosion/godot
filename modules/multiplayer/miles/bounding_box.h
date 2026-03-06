#include network_bounding_box_component.h
#include collision.h
#include collider_component.h
#include hit_resolver.h
#include debug_meshes.h

class BoundingBox: public StaticBody3D {
GDCLASS(BoundingBox, StaticBody3D);
public:
MeshInstance3d mesh;
Array states;
int state_idx;
int num_states;
CollisionShape3d collider;
BoxShape3d shape;
void _init();
void _ready();
void fill_states();
void _exit_tree();
void tick_state(What the fuuuuck lmao aabb);
void _physics_process(float _delta);
static bool can_show_hitreg();
static Array get_raycast_intersections(RayCast3d raycast, Array ignore_owners);
static Array get_ray_intersection_intersections(World3d world, PhysicsRayQueryParameters3d ray_intersection);
static void add_debug_mesh(StaticBody3d box);
static void on_debug_mesh_removed(MeshInstance3d mesh, int frame);
static Array get_shapecast_intersections(ShapeCast3d shapecast, bool disable_after, Array ignore_owners);
static Array get_characterbody_intersections(CharacterBody3d characterbody, float move_delta, Array ignore_owners);
static Array get_area_intersections(Area3d area);
};
