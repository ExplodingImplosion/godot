#include owner_id.h
StringName get_group_name() {
	
}
void assign_group() {
	
}
void reassign_group() {
	
}
void _ready() {
	
}
void _exit_tree() {
	
}
void propagate_to(Node node) {
	
}
static void add_node_owner(Node node, int id) {
	
}
static Node get_node_owner(Node node) {
	
}
static bool has(Node node) {
	
}
static bool node_is_owned_by(Node node, int id) {
	
}
static bool node_is_in_owner_group(Node node, int id) {
	
}
static bool nodes_share_owner(Node node1, Node node2) {
	
}
static Array get_nodes_owned_by(int id) {
	
}
static int get_node_owner_id(Node node) {
	
}
static RefCounted get_node_client_owner(Node node) {
	
}
static RefCounted get_node_player_owner(Node node) {
	
}
RefCounted get_player_owner() {
	
}
void OwnerId::_bind_methods(){
ClassDB::bind_method(D_METHOD("get_group_name"), &OwnerId::get_group_name);
ClassDB::bind_method(D_METHOD("assign_group"), &OwnerId::assign_group);
ClassDB::bind_method(D_METHOD("reassign_group"), &OwnerId::reassign_group);
ClassDB::bind_method(D_METHOD("_ready"), &OwnerId::_ready);
ClassDB::bind_method(D_METHOD("_exit_tree"), &OwnerId::_exit_tree);
ClassDB::bind_method(D_METHOD("propagate_to", "node"), &OwnerId::propagate_to);
ClassDB::bind_method(D_METHOD("add_node_owner", "node", "id"), &OwnerId::add_node_owner);
ClassDB::bind_method(D_METHOD("get_node_owner", "node"), &OwnerId::get_node_owner);
ClassDB::bind_method(D_METHOD("has", "node"), &OwnerId::has);
ClassDB::bind_method(D_METHOD("node_is_owned_by", "node", "id"), &OwnerId::node_is_owned_by);
ClassDB::bind_method(D_METHOD("node_is_in_owner_group", "node", "id"), &OwnerId::node_is_in_owner_group);
ClassDB::bind_method(D_METHOD("nodes_share_owner", "node1", "node2"), &OwnerId::nodes_share_owner);
ClassDB::bind_method(D_METHOD("get_nodes_owned_by", "id"), &OwnerId::get_nodes_owned_by);
ClassDB::bind_method(D_METHOD("get_node_owner_id", "node"), &OwnerId::get_node_owner_id);
ClassDB::bind_method(D_METHOD("get_node_client_owner", "node"), &OwnerId::get_node_client_owner);
ClassDB::bind_method(D_METHOD("get_node_player_owner", "node"), &OwnerId::get_node_player_owner);
ClassDB::bind_method(D_METHOD("get_player_owner"), &OwnerId::get_player_owner);
ADD_PROPERTY(PropertyInfo(Variant::INT, "owner_id"))),); // unfinished and u should prolly change this
ADD_PROPERTY(PropertyInfo(Variant::STRING_NAME, "group_name"))),); // unfinished and u should prolly change this
ADD_PROPERTY(PropertyInfo(Variant::OBJECT, "parent"))),); // unfinished and u should prolly change this
ADD_SIGNAL(MethodInfo("owner_changed", ));
}