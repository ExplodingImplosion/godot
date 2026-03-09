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
MeshInstance3d get_mesh();
MeshInstance3d set_mesh(MeshInstance3d p_mesh);
Array get_states();
Array set_states(Array p_states);
int get_state_idx();
int set_state_idx(int p_state_idx);
int get_num_states();
int set_num_states(int p_num_states);
CollisionShape3d get_collider();
CollisionShape3d set_collider(CollisionShape3d p_collider);
BoxShape3d get_shape();
BoxShape3d set_shape(BoxShape3d p_shape);
};
