#include hit_resolver.h
static bool is_valid_hit_resolution_subject(Node node) {
	
}
void _init(Node3d mp_level) {
	
}
void _exit_tree() {
	
}
void _physics_process(float _delta) {
	
}
void resolve_hits() {
	
}
void request_hit(int player_id, Node requester, Callable callable, Array bounding_boxes, bool subtick) {
	
}
void HitResolver::_bind_methods(){
ClassDB::bind_method(D_METHOD("is_valid_hit_resolution_subject", "node"), &HitResolver::is_valid_hit_resolution_subject);
ClassDB::bind_method(D_METHOD("_init", "mp_level"), &HitResolver::_init);
ClassDB::bind_method(D_METHOD("_exit_tree"), &HitResolver::_exit_tree);
ClassDB::bind_method(D_METHOD("_physics_process", "_delta"), &HitResolver::_physics_process);
ClassDB::bind_method(D_METHOD("resolve_hits"), &HitResolver::resolve_hits);
ClassDB::bind_method(D_METHOD("request_hit", "player_id", "requester", "callable", "bounding_boxes", "subtick"), &HitResolver::request_hit);
ADD_PROPERTY(PropertyInfo(Variant::OBJECT, "mp_level"))),); // unfinished and u should prolly change this
ADD_PROPERTY(PropertyInfo(Variant::ARRAY, "hit_requests", 31, "RefCounted", 4096))),); // unfinished and u should prolly change this
ADD_PROPERTY(PropertyInfo(Variant::DICTIONARY, "hit_map", 38, "int;RefCounted", 4096))),); // unfinished and u should prolly change this
BIND_ENUM_CONSTANT(SINGLETONS);
BIND_ENUM_CONSTANT(REGULAR);
BIND_ENUM_CONSTANT(BOUNDING_BOX);
BIND_ENUM_CONSTANT(SERIALIZER);
BIND_ENUM_CONSTANT(HIT_RESOLVER);
BIND_ENUM_CONSTANT(HISTORY_SAVER);
BIND_ENUM_CONSTANT(PERF_OVERLAY);

}