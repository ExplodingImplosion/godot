
class HitRequest: public RefCounted {
GDCLASS(HitRequest, RefCounted);
public:
int player_id;
Array requesters;
Array callables;
Dictionary bounding_boxes;
bool subtick;
void merge(Node requester, Callable callable, Array bounding_boxes, bool subtick);
void _init(int player_id, Node requester, Callable callable, Array bounding_boxes, bool subtick);
void resolve(Node3d level);
static void hitreg_debug_boxes(bool show_hitreg, Node serializer, Color color, float time);
int get_player_id();
void set_player_id(int p_player_id);
Array get_requesters();
void set_requesters(Array p_requesters);
Array get_callables();
void set_callables(Array p_callables);
Dictionary get_bounding_boxes();
void set_bounding_boxes(Dictionary p_bounding_boxes);
bool get_subtick();
void set_subtick(bool p_subtick);
static void _bind_methods();
};
