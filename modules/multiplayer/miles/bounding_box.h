#include "network_bounding_box_component.h"
#include "collision.h"
#include "collider_component.h"
#include "hit_resolver.h"
#include "debug_meshes.h"

class BoundingBox: public StaticBody3D {
GDCLASS(BoundingBox, StaticBody3D);
public:
static Dictionary component_list;
static Dictionary bb_frames;
static Dictionary bb_meshes;
static Dictionary meshes;
MeshInstance3D mesh;
Array states;
int state_idx;
int num_states;
CollisionShape3D collider;
BoxShape3D shape;
void _init();
void _ready();
void fill_states();
void _exit_tree();
void tick_state(What the fuuuuck lmao aabb);
void _physics_process(float _delta);
static bool can_show_hitreg();
static Array get_raycast_intersections(RayCast3D raycast, Array ignore_owners);
static Array get_ray_intersection_intersections(World3D world, PhysicsRayQueryParameters3D ray_intersection);
static void add_debug_mesh(StaticBody3D box);
static void on_debug_mesh_removed(MeshInstance3D mesh, int frame);
static Array get_shapecast_intersections(ShapeCast3D shapecast, bool disable_after, Array ignore_owners);
static Array get_characterbody_intersections(CharacterBody3D characterbody, float move_delta, Array ignore_owners);
static Array get_area_intersections(Area3D area);
static Dictionary get_component_list();
static void set_component_list(Dictionary p_component_list);
static Dictionary get_bb_frames();
static void set_bb_frames(Dictionary p_bb_frames);
static Dictionary get_bb_meshes();
static void set_bb_meshes(Dictionary p_bb_meshes);
static Dictionary get_meshes();
static void set_meshes(Dictionary p_meshes);
MeshInstance3D get_mesh();
void set_mesh(MeshInstance3D p_mesh);
Array get_states();
void set_states(Array p_states);
int get_state_idx();
void set_state_idx(int p_state_idx);
int get_num_states();
void set_num_states(int p_num_states);
CollisionShape3D get_collider();
void set_collider(CollisionShape3D p_collider);
BoxShape3D get_shape();
void set_shape(BoxShape3D p_shape);
static void _bind_methods();
BoundingBox();~BoundingBox();
};
