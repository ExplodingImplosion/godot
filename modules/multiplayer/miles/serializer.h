#include quack_multiplayer.h
#include network.h
#include serializer.h
#include stream_peer_bit_buffer.h
#include owner_id.h
#include team.h
#include component_tracker.h
#include serialized_node_collection.h

class Serializer: public Node {
GDCLASS(Serializer, Node);
public:
Array serialization_properties;
Array nodes;
Dictionary test_dict;
float update_frequency;
float update_time_left;
bool updating;
int uid;
int scene_id;
bool has_serialized;
RefCounted serialized;
enum PhysicsPriority {
SINGLETONS = -1,
REGULAR = 0,
BOUNDING_BOX = 1,
SERIALIZER = 2,
HIT_RESOLVER = 3,
HISTORY_SAVER = 4,
PERF_OVERLAY = 5,
};
static int get_uid_by_node(Node node);
static Array get_serializers();
void increment_uid();
void clear_uid();
float get_update_weight();
void _physics_process(float delta);
void serialize_nodes();
bool should_serialize();
void _enter_tree();
void on_owner_exit_tree(Node node_owner);
void _ready();
bool nodes_are_valid();
void update_physical_properties(Array properties, float weight, bool notify_transform_changed);
void receive_update(Array properties);
void receive_update_interpolated(Array properties);
void receive_interpolation_update(Array properties);
void interpolate(Array current_properties, Array prev_properties);
void receive_instant_update(Array properties);
void decode_nodes(StreamPeerBuffer buffer);
void delta_decode_nodes(StreamPeerBuffer buffer);
void decode(StreamPeerBuffer buffer, int vis_type);
void decode_delta(StreamPeerBuffer buffer, int vis_type);
static RefCounted get_serialization_info(PackedScene scene, int scene_id, SceneState state);
};
VARIANT_ENUM_CAST(Serializer::PhysicsPriority);
