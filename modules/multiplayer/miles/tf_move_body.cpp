#include "tf_move_body.h"
#include "core/io/marshalls.h"
#include "core/math/math_defs.h"
#include "core/variant/variant_utility.h"

const inline Vector3 apply_friction(bool grounded, float GROUND_DECCEL, float DECCEL_RAMP_UP_SPEED, float delta, Vector3 vel) {
	if (!grounded) {
        return vel;
    }
    float speed = vel.length();
    float deccel = GROUND_DECCEL * delta;
    speed = VariantUtilityFunctions::move_toward(speed,0.,deccel*VariantUtilityFunctions::maxf(speed*.01,DECCEL_RAMP_UP_SPEED));
    return vel.normalized() * speed;
}

TFMoveBody::TFMoveBody() {
    JUMP_FORCE = 5.50545;
    GROUND_DECCEL = 400.;
    DECCEL_RAMP_UP_SPEED = .01905;
    TERMINAL_VELOCITY = 66.675;
    GRAVITY = 15.24;
    GROUND_SPEED = 4.572;
    GROUND_ACCEL = 45.72;
    AIR_SPEED = 1.42875;
    AIR_ACCEL = 20.;
    MAX_SLIDES = 5;
    MAX_SLOPE_ANGLE = .795;
    SURF_FRAC = .02;
    MIN_SURF_ANGLE = .01;
    CAN_HOLD_FOR_JUMP = false;
    can_hold_for_jump = 0.;
    grounded = false;
    just_jumped = false;
    just_landed = false;
    rocket_jumping = false;
}

void TFMoveBody::move(float delta, Vector2 input_dir) {
    Vector3 vel = get_velocity();
	just_jumped = false;
    if (just_landed) {
        vel = apply_friction(grounded,GROUND_DECCEL,DECCEL_RAMP_UP_SPEED,delta,vel);
    }

    // Jumping.
    if (grounded && tryna_jump) {
        grounded = false;
        just_jumped = true;
        vel.y += JUMP_FORCE;
    }

    vel = apply_friction(grounded,GROUND_DECCEL,DECCEL_RAMP_UP_SPEED,delta,vel);

    Vector2 planar_velocity = Vector2(vel.x,vel.z);
    Vector3 remainder;
    Vector3 normal;
    // Breaks changing up_direction, but up_direction is private so fuck you i guess
    const Vector3 up_direction = Vector3::UP;// = up_direction;
    // Vector3 adjusted_normal;

    const float speed = planar_velocity.dot(input_dir);
    float target_speed;
    float accel;
    float add_speed;
    float slope_angle;

    if (grounded) {
        target_speed = GROUND_SPEED;
        accel = GROUND_ACCEL;
    }
    else {
        target_speed = AIR_SPEED;
        accel = AIR_ACCEL;
        vel.y = VariantUtilityFunctions::move_toward(vel.y,-TERMINAL_VELOCITY,GRAVITY*delta);
    }

    add_speed = VariantUtilityFunctions::clampf(target_speed - speed, 0., accel * delta);
    planar_velocity += input_dir * add_speed;
    vel.x = planar_velocity.x;
    vel.z = planar_velocity.y;

    // Handle collisions
    just_landed = false;
    
    PhysicsServer3D::MotionResult result;
    // Vector3 motion = (!normal.is_zero_approx())? remainder.slide(normal) : vel * delta;
    for (int i = 0; i < MAX_SLIDES; i++) {
        PhysicsServer3D::MotionParameters parameters(get_global_transform(), (!normal.is_zero_approx())? remainder.slide(normal) : vel * delta);
        parameters.max_collisions = 1;
        parameters.recovery_as_collision = false;

        if (!move_and_collide(parameters, result)) {
            // Didn't collide and moved fully through the world in a single step.
            break;
        }

        remainder = result.remainder;
        normal = result.collisions[0].normal;

        // Apparently this is how surfing happens
        if (!grounded) {
            // This is only here because it was there in the gdscript stuff
            // adjusted_normal = normal;
            vel = vel.slide(normal); // vel = vel.slide(adjusted_normal);
            slope_angle = normal.angle_to(up_direction);
            if (slope_angle < VariantUtilityFunctions::maxf(MAX_SLOPE_ANGLE-vel.length() * SURF_FRAC,MIN_SURF_ANGLE)) {
                grounded = true;
                just_landed = true;
                vel.y = 0.;
            }
        }
        else {
            vel = vel.slide(normal);
        }
    }

    if (grounded) {
        
        rocket_jumping = false;
        
        PhysicsServer3D::MotionParameters parameters(get_global_transform(), Vector3::DOWN * .25, 0.);
        parameters.max_collisions = 1;
        parameters.recovery_as_collision = false;

        // collision = _move(Vector3::DOWN * .25, true, 0.);
        if (move_and_collide(parameters,result,true)) {
            if (vel.y <= 0.) {
                parameters.motion = Vector3::DOWN;
                move_and_collide(parameters,result);
            }
        }

        // collision = _move(Vector3::DOWN*.1,true, 0.);
        parameters.from = get_global_transform();
        parameters.motion = Vector3::DOWN*.1;
        if (move_and_collide(parameters,result,true)){
            slope_angle = result.collisions[0].normal.angle_to(up_direction);
            grounded = slope_angle < MAX_SLOPE_ANGLE;
        }
        else {
            grounded = false;
        }
    }

    set_velocity(vel);
}

