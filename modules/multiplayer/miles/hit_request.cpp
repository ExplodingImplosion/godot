#include hit_request.h
void HitRequest::merge(Node requester, Callable callable, Array bounding_boxes, bool subtick) {
	
}
void HitRequest::_init(int player_id, Node requester, Callable callable, Array bounding_boxes, bool subtick) {
	
}
void HitRequest::resolve(Node3d level) {
	
}
void HitRequest::hitreg_debug_boxes(bool show_hitreg, Node serializer, Color color, float time) {
	
}
int HitRequest::get_player_id() {
	
}
int HitRequest::set_player_id(int p_player_id) {
	
}
Array HitRequest::get_requesters() {
	
}
Array HitRequest::set_requesters(Array p_requesters) {
	
}
Array HitRequest::get_callables() {
	
}
Array HitRequest::set_callables(Array p_callables) {
	
}
Dictionary HitRequest::get_bounding_boxes() {
	
}
Dictionary HitRequest::set_bounding_boxes(Dictionary p_bounding_boxes) {
	
}
bool HitRequest::get_subtick() {
	
}
bool HitRequest::set_subtick(bool p_subtick) {
	
}
void HitRequest::_bind_methods(){
ClassDB::bind_method(D_METHOD("merge", "requester", "callable", "bounding_boxes", "subtick"), &HitRequest::merge);
ClassDB::bind_method(D_METHOD("_init", "player_id", "requester", "callable", "bounding_boxes", "subtick"), &HitRequest::_init);
ClassDB::bind_method(D_METHOD("resolve", "level"), &HitRequest::resolve);
ClassDB::bind_static_method("HitRequest", D_METHOD("hitreg_debug_boxes", "show_hitreg", "serializer", "color", "time"), &HitRequest::hitreg_debug_boxes);
ADD_PROPERTY(PropertyInfo(Variant::INT, "player_id"), "set_player_id," "get_player_id"); // unfinished and u should prolly change this
ADD_PROPERTY(PropertyInfo(Variant::ARRAY, "requesters", 31, "Node", 4096), "set_requesters," "get_requesters"); // unfinished and u should prolly change this
ADD_PROPERTY(PropertyInfo(Variant::ARRAY, "callables", 31, "Callable", 4096), "set_callables," "get_callables"); // unfinished and u should prolly change this
ADD_PROPERTY(PropertyInfo(Variant::DICTIONARY, "bounding_boxes", 38, "StaticBody3D;Variant", 4096), "set_bounding_boxes," "get_bounding_boxes"); // unfinished and u should prolly change this
ADD_PROPERTY(PropertyInfo(Variant::BOOL, "subtick"), "set_subtick," "get_subtick"); // unfinished and u should prolly change this
}