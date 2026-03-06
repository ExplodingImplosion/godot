#include multiplayer_session.h
static void send_states_to_clients(Node history) {
	
}
static void reset() {
	
}
static bool client_is_ready(int id) {
	
}
static RefCounted add_client(int id, int num_players) {
	
}
static RefCounted add_local_client(int id, int num_players) {
	
}
static RefCounted add_dummy_client(int id) {
	
}
static void mark_client_ready(int id) {
	
}
static void remove_client(int id) {
	
}
static PackedInt32Array get_ready_clients() {
	
}
static bool are_clients_friendly(int cid1, int cid2) {
	
}
static void tick(Node history_saver) {
	
}
void MultiplayerSession::_bind_methods(){
ClassDB::bind_method(D_METHOD("send_states_to_clients", "history"), &MultiplayerSession::send_states_to_clients);
ClassDB::bind_method(D_METHOD("reset"), &MultiplayerSession::reset);
ClassDB::bind_method(D_METHOD("client_is_ready", "id"), &MultiplayerSession::client_is_ready);
ClassDB::bind_method(D_METHOD("add_client", "id", "num_players"), &MultiplayerSession::add_client);
ClassDB::bind_method(D_METHOD("add_local_client", "id", "num_players"), &MultiplayerSession::add_local_client);
ClassDB::bind_method(D_METHOD("add_dummy_client", "id"), &MultiplayerSession::add_dummy_client);
ClassDB::bind_method(D_METHOD("mark_client_ready", "id"), &MultiplayerSession::mark_client_ready);
ClassDB::bind_method(D_METHOD("remove_client", "id"), &MultiplayerSession::remove_client);
ClassDB::bind_method(D_METHOD("get_ready_clients"), &MultiplayerSession::get_ready_clients);
ClassDB::bind_method(D_METHOD("are_clients_friendly", "cid1", "cid2"), &MultiplayerSession::are_clients_friendly);
ClassDB::bind_method(D_METHOD("tick", "history_saver"), &MultiplayerSession::tick);
}