float TFMoveBody::get_JUMP_FORCE() {
	return JUMP_FORCE;
}
void TFMoveBody::set_JUMP_FORCE(float p_JUMP_FORCE) {
	JUMP_FORCE = p_JUMP_FORCE;
}
float TFMoveBody::get_GROUND_DECCEL() {
	return GROUND_DECCEL;
}
void TFMoveBody::set_GROUND_DECCEL(float p_GROUND_DECCEL) {
	GROUND_DECCEL = p_GROUND_DECCEL;
}
float TFMoveBody::get_DECCEL_RAMP_UP_SPEED() {
	return DECCEL_RAMP_UP_SPEED;
}
void TFMoveBody::set_DECCEL_RAMP_UP_SPEED(float p_DECCEL_RAMP_UP_SPEED) {
	DECCEL_RAMP_UP_SPEED = p_DECCEL_RAMP_UP_SPEED;
}
float TFMoveBody::get_TERMINAL_VELOCITY() {
	return TERMINAL_VELOCITY;
}
void TFMoveBody::set_TERMINAL_VELOCITY(float p_TERMINAL_VELOCITY) {
	TERMINAL_VELOCITY = p_TERMINAL_VELOCITY;
}
float TFMoveBody::get_GRAVITY() {
	return GRAVITY;
}
void TFMoveBody::set_GRAVITY(float p_GRAVITY) {
	GRAVITY = p_GRAVITY;
}
float TFMoveBody::get_GROUND_SPEED() {
	return GROUND_SPEED;
}
void TFMoveBody::set_GROUND_SPEED(float p_GROUND_SPEED) {
	GROUND_SPEED = p_GROUND_SPEED;
}
float TFMoveBody::get_GROUND_ACCEL() {
	return GROUND_ACCEL;
}
void TFMoveBody::set_GROUND_ACCEL(float p_GROUND_ACCEL) {
	GROUND_ACCEL = p_GROUND_ACCEL;
}
float TFMoveBody::get_AIR_SPEED() {
	return AIR_SPEED;
}
void TFMoveBody::set_AIR_SPEED(float p_AIR_SPEED) {
	AIR_SPEED = p_AIR_SPEED;
}
float TFMoveBody::get_AIR_ACCEL() {
	return AIR_ACCEL;
}
void TFMoveBody::set_AIR_ACCEL(float p_AIR_ACCEL) {
	AIR_ACCEL = p_AIR_ACCEL;
}
int TFMoveBody::get_MAX_SLIDES() {
	return MAX_SLIDES;
}
void TFMoveBody::set_MAX_SLIDES(int p_MAX_SLIDES) {
	MAX_SLIDES = p_MAX_SLIDES;
}
float TFMoveBody::get_MAX_SLOPE_ANGLE() {
	return MAX_SLOPE_ANGLE;
}
void TFMoveBody::set_MAX_SLOPE_ANGLE(float p_MAX_SLOPE_ANGLE) {
	MAX_SLOPE_ANGLE = p_MAX_SLOPE_ANGLE;
}
float TFMoveBody::get_SURF_FRAC() {
	return SURF_FRAC;
}
void TFMoveBody::set_SURF_FRAC(float p_SURF_FRAC) {
	SURF_FRAC = p_SURF_FRAC;
}
float TFMoveBody::get_MIN_SURF_ANGLE() {
	return MIN_SURF_ANGLE;
}
void TFMoveBody::set_MIN_SURF_ANGLE(float p_MIN_SURF_ANGLE) {
	MIN_SURF_ANGLE = p_MIN_SURF_ANGLE;
}
bool TFMoveBody::get_CAN_HOLD_FOR_JUMP() {
	return CAN_HOLD_FOR_JUMP;
}
void TFMoveBody::set_CAN_HOLD_FOR_JUMP(bool p_CAN_HOLD_FOR_JUMP) {
	CAN_HOLD_FOR_JUMP = p_CAN_HOLD_FOR_JUMP;
}
float TFMoveBody::get_can_hold_for_jump() {
	return can_hold_for_jump;
}
void TFMoveBody::set_can_hold_for_jump(float p_can_hold_for_jump) {
	can_hold_for_jump = p_can_hold_for_jump;
}
bool TFMoveBody::get_grounded() {
	return grounded;
}
void TFMoveBody::set_grounded(bool p_grounded) {
	grounded = p_grounded;
}
bool TFMoveBody::get_just_jumped() {
	return just_jumped;
}
void TFMoveBody::set_just_jumped(bool p_just_jumped) {
	just_jumped = p_just_jumped;
}
bool TFMoveBody::get_just_landed() {
	return just_landed;
}
void TFMoveBody::set_just_landed(bool p_just_landed) {
	just_landed = p_just_landed;
}
bool TFMoveBody::get_rocket_jumping() {
	return rocket_jumping;
}
void TFMoveBody::set_rocket_jumping(bool p_rocket_jumping) {
	rocket_jumping = p_rocket_jumping;
}
bool TFMoveBody::get_tryna_jump() {
	return tryna_jump;
}
void TFMoveBody::set_tryna_jump(bool p_tryna_jump) {
	tryna_jump = p_tryna_jump;
}

