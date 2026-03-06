#include team.h
static Array get_nodes_with_teams() {
	
}
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
static void add_node_team(Node node, int team) {
	
}
static Node get_node_team_component(Node node) {
	
}
static void try_propagate_to(Node from, Node to) {
	
}
static bool has(Node node) {
	
}
static bool node_is_on_team(Node node, int team) {
	
}
static bool node_is_in_team_group(Node node, int team) {
	
}
static Array get_nodes_on_team(int team) {
	
}
static bool nodes_are_on_same_team(Node node1, Node node2) {
	
}
static bool all_nodes_are_on_same_team(Array array) {
	
}
static bool teams_are_friendly(int team1, int team2) {
	
}
static int get_node_team_id(Node node) {
	
}
void Team::_bind_methods(){
ClassDB::bind_method(D_METHOD("get_nodes_with_teams"), &Team::get_nodes_with_teams);
ClassDB::bind_method(D_METHOD("get_group_name"), &Team::get_group_name);
ClassDB::bind_method(D_METHOD("assign_group"), &Team::assign_group);
ClassDB::bind_method(D_METHOD("reassign_group"), &Team::reassign_group);
ClassDB::bind_method(D_METHOD("_ready"), &Team::_ready);
ClassDB::bind_method(D_METHOD("_exit_tree"), &Team::_exit_tree);
ClassDB::bind_method(D_METHOD("propagate_to", "node"), &Team::propagate_to);
ClassDB::bind_method(D_METHOD("add_node_team", "node", "team"), &Team::add_node_team);
ClassDB::bind_method(D_METHOD("get_node_team_component", "node"), &Team::get_node_team_component);
ClassDB::bind_method(D_METHOD("try_propagate_to", "from", "to"), &Team::try_propagate_to);
ClassDB::bind_method(D_METHOD("has", "node"), &Team::has);
ClassDB::bind_method(D_METHOD("node_is_on_team", "node", "team"), &Team::node_is_on_team);
ClassDB::bind_method(D_METHOD("node_is_in_team_group", "node", "team"), &Team::node_is_in_team_group);
ClassDB::bind_method(D_METHOD("get_nodes_on_team", "team"), &Team::get_nodes_on_team);
ClassDB::bind_method(D_METHOD("nodes_are_on_same_team", "node1", "node2"), &Team::nodes_are_on_same_team);
ClassDB::bind_method(D_METHOD("all_nodes_are_on_same_team", "array"), &Team::all_nodes_are_on_same_team);
ClassDB::bind_method(D_METHOD("teams_are_friendly", "team1", "team2"), &Team::teams_are_friendly);
ClassDB::bind_method(D_METHOD("get_node_team_id", "node"), &Team::get_node_team_id);
ADD_PROPERTY(PropertyInfo(Variant::INT, "team_id", 6, "
Always Hostile,
Team 1,
Team 2,
", 4102))),); // unfinished and u should prolly change this
ADD_PROPERTY(PropertyInfo(Variant::STRING_NAME, "group_name"))),); // unfinished and u should prolly change this
ADD_PROPERTY(PropertyInfo(Variant::OBJECT, "parent"))),); // unfinished and u should prolly change this
}