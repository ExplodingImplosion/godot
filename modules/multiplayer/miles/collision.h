
class Collision: public RefCounted {
GDCLASS(Collision, RefCounted);
public:
enum LayerIndex {
WORLD = 0,
PLAYER_COLLISION = 1,
DAMAGE = 2,
KNOCKBACK = 3,
INTERACTION = 4,
AIM_ASSIST = 5,
NETWORK = 6,
PROPS = 7,
PLAYERS = 8,
HITBOX = 9,
};
enum Layer {
WORLD = 1,
PLAYER_COLLISION = 2,
DAMAGE = 4,
KNOCKBACK = 8,
INTERACTION = 16,
AIM_ASSIST = 32,
NETWORK = 64,
PROPS = 128,
PLAYERS = 256,
HITBOX = 512,
};
static bool is_in_layer(int layers, int layer);
static void scale_shape(Shape3d shape, float scale);
static Vector3 get_shape_extents(Shape3d shape);
static Vector3 get_center_of_mass(CollisionObject3d object);
};
VARIANT_ENUM_CAST(Collision::LayerIndex);
VARIANT_ENUM_CAST(Collision::Layer);
