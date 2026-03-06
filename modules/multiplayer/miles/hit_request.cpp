#include hit_request.h
void merge(Node requester, Callable callable, Array bounding_boxes, bool subtick) {
	
}
void _init(int player_id, Node requester, Callable callable, Array bounding_boxes, bool subtick) {
	
}
void resolve(Node3d level) {
	
}
static void hitreg_debug_boxes(bool show_hitreg, Node serializer, Color color, float time) {
	
}
void HitRequest::_bind_methods(){
ClassDB::bind_method(D_METHOD("merge", "requester", "callable", "bounding_boxes", "subtick"), &HitRequest::merge);
ClassDB::bind_method(D_METHOD("_init", "player_id", "requester", "callable", "bounding_boxes", "subtick"), &HitRequest::_init);
ClassDB::bind_method(D_METHOD("resolve", "level"), &HitRequest::resolve);
ClassDB::bind_method(D_METHOD("hitreg_debug_boxes", "show_hitreg", "serializer", "color", "time"), &HitRequest::hitreg_debug_boxes);
ADD_PROPERTY(PropertyInfo(Variant::INT, "player_id"))),); // unfinished and u should prolly change this
ADD_PROPERTY(PropertyInfo(Variant::ARRAY, "requesters", 31, "Node", 4096))),); // unfinished and u should prolly change this
ADD_PROPERTY(PropertyInfo(Variant::ARRAY, "callables", 31, "Callable", 4096))),); // unfinished and u should prolly change this
ADD_PROPERTY(PropertyInfo(Variant::DICTIONARY, "bounding_boxes", 38, "StaticBody3D;Variant", 4096))),); // unfinished and u should prolly change this
ADD_PROPERTY(PropertyInfo(Variant::BOOL, "subtick"))),); // unfinished and u should prolly change this
}