#include "multiplayer_session.h"
MultiplayerSession::MultiplayerSession(){
	
}
MultiplayerSession::~MultiplayerSession(){
	
}
void MultiplayerSession::send_states_to_clients(Node history) {
	
}
void MultiplayerSession::reset() {
	
}
bool MultiplayerSession::client_is_ready(int id) {
	
}
RefCounted MultiplayerSession::add_client(int id, int num_players) {
	
}
RefCounted MultiplayerSession::add_local_client(int id, int num_players) {
	
}
RefCounted MultiplayerSession::add_dummy_client(int id) {
	
}
void MultiplayerSession::mark_client_ready(int id) {
	
}
void MultiplayerSession::remove_client(int id) {
	
}
PackedInt32Array MultiplayerSession::get_ready_clients() {
	
}
bool MultiplayerSession::are_clients_friendly(int cid1, int cid2) {
	
}
void MultiplayerSession::tick(Node history_saver) {
	
}
static Dictionary MultiplayerSession::get_clients() {
	return clients;
}
static void MultiplayerSession::set_clients(Dictionary p_clients) {
	clients = p_clients;
}
static Dictionary MultiplayerSession::get_players() {
	return players;
}
static void MultiplayerSession::set_players(Dictionary p_players) {
	players = p_players;
}
static RefCounted MultiplayerSession::get_local_client() {
	return local_client;
}
static void MultiplayerSession::set_local_client(RefCounted p_local_client) {
	local_client = p_local_client;
}
static int MultiplayerSession::get_max_players() {
	return max_players;
}
static void MultiplayerSession::set_max_players(int p_max_players) {
	max_players = p_max_players;
}
static int MultiplayerSession::get_max_spectators() {
	return max_spectators;
}
static void MultiplayerSession::set_max_spectators(int p_max_spectators) {
	max_spectators = p_max_spectators;
}
static RefCounted MultiplayerSession::get_emitter() {
	return emitter;
}
static void MultiplayerSession::set_emitter(RefCounted p_emitter) {
	emitter = p_emitter;
}
static Signal MultiplayerSession::get_client_added() {
	return client_added;
}
static void MultiplayerSession::set_client_added(Signal p_client_added) {
	client_added = p_client_added;
}
static Signal MultiplayerSession::get_player_added() {
	return player_added;
}
static void MultiplayerSession::set_player_added(Signal p_player_added) {
	player_added = p_player_added;
}
static Signal MultiplayerSession::get_client_readied() {
	return client_readied;
}
static void MultiplayerSession::set_client_readied(Signal p_client_readied) {
	client_readied = p_client_readied;
}
static Signal MultiplayerSession::get_player_readied() {
	return player_readied;
}
static void MultiplayerSession::set_player_readied(Signal p_player_readied) {
	player_readied = p_player_readied;
}
static Signal MultiplayerSession::get_client_removed() {
	return client_removed;
}
static void MultiplayerSession::set_client_removed(Signal p_client_removed) {
	client_removed = p_client_removed;
}
static Signal MultiplayerSession::get_player_removed() {
	return player_removed;
}
static void MultiplayerSession::set_player_removed(Signal p_player_removed) {
	player_removed = p_player_removed;
}
static int MultiplayerSession::get_frame_num() {
	return frame_num;
}
static void MultiplayerSession::set_frame_num(int p_frame_num) {
	frame_num = p_frame_num;
}
static PackedInt32Array MultiplayerSession::get_ready_clients() {
	return ready_clients;
}
static void MultiplayerSession::set_ready_clients(PackedInt32Array p_ready_clients) {
	ready_clients = p_ready_clients;
}
static bool MultiplayerSession::get_ready_clients_cache_valid() {
	return ready_clients_cache_valid;
}
static void MultiplayerSession::set_ready_clients_cache_valid(bool p_ready_clients_cache_valid) {
	ready_clients_cache_valid = p_ready_clients_cache_valid;
}
static bool MultiplayerSession::get_predicting() {
	return predicting;
}
static void MultiplayerSession::set_predicting(bool p_predicting) {
	predicting = p_predicting;
}
void MultiplayerSession::_bind_methods(){
ClassDB::bind_static_method("MultiplayerSession", D_METHOD("send_states_to_clients", "history"), &MultiplayerSession::send_states_to_clients);
ClassDB::bind_static_method("MultiplayerSession", D_METHOD("reset"), &MultiplayerSession::reset);
ClassDB::bind_static_method("MultiplayerSession", D_METHOD("client_is_ready", "id"), &MultiplayerSession::client_is_ready);
ClassDB::bind_static_method("MultiplayerSession", D_METHOD("add_client", "id", "num_players"), &MultiplayerSession::add_client, DEFVAL(1));
ClassDB::bind_static_method("MultiplayerSession", D_METHOD("add_local_client", "id", "num_players"), &MultiplayerSession::add_local_client, DEFVAL(1));
ClassDB::bind_static_method("MultiplayerSession", D_METHOD("add_dummy_client", "id"), &MultiplayerSession::add_dummy_client);
ClassDB::bind_static_method("MultiplayerSession", D_METHOD("mark_client_ready", "id"), &MultiplayerSession::mark_client_ready);
ClassDB::bind_static_method("MultiplayerSession", D_METHOD("remove_client", "id"), &MultiplayerSession::remove_client);
ClassDB::bind_static_method("MultiplayerSession", D_METHOD("get_ready_clients"), &MultiplayerSession::get_ready_clients);
ClassDB::bind_static_method("MultiplayerSession", D_METHOD("are_clients_friendly", "cid1", "cid2"), &MultiplayerSession::are_clients_friendly);
ClassDB::bind_static_method("MultiplayerSession", D_METHOD("tick", "history_saver"), &MultiplayerSession::tick);
ClassDB::bind_method(D_METHOD("set_clients", "value"), &MultiplayerSession::set_clients);
ClassDB::bind_method(D_METHOD("get_clients"), &MultiplayerSession::get_clients);
ADD_PROPERTY(PropertyInfo(Variant::DICTIONARY, "clients", PropertyHint(38), "int;RefCounted", 4096), "set_clients", "get_clients"); // unfinished and u should prolly change this
ClassDB::bind_method(D_METHOD("set_players", "value"), &MultiplayerSession::set_players);
ClassDB::bind_method(D_METHOD("get_players"), &MultiplayerSession::get_players);
ADD_PROPERTY(PropertyInfo(Variant::DICTIONARY, "players", PropertyHint(38), "int;RefCounted", 4096), "set_players", "get_players"); // unfinished and u should prolly change this
ClassDB::bind_method(D_METHOD("set_local_client", "value"), &MultiplayerSession::set_local_client);
ClassDB::bind_method(D_METHOD("get_local_client"), &MultiplayerSession::get_local_client);
ADD_PROPERTY(PropertyInfo(Variant::OBJECT, "local_client"), "set_local_client", "get_local_client"); // unfinished and u should prolly change this
ClassDB::bind_method(D_METHOD("set_max_players", "value"), &MultiplayerSession::set_max_players);
ClassDB::bind_method(D_METHOD("get_max_players"), &MultiplayerSession::get_max_players);
ADD_PROPERTY(PropertyInfo(Variant::INT, "max_players"), "set_max_players", "get_max_players"); // unfinished and u should prolly change this
ClassDB::bind_method(D_METHOD("set_max_spectators", "value"), &MultiplayerSession::set_max_spectators);
ClassDB::bind_method(D_METHOD("get_max_spectators"), &MultiplayerSession::get_max_spectators);
ADD_PROPERTY(PropertyInfo(Variant::INT, "max_spectators"), "set_max_spectators", "get_max_spectators"); // unfinished and u should prolly change this
ClassDB::bind_method(D_METHOD("set_emitter", "value"), &MultiplayerSession::set_emitter);
ClassDB::bind_method(D_METHOD("get_emitter"), &MultiplayerSession::get_emitter);
ADD_PROPERTY(PropertyInfo(Variant::OBJECT, "emitter"), "set_emitter", "get_emitter"); // unfinished and u should prolly change this
ClassDB::bind_method(D_METHOD("set_client_added", "value"), &MultiplayerSession::set_client_added);
ClassDB::bind_method(D_METHOD("get_client_added"), &MultiplayerSession::get_client_added);
ADD_PROPERTY(PropertyInfo(Variant::SIGNAL, "client_added"), "set_client_added", "get_client_added"); // unfinished and u should prolly change this
ClassDB::bind_method(D_METHOD("set_player_added", "value"), &MultiplayerSession::set_player_added);
ClassDB::bind_method(D_METHOD("get_player_added"), &MultiplayerSession::get_player_added);
ADD_PROPERTY(PropertyInfo(Variant::SIGNAL, "player_added"), "set_player_added", "get_player_added"); // unfinished and u should prolly change this
ClassDB::bind_method(D_METHOD("set_client_readied", "value"), &MultiplayerSession::set_client_readied);
ClassDB::bind_method(D_METHOD("get_client_readied"), &MultiplayerSession::get_client_readied);
ADD_PROPERTY(PropertyInfo(Variant::SIGNAL, "client_readied"), "set_client_readied", "get_client_readied"); // unfinished and u should prolly change this
ClassDB::bind_method(D_METHOD("set_player_readied", "value"), &MultiplayerSession::set_player_readied);
ClassDB::bind_method(D_METHOD("get_player_readied"), &MultiplayerSession::get_player_readied);
ADD_PROPERTY(PropertyInfo(Variant::SIGNAL, "player_readied"), "set_player_readied", "get_player_readied"); // unfinished and u should prolly change this
ClassDB::bind_method(D_METHOD("set_client_removed", "value"), &MultiplayerSession::set_client_removed);
ClassDB::bind_method(D_METHOD("get_client_removed"), &MultiplayerSession::get_client_removed);
ADD_PROPERTY(PropertyInfo(Variant::SIGNAL, "client_removed"), "set_client_removed", "get_client_removed"); // unfinished and u should prolly change this
ClassDB::bind_method(D_METHOD("set_player_removed", "value"), &MultiplayerSession::set_player_removed);
ClassDB::bind_method(D_METHOD("get_player_removed"), &MultiplayerSession::get_player_removed);
ADD_PROPERTY(PropertyInfo(Variant::SIGNAL, "player_removed"), "set_player_removed", "get_player_removed"); // unfinished and u should prolly change this
ClassDB::bind_method(D_METHOD("set_frame_num", "value"), &MultiplayerSession::set_frame_num);
ClassDB::bind_method(D_METHOD("get_frame_num"), &MultiplayerSession::get_frame_num);
ADD_PROPERTY(PropertyInfo(Variant::INT, "frame_num"), "set_frame_num", "get_frame_num"); // unfinished and u should prolly change this
ClassDB::bind_method(D_METHOD("set_ready_clients", "value"), &MultiplayerSession::set_ready_clients);
ClassDB::bind_method(D_METHOD("get_ready_clients"), &MultiplayerSession::get_ready_clients);
ADD_PROPERTY(PropertyInfo(Variant::PACKED_INT_32_ARRAY, "ready_clients"), "set_ready_clients", "get_ready_clients"); // unfinished and u should prolly change this
ClassDB::bind_method(D_METHOD("set_ready_clients_cache_valid", "value"), &MultiplayerSession::set_ready_clients_cache_valid);
ClassDB::bind_method(D_METHOD("get_ready_clients_cache_valid"), &MultiplayerSession::get_ready_clients_cache_valid);
ADD_PROPERTY(PropertyInfo(Variant::BOOL, "ready_clients_cache_valid"), "set_ready_clients_cache_valid", "get_ready_clients_cache_valid"); // unfinished and u should prolly change this
ClassDB::bind_method(D_METHOD("set_predicting", "value"), &MultiplayerSession::set_predicting);
ClassDB::bind_method(D_METHOD("get_predicting"), &MultiplayerSession::get_predicting);
ADD_PROPERTY(PropertyInfo(Variant::BOOL, "predicting"), "set_predicting", "get_predicting"); // unfinished and u should prolly change this
}