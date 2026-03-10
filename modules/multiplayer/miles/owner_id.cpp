#include owner_id.h
StringName OwnerId::get_group_name() {
	
}
void OwnerId::assign_group() {
	
}
void OwnerId::reassign_group() {
	
}
void OwnerId::_ready() {
	
}
void OwnerId::_exit_tree() {
	
}
void OwnerId::propagate_to(Node node) {
	
}
void OwnerId::add_node_owner(Node node, int id) {
	
}
Node OwnerId::get_node_owner(Node node) {
	
}
bool OwnerId::has(Node node) {
	
}
bool OwnerId::node_is_owned_by(Node node, int id) {
	
}
bool OwnerId::node_is_in_owner_group(Node node, int id) {
	
}
bool OwnerId::nodes_share_owner(Node node1, Node node2) {
	
}
Array OwnerId::get_nodes_owned_by(int id) {
	
}
int OwnerId::get_node_owner_id(Node node) {
	
}
RefCounted OwnerId::get_node_client_owner(Node node) {
	
}
RefCounted OwnerId::get_node_player_owner(Node node) {
	
}
RefCounted OwnerId::get_player_owner() {
	
}
int OwnerId::get_owner_id() {
	
}
int OwnerId::set_owner_id(int p_owner_id) {
	
}
StringName OwnerId::get_group_name() {
	
}
StringName OwnerId::set_group_name(StringName p_group_name) {
	
}
Node OwnerId::get_parent() {
	
}
Node OwnerId::set_parent(Node p_parent) {
	
}
void OwnerId::_bind_methods(){
ClassDB::bind_method(D_METHOD("get_group_name"), &OwnerId::get_group_name);
ClassDB::bind_method(D_METHOD("assign_group"), &OwnerId::assign_group);
ClassDB::bind_method(D_METHOD("reassign_group"), &OwnerId::reassign_group);
ClassDB::bind_method(D_METHOD("_ready"), &OwnerId::_ready);
ClassDB::bind_method(D_METHOD("_exit_tree"), &OwnerId::_exit_tree);
ClassDB::bind_method(D_METHOD("propagate_to", "node"), &OwnerId::propagate_to);
ClassDB::bind_static_method("OwnerId", D_METHOD("add_node_owner", "node", "id"), &OwnerId::add_node_owner);
ClassDB::bind_static_method("OwnerId", D_METHOD("get_node_owner", "node"), &OwnerId::get_node_owner);
ClassDB::bind_static_method("OwnerId", D_METHOD("has", "node"), &OwnerId::has);
ClassDB::bind_static_method("OwnerId", D_METHOD("node_is_owned_by", "node", "id"), &OwnerId::node_is_owned_by);
ClassDB::bind_static_method("OwnerId", D_METHOD("node_is_in_owner_group", "node", "id"), &OwnerId::node_is_in_owner_group);
ClassDB::bind_static_method("OwnerId", D_METHOD("nodes_share_owner", "node1", "node2"), &OwnerId::nodes_share_owner);
ClassDB::bind_static_method("OwnerId", D_METHOD("get_nodes_owned_by", "id"), &OwnerId::get_nodes_owned_by);
ClassDB::bind_static_method("OwnerId", D_METHOD("get_node_owner_id", "node"), &OwnerId::get_node_owner_id);
ClassDB::bind_static_method("OwnerId", D_METHOD("get_node_client_owner", "node"), &OwnerId::get_node_client_owner);
ClassDB::bind_static_method("OwnerId", D_METHOD("get_node_player_owner", "node"), &OwnerId::get_node_player_owner);
ClassDB::bind_method(D_METHOD("get_player_owner"), &OwnerId::get_player_owner);
ClassDB::bind_method(D_METHOD("set_owner_id", "value"), &OwnerId::set_owner_id);
ClassDB::bind_method(D_METHOD("get_owner_id"), &OwnerId::get_owner_id);
ADD_PROPERTY(PropertyInfo(Variant::INT, "owner_id"), "set_owner_id," "get_owner_id"); // unfinished and u should prolly change this
ClassDB::bind_method(D_METHOD("set_group_name", "value"), &OwnerId::set_group_name);
ClassDB::bind_method(D_METHOD("get_group_name"), &OwnerId::get_group_name);
ADD_PROPERTY(PropertyInfo(Variant::STRING_NAME, "group_name"), "set_group_name," "get_group_name"); // unfinished and u should prolly change this
ClassDB::bind_method(D_METHOD("set_parent", "value"), &OwnerId::set_parent);
ClassDB::bind_method(D_METHOD("get_parent"), &OwnerId::get_parent);
ADD_PROPERTY(PropertyInfo(Variant::OBJECT, "parent"), "set_parent," "get_parent"); // unfinished and u should prolly change this
ADD_SIGNAL(MethodInfo("owner_changed", ));
}