void TFMoveBody::_bind_methods(){
ClassDB::bind_method(D_METHOD("move", "delta", "input_dir"), &TFMoveBody::move);
// ClassDB::bind_method(D_METHOD("set_player", "value"), &TFMoveBody::set_player);
// ClassDB::bind_method(D_METHOD("get_player"), &TFMoveBody::get_player);
// ADD_PROPERTY(PropertyInfo(Variant::OBJECT, "player", PROPERTY_HINT_NODE_TYPE, "", 6U, "CharacterBody3D"), "set_player", "get_player"); // unfinished and u should prolly change this
ClassDB::bind_method(D_METHOD("set_JUMP_FORCE", "value"), &TFMoveBody::set_JUMP_FORCE);
ClassDB::bind_method(D_METHOD("get_JUMP_FORCE"), &TFMoveBody::get_JUMP_FORCE);
ADD_PROPERTY(PropertyInfo(Variant::FLOAT, "JUMP_FORCE"), "set_JUMP_FORCE", "get_JUMP_FORCE"); // unfinished and u should prolly change this
ClassDB::bind_method(D_METHOD("set_GROUND_DECCEL", "value"), &TFMoveBody::set_GROUND_DECCEL);
ClassDB::bind_method(D_METHOD("get_GROUND_DECCEL"), &TFMoveBody::get_GROUND_DECCEL);
ADD_PROPERTY(PropertyInfo(Variant::FLOAT, "GROUND_DECCEL"), "set_GROUND_DECCEL", "get_GROUND_DECCEL"); // unfinished and u should prolly change this
ClassDB::bind_method(D_METHOD("set_DECCEL_RAMP_UP_SPEED", "value"), &TFMoveBody::set_DECCEL_RAMP_UP_SPEED);
ClassDB::bind_method(D_METHOD("get_DECCEL_RAMP_UP_SPEED"), &TFMoveBody::get_DECCEL_RAMP_UP_SPEED);
ADD_PROPERTY(PropertyInfo(Variant::FLOAT, "DECCEL_RAMP_UP_SPEED"), "set_DECCEL_RAMP_UP_SPEED", "get_DECCEL_RAMP_UP_SPEED"); // unfinished and u should prolly change this
ClassDB::bind_method(D_METHOD("set_TERMINAL_VELOCITY", "value"), &TFMoveBody::set_TERMINAL_VELOCITY);
ClassDB::bind_method(D_METHOD("get_TERMINAL_VELOCITY"), &TFMoveBody::get_TERMINAL_VELOCITY);
ADD_PROPERTY(PropertyInfo(Variant::FLOAT, "TERMINAL_VELOCITY"), "set_TERMINAL_VELOCITY", "get_TERMINAL_VELOCITY"); // unfinished and u should prolly change this
ClassDB::bind_method(D_METHOD("set_GRAVITY", "value"), &TFMoveBody::set_GRAVITY);
ClassDB::bind_method(D_METHOD("get_GRAVITY"), &TFMoveBody::get_GRAVITY);
ADD_PROPERTY(PropertyInfo(Variant::FLOAT, "GRAVITY"), "set_GRAVITY", "get_GRAVITY"); // unfinished and u should prolly change this
ClassDB::bind_method(D_METHOD("set_GROUND_SPEED", "value"), &TFMoveBody::set_GROUND_SPEED);
ClassDB::bind_method(D_METHOD("get_GROUND_SPEED"), &TFMoveBody::get_GROUND_SPEED);
ADD_PROPERTY(PropertyInfo(Variant::FLOAT, "GROUND_SPEED"), "set_GROUND_SPEED", "get_GROUND_SPEED"); // unfinished and u should prolly change this
ClassDB::bind_method(D_METHOD("set_GROUND_ACCEL", "value"), &TFMoveBody::set_GROUND_ACCEL);
ClassDB::bind_method(D_METHOD("get_GROUND_ACCEL"), &TFMoveBody::get_GROUND_ACCEL);
ADD_PROPERTY(PropertyInfo(Variant::FLOAT, "GROUND_ACCEL"), "set_GROUND_ACCEL", "get_GROUND_ACCEL"); // unfinished and u should prolly change this
ClassDB::bind_method(D_METHOD("set_AIR_SPEED", "value"), &TFMoveBody::set_AIR_SPEED);
ClassDB::bind_method(D_METHOD("get_AIR_SPEED"), &TFMoveBody::get_AIR_SPEED);
ADD_PROPERTY(PropertyInfo(Variant::FLOAT, "AIR_SPEED"), "set_AIR_SPEED", "get_AIR_SPEED"); // unfinished and u should prolly change this
ClassDB::bind_method(D_METHOD("set_AIR_ACCEL", "value"), &TFMoveBody::set_AIR_ACCEL);
ClassDB::bind_method(D_METHOD("get_AIR_ACCEL"), &TFMoveBody::get_AIR_ACCEL);
ADD_PROPERTY(PropertyInfo(Variant::FLOAT, "AIR_ACCEL"), "set_AIR_ACCEL", "get_AIR_ACCEL"); // unfinished and u should prolly change this
ClassDB::bind_method(D_METHOD("set_MAX_SLIDES", "value"), &TFMoveBody::set_MAX_SLIDES);
ClassDB::bind_method(D_METHOD("get_MAX_SLIDES"), &TFMoveBody::get_MAX_SLIDES);
ADD_PROPERTY(PropertyInfo(Variant::INT, "MAX_SLIDES"), "set_MAX_SLIDES", "get_MAX_SLIDES"); // unfinished and u should prolly change this
ClassDB::bind_method(D_METHOD("set_MAX_SLOPE_ANGLE", "value"), &TFMoveBody::set_MAX_SLOPE_ANGLE);
ClassDB::bind_method(D_METHOD("get_MAX_SLOPE_ANGLE"), &TFMoveBody::get_MAX_SLOPE_ANGLE);
ADD_PROPERTY(PropertyInfo(Variant::FLOAT, "MAX_SLOPE_ANGLE", PropertyHint(1), "0.0,90.0,0.001,radians", 4102), "set_MAX_SLOPE_ANGLE", "get_MAX_SLOPE_ANGLE"); // unfinished and u should prolly change this
ClassDB::bind_method(D_METHOD("set_SURF_FRAC", "value"), &TFMoveBody::set_SURF_FRAC);
ClassDB::bind_method(D_METHOD("get_SURF_FRAC"), &TFMoveBody::get_SURF_FRAC);
ADD_PROPERTY(PropertyInfo(Variant::FLOAT, "SURF_FRAC"), "set_SURF_FRAC", "get_SURF_FRAC"); // unfinished and u should prolly change this
ClassDB::bind_method(D_METHOD("set_MIN_SURF_ANGLE", "value"), &TFMoveBody::set_MIN_SURF_ANGLE);
ClassDB::bind_method(D_METHOD("get_MIN_SURF_ANGLE"), &TFMoveBody::get_MIN_SURF_ANGLE);
ADD_PROPERTY(PropertyInfo(Variant::FLOAT, "MIN_SURF_ANGLE"), "set_MIN_SURF_ANGLE", "get_MIN_SURF_ANGLE"); // unfinished and u should prolly change this
// ClassDB::bind_method(D_METHOD("set_CAN_HOLD_FOR_JUMP", "value"), &TFMoveBody::set_CAN_HOLD_FOR_JUMP);
// ClassDB::bind_method(D_METHOD("get_CAN_HOLD_FOR_JUMP"), &TFMoveBody::get_CAN_HOLD_FOR_JUMP);
// ADD_PROPERTY(PropertyInfo(Variant::BOOL, "CAN_HOLD_FOR_JUMP"), "set_CAN_HOLD_FOR_JUMP", "get_CAN_HOLD_FOR_JUMP"); // unfinished and u should prolly change this
ClassDB::bind_method(D_METHOD("set_can_hold_for_jump", "value"), &TFMoveBody::set_can_hold_for_jump);
ClassDB::bind_method(D_METHOD("get_can_hold_for_jump"), &TFMoveBody::get_can_hold_for_jump);
ADD_PROPERTY(PropertyInfo(Variant::FLOAT, "can_hold_for_jump"), "set_can_hold_for_jump", "get_can_hold_for_jump"); // unfinished and u should prolly change this
ClassDB::bind_method(D_METHOD("set_grounded", "value"), &TFMoveBody::set_grounded);
ClassDB::bind_method(D_METHOD("get_grounded"), &TFMoveBody::get_grounded);
ADD_PROPERTY(PropertyInfo(Variant::BOOL, "grounded"), "set_grounded", "get_grounded"); // unfinished and u should prolly change this
ClassDB::bind_method(D_METHOD("set_just_jumped", "value"), &TFMoveBody::set_just_jumped);
ClassDB::bind_method(D_METHOD("get_just_jumped"), &TFMoveBody::get_just_jumped);
ADD_PROPERTY(PropertyInfo(Variant::BOOL, "just_jumped"), "set_just_jumped", "get_just_jumped"); // unfinished and u should prolly change this
ClassDB::bind_method(D_METHOD("set_just_landed", "value"), &TFMoveBody::set_just_landed);
ClassDB::bind_method(D_METHOD("get_just_landed"), &TFMoveBody::get_just_landed);
ADD_PROPERTY(PropertyInfo(Variant::BOOL, "just_landed"), "set_just_landed", "get_just_landed"); // unfinished and u should prolly change this
ClassDB::bind_method(D_METHOD("set_rocket_jumping", "value"), &TFMoveBody::set_rocket_jumping);
ClassDB::bind_method(D_METHOD("get_rocket_jumping"), &TFMoveBody::get_rocket_jumping);
ADD_PROPERTY(PropertyInfo(Variant::BOOL, "rocket_jumping"), "set_rocket_jumping", "get_rocket_jumping"); // unfinished and u should prolly change this
ClassDB::bind_method(D_METHOD("set_tryna_jump", "value"), &TFMoveBody::set_tryna_jump);
ClassDB::bind_method(D_METHOD("get_tryna_jump"), &TFMoveBody::get_tryna_jump);
ADD_PROPERTY(PropertyInfo(Variant::BOOL, "tryna_jump"), "set_tryna_jump", "get_tryna_jump"); // unfinished and u should prolly change this
}