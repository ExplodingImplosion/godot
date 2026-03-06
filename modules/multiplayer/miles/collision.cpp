#include collision.h
static bool is_in_layer(int layers, int layer) {
	
}
static void scale_shape(Shape3d shape, float scale) {
	
}
static Vector3 get_shape_extents(Shape3d shape) {
	
}
static Vector3 get_center_of_mass(CollisionObject3d object) {
	
}
void Collision::_bind_methods(){
ClassDB::bind_method(D_METHOD("is_in_layer", "layers", "layer"), &Collision::is_in_layer);
ClassDB::bind_method(D_METHOD("scale_shape", "shape", "scale"), &Collision::scale_shape);
ClassDB::bind_method(D_METHOD("get_shape_extents", "shape"), &Collision::get_shape_extents);
ClassDB::bind_method(D_METHOD("get_center_of_mass", "object"), &Collision::get_center_of_mass);
BIND_ENUM_CONSTANT(WORLD);
BIND_ENUM_CONSTANT(PLAYER_COLLISION);
BIND_ENUM_CONSTANT(DAMAGE);
BIND_ENUM_CONSTANT(KNOCKBACK);
BIND_ENUM_CONSTANT(INTERACTION);
BIND_ENUM_CONSTANT(AIM_ASSIST);
BIND_ENUM_CONSTANT(NETWORK);
BIND_ENUM_CONSTANT(PROPS);
BIND_ENUM_CONSTANT(PLAYERS);
BIND_ENUM_CONSTANT(HITBOX);

BIND_ENUM_CONSTANT(WORLD);
BIND_ENUM_CONSTANT(PLAYER_COLLISION);
BIND_ENUM_CONSTANT(DAMAGE);
BIND_ENUM_CONSTANT(KNOCKBACK);
BIND_ENUM_CONSTANT(INTERACTION);
BIND_ENUM_CONSTANT(AIM_ASSIST);
BIND_ENUM_CONSTANT(NETWORK);
BIND_ENUM_CONSTANT(PROPS);
BIND_ENUM_CONSTANT(PLAYERS);
BIND_ENUM_CONSTANT(HITBOX);

}