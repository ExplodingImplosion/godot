
class HistorySaver: public Node {
GDCLASS(HistorySaver, Node);
public:
Array recent_frames;
RefCounted history;
Node3D level;
int recent_frame_idx;
void _init(Node3D mp_level);
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
void set_recent_frames(Array p_recent_frames);
RefCounted get_history();
void set_history(RefCounted p_history);
Node3D get_level();
void set_level(Node3D p_level);
int get_recent_frame_idx();
void set_recent_frame_idx(int p_recent_frame_idx);
static void _bind_methods();
HistorySaver();~HistorySaver();
};
