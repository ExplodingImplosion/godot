#include team_component.h

class Team: public Node {
GDCLASS(Team, Node);
public:
int team_id;
StringName group_name;
Node parent;
const int FLAG_ALWAYS_HOSTILE = 1;
static Array get_nodes_with_teams();
StringName get_group_name();
void assign_group();
void reassign_group();
void _ready();
void _exit_tree();
void propagate_to(Node node);
static void add_node_team(Node node, int team);
static Node get_node_team_component(Node node);
static void try_propagate_to(Node from, Node to);
static bool has(Node node);
static bool node_is_on_team(Node node, int team);
static bool node_is_in_team_group(Node node, int team);
static Array get_nodes_on_team(int team);
static bool nodes_are_on_same_team(Node node1, Node node2);
static bool all_nodes_are_on_same_team(Array array);
static bool teams_are_friendly(int team1, int team2);
static int get_node_team_id(Node node);
int get_team_id();
void set_team_id(int p_team_id);
StringName get_group_name();
void set_group_name(StringName p_group_name);
Node get_parent();
void set_parent(Node p_parent);
static void _bind_methods();
};
