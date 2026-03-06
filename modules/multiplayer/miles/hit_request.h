
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
};
