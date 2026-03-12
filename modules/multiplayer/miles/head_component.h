#include "player_character.h"
#include "head_component.h"

class HeadComponent: public Node3D {
GDCLASS(HeadComponent, Node3D);
public:
static Dictionary component_list;
CharacterBody3D player;
Camera3D camera;
RemoteTransform3D transformer;
Callable stick_aim_func;
Callable release_mouse_aim;
Callable release_stick_aim;
const float MIN_VERTICAL_ANGLE = -1.57077887350238;
const float MAX_VERTICAL_ANGLE = 1.57077887350238;
void _ready();
void _physics_process(float delta);
void apply_physics_interp_by_locality();
void _exit_tree();
void take_mouse_control();
void take_stick_control(RefCounted stick);
void release_mouse_control();
void release_stick_control();
void aim(Vector2 direction);
void _process(float delta);
static Dictionary get_component_list();
static void set_component_list(Dictionary p_component_list);
CharacterBody3D get_player();
void set_player(CharacterBody3D p_player);
Camera3D get_camera();
void set_camera(Camera3D p_camera);
RemoteTransform3D get_transformer();
void set_transformer(RemoteTransform3D p_transformer);
Callable get_stick_aim_func();
void set_stick_aim_func(Callable p_stick_aim_func);
Callable get_release_mouse_aim();
void set_release_mouse_aim(Callable p_release_mouse_aim);
Callable get_release_stick_aim();
void set_release_stick_aim(Callable p_release_stick_aim);
static void _bind_methods();
HeadComponent();~HeadComponent();
};
