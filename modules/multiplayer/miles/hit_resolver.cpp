#include hit_resolver.h
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
	
}
Node3d HitResolver::set_mp_level(Node3d p_mp_level) {
	
}
Array HitResolver::get_hit_requests() {
	
}
Array HitResolver::set_hit_requests(Array p_hit_requests) {
	
}
Dictionary HitResolver::get_hit_map() {
	
}
Dictionary HitResolver::set_hit_map(Dictionary p_hit_map) {
	
}
void HitResolver::_bind_methods(){
ClassDB::bind_method(D_METHOD("is_valid_hit_resolution_subject", "node"), &HitResolver::is_valid_hit_resolution_subject);
ClassDB::bind_method(D_METHOD("_init", "mp_level"), &HitResolver::_init);
ClassDB::bind_method(D_METHOD("_exit_tree"), &HitResolver::_exit_tree);
ClassDB::bind_method(D_METHOD("_physics_process", "_delta"), &HitResolver::_physics_process);
ClassDB::bind_method(D_METHOD("resolve_hits"), &HitResolver::resolve_hits);
ClassDB::bind_method(D_METHOD("request_hit", "player_id", "requester", "callable", "bounding_boxes", "subtick"), &HitResolver::request_hit);
ADD_PROPERTY(PropertyInfo(Variant::OBJECT, "mp_level"), "get_mp_level," "set_mp_level"); // unfinished and u should prolly change this
ADD_PROPERTY(PropertyInfo(Variant::ARRAY, "hit_requests", 31, "RefCounted", 4096), "get_hit_requests," "set_hit_requests"); // unfinished and u should prolly change this
ADD_PROPERTY(PropertyInfo(Variant::DICTIONARY, "hit_map", 38, "int;RefCounted", 4096), "get_hit_map," "set_hit_map"); // unfinished and u should prolly change this
BIND_ENUM_CONSTANT(SINGLETONS);
BIND_ENUM_CONSTANT(REGULAR);
BIND_ENUM_CONSTANT(BOUNDING_BOX);
BIND_ENUM_CONSTANT(SERIALIZER);
BIND_ENUM_CONSTANT(HIT_RESOLVER);
BIND_ENUM_CONSTANT(HISTORY_SAVER);
BIND_ENUM_CONSTANT(PERF_OVERLAY);

}