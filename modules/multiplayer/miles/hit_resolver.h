#include network.h
#include hit_resolver.h
#include hitbox.h
#include debug_meshes.h
#include multiplayer_level.h
#include multiplayer_session.h
#include bounding_box.h
#include serializer.h
#include owner_id.h
#include player.h
#include head_component.h
#include player_character.h
#include hit_request.h

class HitResolver: public Node {
GDCLASS(HitResolver, Node);
public:
Node3d mp_level;
Array hit_requests;
Dictionary hit_map;
enum PhysicsPriority {
SINGLETONS = -1,
REGULAR = 0,
BOUNDING_BOX = 1,
SERIALIZER = 2,
HIT_RESOLVER = 3,
HISTORY_SAVER = 4,
PERF_OVERLAY = 5,
};
static bool is_valid_hit_resolution_subject(Node node);
void _init(Node3d mp_level);
void _exit_tree();
void _physics_process(float _delta);
void resolve_hits();
void request_hit(int player_id, Node requester, Callable callable, Array bounding_boxes, bool subtick);
Node3d get_mp_level();
Node3d set_mp_level(Node3d p_mp_level);
Array get_hit_requests();
Array set_hit_requests(Array p_hit_requests);
Dictionary get_hit_map();
Dictionary set_hit_map(Dictionary p_hit_map);
};
VARIANT_ENUM_CAST(HitResolver::PhysicsPriority);
