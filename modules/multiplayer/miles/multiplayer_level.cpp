#include "multiplayer_level.h"
void MultiplayerLevel::_init() {
	
}
void MultiplayerLevel::_physics_process(float _delta) {
	
}
void MultiplayerLevel::_ready() {
	
}
void MultiplayerLevel::remove_client(int id) {
	
}
void MultiplayerLevel::on_notified_ready(int id) {
	
}
void MultiplayerLevel::on_node_spawned(Node serializer) {
	
}
void MultiplayerLevel::on_node_deleted(Node serializer) {
	
}
void MultiplayerLevel::_exit_tree() {
	
}
Node MultiplayerLevel::get_history_saver() {
	return history_saver;
}
void MultiplayerLevel::set_history_saver(Node p_history_saver) {
	history_saver = p_history_saver;
}
void MultiplayerLevel::_bind_methods(){
ClassDB::bind_method(D_METHOD("_init"), &MultiplayerLevel::_init);
ClassDB::bind_method(D_METHOD("_physics_process", "_delta"), &MultiplayerLevel::_physics_process);
ClassDB::bind_method(D_METHOD("_ready"), &MultiplayerLevel::_ready);
ClassDB::bind_method(D_METHOD("remove_client", "id"), &MultiplayerLevel::remove_client);
ClassDB::bind_method(D_METHOD("on_notified_ready", "id"), &MultiplayerLevel::on_notified_ready);
ClassDB::bind_method(D_METHOD("on_node_spawned", "serializer"), &MultiplayerLevel::on_node_spawned);
ClassDB::bind_method(D_METHOD("on_node_deleted", "serializer"), &MultiplayerLevel::on_node_deleted);
ClassDB::bind_method(D_METHOD("_exit_tree"), &MultiplayerLevel::_exit_tree);
ClassDB::bind_method(D_METHOD("set_history_saver", "value"), &MultiplayerLevel::set_history_saver);
ClassDB::bind_method(D_METHOD("get_history_saver"), &MultiplayerLevel::get_history_saver);
ADD_PROPERTY(PropertyInfo(Variant::OBJECT, "history_saver"), "set_history_saver", "get_history_saver"); // unfinished and u should prolly change this
BIND_ENUM_CONSTANT(SINGLETONS);
BIND_ENUM_CONSTANT(REGULAR);
BIND_ENUM_CONSTANT(BOUNDING_BOX);
BIND_ENUM_CONSTANT(SERIALIZER);
BIND_ENUM_CONSTANT(HIT_RESOLVER);
BIND_ENUM_CONSTANT(HISTORY_SAVER);
BIND_ENUM_CONSTANT(PERF_OVERLAY);

}