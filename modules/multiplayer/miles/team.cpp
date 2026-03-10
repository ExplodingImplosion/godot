#include team.h
Array Team::get_nodes_with_teams() {
	
}
StringName Team::get_group_name() {
	
}
void Team::assign_group() {
	
}
void Team::reassign_group() {
	
}
void Team::_ready() {
	
}
void Team::_exit_tree() {
	
}
void Team::propagate_to(Node node) {
	
}
void Team::add_node_team(Node node, int team) {
	
}
Node Team::get_node_team_component(Node node) {
	
}
void Team::try_propagate_to(Node from, Node to) {
	
}
bool Team::has(Node node) {
	
}
bool Team::node_is_on_team(Node node, int team) {
	
}
bool Team::node_is_in_team_group(Node node, int team) {
	
}
Array Team::get_nodes_on_team(int team) {
	
}
bool Team::nodes_are_on_same_team(Node node1, Node node2) {
	
}
bool Team::all_nodes_are_on_same_team(Array array) {
	
}
bool Team::teams_are_friendly(int team1, int team2) {
	
}
int Team::get_node_team_id(Node node) {
	
}
int Team::get_team_id() {
	
}
int Team::set_team_id(int p_team_id) {
	
}
StringName Team::get_group_name() {
	
}
StringName Team::set_group_name(StringName p_group_name) {
	
}
Node Team::get_parent() {
	
}
Node Team::set_parent(Node p_parent) {
	
}
void Team::_bind_methods(){
ClassDB::bind_static_method("Team", D_METHOD("get_nodes_with_teams"), &Team::get_nodes_with_teams);
ClassDB::bind_method(D_METHOD("get_group_name"), &Team::get_group_name);
ClassDB::bind_method(D_METHOD("assign_group"), &Team::assign_group);
ClassDB::bind_method(D_METHOD("reassign_group"), &Team::reassign_group);
ClassDB::bind_method(D_METHOD("_ready"), &Team::_ready);
ClassDB::bind_method(D_METHOD("_exit_tree"), &Team::_exit_tree);
ClassDB::bind_method(D_METHOD("propagate_to", "node"), &Team::propagate_to);
ClassDB::bind_static_method("Team", D_METHOD("add_node_team", "node", "team"), &Team::add_node_team);
ClassDB::bind_static_method("Team", D_METHOD("get_node_team_component", "node"), &Team::get_node_team_component);
ClassDB::bind_static_method("Team", D_METHOD("try_propagate_to", "from", "to"), &Team::try_propagate_to);
ClassDB::bind_static_method("Team", D_METHOD("has", "node"), &Team::has);
ClassDB::bind_static_method("Team", D_METHOD("node_is_on_team", "node", "team"), &Team::node_is_on_team);
ClassDB::bind_static_method("Team", D_METHOD("node_is_in_team_group", "node", "team"), &Team::node_is_in_team_group);
ClassDB::bind_static_method("Team", D_METHOD("get_nodes_on_team", "team"), &Team::get_nodes_on_team);
ClassDB::bind_static_method("Team", D_METHOD("nodes_are_on_same_team", "node1", "node2"), &Team::nodes_are_on_same_team);
ClassDB::bind_static_method("Team", D_METHOD("all_nodes_are_on_same_team", "array"), &Team::all_nodes_are_on_same_team);
ClassDB::bind_static_method("Team", D_METHOD("teams_are_friendly", "team1", "team2"), &Team::teams_are_friendly);
ClassDB::bind_static_method("Team", D_METHOD("get_node_team_id", "node"), &Team::get_node_team_id);
ClassDB::bind_method(D_METHOD("set_team_id", "value"), &Team::set_team_id);
ClassDB::bind_method(D_METHOD("get_team_id"), &Team::get_team_id);
ADD_PROPERTY(PropertyInfo(Variant::INT, "team_id", 6, "
Always Hostile,
Team 1,
Team 2,
", 4102), "set_team_id," "get_team_id"); // unfinished and u should prolly change this
ClassDB::bind_method(D_METHOD("set_group_name", "value"), &Team::set_group_name);
ClassDB::bind_method(D_METHOD("get_group_name"), &Team::get_group_name);
ADD_PROPERTY(PropertyInfo(Variant::STRING_NAME, "group_name"), "set_group_name," "get_group_name"); // unfinished and u should prolly change this
ClassDB::bind_method(D_METHOD("set_parent", "value"), &Team::set_parent);
ClassDB::bind_method(D_METHOD("get_parent"), &Team::get_parent);
ADD_PROPERTY(PropertyInfo(Variant::OBJECT, "parent"), "set_parent," "get_parent"); // unfinished and u should prolly change this
}