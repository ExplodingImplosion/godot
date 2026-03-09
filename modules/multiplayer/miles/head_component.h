#include player_character.h
#include head_component.h

class HeadComponent: public Node3D {
GDCLASS(HeadComponent, Node3D);
public:
CharacterBody3d player;
Camera3d camera;
RemoteTransform3d transformer;
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
CharacterBody3d get_player();
CharacterBody3d set_player(CharacterBody3d p_player);
Camera3d get_camera();
Camera3d set_camera(Camera3d p_camera);
RemoteTransform3d get_transformer();
RemoteTransform3d set_transformer(RemoteTransform3d p_transformer);
Callable get_stick_aim_func();
Callable set_stick_aim_func(Callable p_stick_aim_func);
Callable get_release_mouse_aim();
Callable set_release_mouse_aim(Callable p_release_mouse_aim);
Callable get_release_stick_aim();
Callable set_release_stick_aim(Callable p_release_stick_aim);
};
