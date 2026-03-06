
class SerializedNodeCollection: public RefCounted {
GDCLASS(SerializedNodeCollection, RefCounted);
public:
Array node_configs;
Array property_lists;
Array prev_property_lists;
int num_nodes;
int uid;
int scene_id;
int owner_id;
int team;
int frame_created;
int frame_deleted;
int visibility;
Node spawn(Node scene);
bool was_deleted();
String _to_string();
void update_interpolation(Array new_property_lists);
RefCounted duplicate();
static RefCounted create_fresh(int uid, int scene_id, int owner_id, int team, int frame_created, Array node_configs);
void _init(Array property_lists, int uid, int scene_id, int owner_id, int team, int frame_created, Array node_configs, bool duplicate);
void encode_spawn(StreamPeerBuffer buffer, int vis_type);
void decode_spawn(StreamPeerBuffer buffer, int vis_type);
void encode_delta(RefCounted prev, StreamPeerBuffer buffer, int vis_type);
void decode_delta(StreamPeerBuffer buffer, int vis_type);
};
