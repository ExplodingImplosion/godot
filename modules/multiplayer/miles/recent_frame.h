#include recent_frame.h
#include multiplayer_session.h
#include serializer.h
#include serialized_node_collection.h
#include stream_peer_bit_buffer.h
#include fuckup.h
#include quack_multiplayer.h

class RecentFrame: public RefCounted {
GDCLASS(RecentFrame, RefCounted);
public:
int num;
Dictionary serializations;
void restore(Node scene);
void merge(RefCounted frame);
void _init(Array serialized_nodes, int frame_num);
PackedByteArray get_delta(RefCounted prev_frame, int receiver_id, int hostility_mask);
void decode_delta(PackedByteArray delta, int frame_num, int delta_frame_num);
};
