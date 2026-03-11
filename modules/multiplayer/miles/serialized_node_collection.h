#include "scene/main/node.h"
#include "stream_peer_bit_buffer.h"
// #include "core/io/stream_peer.h"

class SerializedNodeCollection: public RefCounted {
    GDCLASS(SerializedNodeCollection, RefCounted);
    public:
        int num_nodes;
        int uid;
        int scene_id;
        int owner_id;
        int team;
        int frame_created;
        int frame_deleted;
        int visibility;
        Array node_configs;
        Array property_lists;
        Array prev_property_lists;
        Node spawn(Node* scene);
        bool was_deleted();
        virtual String _to_string() override;
        void update_interpolation(Array new_property_lists);
        RefCounted duplicate();
        static RefCounted create_fresh(int uid, int scene_id, int owner_id, int team, int frame_created, Array node_configs);
        void _init(Array property_lists, int uid, int scene_id, int owner_id, int team, int frame_created, Array node_configs, bool duplicate);
        void encode_spawn(StreamPeerBuffer buffer, int vis_type);
        void decode_spawn(StreamPeerBuffer buffer, int vis_type);
        void encode_delta(RefCounted prev, StreamPeerBuffer buffer, int vis_type);
        void decode_delta(StreamPeerBuffer buffer, int vis_type);
        Array get_node_configs();
        Array set_node_configs(Array p_node_configs);
        Array get_property_lists();
        Array set_property_lists(Array p_property_lists);
        Array get_prev_property_lists();
        Array set_prev_property_lists(Array p_prev_property_lists);
        int get_num_nodes();
        int set_num_nodes(int p_num_nodes);
        int get_uid();
        int set_uid(int p_uid);
        int get_scene_id();
        int set_scene_id(int p_scene_id);
        int get_owner_id();
        int set_owner_id(int p_owner_id);
        int get_team();
        int set_team(int p_team);
        int get_frame_created();
        int set_frame_created(int p_frame_created);
        int get_frame_deleted();
        int set_frame_deleted(int p_frame_deleted);
        int get_visibility();
        int set_visibility(int p_visibility);
        static void _bind_methods();
};
