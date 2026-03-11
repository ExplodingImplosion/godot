#include owner_id.h
#include serializer.h
#include sesh.h
#include client.h
#include player.h

class OwnerId: public Node {
GDCLASS(OwnerId, Node);
public:
int owner_id;
StringName group_name;
Node parent;
StringName get_group_name();
void assign_group();
void reassign_group();
void _ready();
void _exit_tree();
void propagate_to(Node node);
static void add_node_owner(Node node, int id);
static Node get_node_owner(Node node);
static bool has(Node node);
static bool node_is_owned_by(Node node, int id);
static bool node_is_in_owner_group(Node node, int id);
static bool nodes_share_owner(Node node1, Node node2);
static Array get_nodes_owned_by(int id);
static int get_node_owner_id(Node node);
static RefCounted get_node_client_owner(Node node);
static RefCounted get_node_player_owner(Node node);
RefCounted get_player_owner();
int get_owner_id();
void set_owner_id(int p_owner_id);
StringName get_group_name();
void set_group_name(StringName p_group_name);
Node get_parent();
void set_parent(Node p_parent);
static void _bind_methods();
};
