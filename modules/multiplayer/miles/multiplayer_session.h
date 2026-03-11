#include "client".h
#include "player".h
#include "network".h
#include "multiplayer_session".h
#include "quack_multiplayer".h
#include "history_saver".h
#include "thread_utils".h
#include "emitter".h

class MultiplayerSession: public RefCounted {
GDCLASS(MultiplayerSession, RefCounted);
public:
static Dictionary clients;
static Dictionary players;
static RefCounted local_client;
static int max_players;
static int max_spectators;
static RefCounted emitter;
static Signal client_added;
static Signal player_added;
static Signal client_readied;
static Signal player_readied;
static Signal client_removed;
static Signal player_removed;
static int frame_num;
static PackedInt32Array ready_clients;
static bool ready_clients_cache_valid;
static bool predicting;
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
static Dictionary get_clients();
static void set_clients(Dictionary p_clients);
static Dictionary get_players();
static void set_players(Dictionary p_players);
static RefCounted get_local_client();
static void set_local_client(RefCounted p_local_client);
static int get_max_players();
static void set_max_players(int p_max_players);
static int get_max_spectators();
static void set_max_spectators(int p_max_spectators);
static RefCounted get_emitter();
static void set_emitter(RefCounted p_emitter);
static Signal get_client_added();
static void set_client_added(Signal p_client_added);
static Signal get_player_added();
static void set_player_added(Signal p_player_added);
static Signal get_client_readied();
static void set_client_readied(Signal p_client_readied);
static Signal get_player_readied();
static void set_player_readied(Signal p_player_readied);
static Signal get_client_removed();
static void set_client_removed(Signal p_client_removed);
static Signal get_player_removed();
static void set_player_removed(Signal p_player_removed);
static int get_frame_num();
static void set_frame_num(int p_frame_num);
static PackedInt32Array get_ready_clients();
static void set_ready_clients(PackedInt32Array p_ready_clients);
static bool get_ready_clients_cache_valid();
static void set_ready_clients_cache_valid(bool p_ready_clients_cache_valid);
static bool get_predicting();
static void set_predicting(bool p_predicting);
static void _bind_methods();
MultiplayerSession();~MultiplayerSession();
};
