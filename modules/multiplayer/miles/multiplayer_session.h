#include client.h
#include player.h
#include network.h
#include multiplayer_session.h
#include quack_multiplayer.h
#include history_saver.h
#include thread_utils.h
#include emitter.h

class MultiplayerSession: public RefCounted {
GDCLASS(MultiplayerSession, RefCounted);
public:
static void send_states_to_clients(Node history);
static void reset();
static bool client_is_ready(int id);
static RefCounted add_client(int id, int num_players);
static RefCounted add_local_client(int id, int num_players);
static RefCounted add_dummy_client(int id);
static void mark_client_ready(int id);
static void remove_client(int id);
static PackedInt32Array get_ready_clients();
static bool are_clients_friendly(int cid1, int cid2);
static void tick(Node history_saver);
};
