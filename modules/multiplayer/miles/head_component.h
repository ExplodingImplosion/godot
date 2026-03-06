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
};
