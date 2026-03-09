#include serializer.h
#include quack_multiplayer.h
#include multiplayer_level.h
#include stream_peer_bit_buffer.h
#include network_packet.h
#include multiplayer_session.h
#include network.h
#include thread_utils.h
#include replay.h
#include serialized_node_collection.h
#include bounding_box.h
#include recent_frame.h
#include hit_resolver.h
#include console_commands.h
#include owner_id.h
#include team.h
#include history_saver.h

class MultiplayerLevel: public Node3D {
GDCLASS(MultiplayerLevel, Node3D);
public:
Node history_saver;
enum PhysicsPriority {
SINGLETONS = -1,
REGULAR = 0,
BOUNDING_BOX = 1,
SERIALIZER = 2,
HIT_RESOLVER = 3,
HISTORY_SAVER = 4,
PERF_OVERLAY = 5,
};
void _init();
void _physics_process(float _delta);
void _ready();
void remove_client(int id);
void on_notified_ready(int id);
void on_node_spawned(Node serializer);
void on_node_deleted(Node serializer);
void _exit_tree();
Node get_history_saver();
Node set_history_saver(Node history_saver);
};
VARIANT_ENUM_CAST(MultiplayerLevel::PhysicsPriority);
