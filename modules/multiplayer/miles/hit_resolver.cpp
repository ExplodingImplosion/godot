#include "hit_resolver.h"
bool HitResolver::is_valid_hit_resolution_subject(Node node) {
	
}
void HitResolver::_init(Node3d mp_level) {
	
}
void HitResolver::_exit_tree() {
	
}
void HitResolver::_physics_process(float _delta) {
	
}
void HitResolver::resolve_hits() {
	
}
void HitResolver::request_hit(int player_id, Node requester, Callable callable, Array bounding_boxes, bool subtick) {
	
}
Node3d HitResolver::get_mp_level() {
	return mp_level;
}
void HitResolver::set_mp_level(Node3d p_mp_level) {
	mp_level = p_mp_level;
}
Array HitResolver::get_hit_requests() {
	return hit_requests;
}
void HitResolver::set_hit_requests(Array p_hit_requests) {
	hit_requests = p_hit_requests;
}
Dictionary HitResolver::get_hit_map() {
	return hit_map;
}
void HitResolver::set_hit_map(Dictionary p_hit_map) {
	hit_map = p_hit_map;
}
void HitResolver::_bind_methods(){
ClassDB::bind_static_method("HitResolver", D_METHOD("is_valid_hit_resolution_subject", "node"), &HitResolver::is_valid_hit_resolution_subject);
ClassDB::bind_method(D_METHOD("_init", "mp_level"), &HitResolver::_init);
ClassDB::bind_method(D_METHOD("_exit_tree"), &HitResolver::_exit_tree);
ClassDB::bind_method(D_METHOD("_physics_process", "_delta"), &HitResolver::_physics_process);
ClassDB::bind_method(D_METHOD("resolve_hits"), &HitResolver::resolve_hits);
ClassDB::bind_method(D_METHOD("request_hit", "player_id", "requester", "callable", "bounding_boxes", "subtick"), &HitResolver::request_hit);
ClassDB::bind_method(D_METHOD("set_mp_level", "value"), &HitResolver::set_mp_level);
ClassDB::bind_method(D_METHOD("get_mp_level"), &HitResolver::get_mp_level);
ADD_PROPERTY(PropertyInfo(Variant::OBJECT, "mp_level"), "set_mp_level", "get_mp_level"); // unfinished and u should prolly change this
ClassDB::bind_method(D_METHOD("set_hit_requests", "value"), &HitResolver::set_hit_requests);
ClassDB::bind_method(D_METHOD("get_hit_requests"), &HitResolver::get_hit_requests);
ADD_PROPERTY(PropertyInfo(Variant::ARRAY, "hit_requests", PropertyHint(31), "RefCounted", 4096), "set_hit_requests", "get_hit_requests"); // unfinished and u should prolly change this
ClassDB::bind_method(D_METHOD("set_hit_map", "value"), &HitResolver::set_hit_map);
ClassDB::bind_method(D_METHOD("get_hit_map"), &HitResolver::get_hit_map);
ADD_PROPERTY(PropertyInfo(Variant::DICTIONARY, "hit_map", PropertyHint(38), "int;RefCounted", 4096), "set_hit_map", "get_hit_map"); // unfinished and u should prolly change this
BIND_ENUM_CONSTANT(SINGLETONS);
BIND_ENUM_CONSTANT(REGULAR);
BIND_ENUM_CONSTANT(BOUNDING_BOX);
BIND_ENUM_CONSTANT(SERIALIZER);
BIND_ENUM_CONSTANT(HIT_RESOLVER);
BIND_ENUM_CONSTANT(HISTORY_SAVER);
BIND_ENUM_CONSTANT(PERF_OVERLAY);

}