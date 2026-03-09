
class HistorySaver: public Node {
GDCLASS(HistorySaver, Node);
public:
Array recent_frames;
RefCounted history;
Node3d level;
int recent_frame_idx;
void _init(Node3d mp_level);
void _exit_tree();
void setup_replay();
void _physics_process(float _delta);
void serialize_frame();
void add_current_frame_to_history();
RefCounted get_recent_frame(int offset);
RefCounted get_frame(int frame_num);
RefCounted get_frame_clamped(int frame_num);
void add_recent_frame(RefCounted frame);
Array get_recent_frames();
Array set_recent_frames(Array recent_frames);
RefCounted get_history();
RefCounted set_history(RefCounted history);
Node3d get_level();
Node3d set_level(Node3d level);
int get_recent_frame_idx();
int set_recent_frame_idx(int recent_frame_idx);
};
