#include multiplayer_level.h
void _init() {
	
}
void _physics_process(float _delta) {
	
}
void _ready() {
	
}
void remove_client(int id) {
	
}
void on_notified_ready(int id) {
	
}
void on_node_spawned(Node serializer) {
	
}
void on_node_deleted(Node serializer) {
	
}
void _exit_tree() {
	
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
ADD_PROPERTY(PropertyInfo(Variant::OBJECT, "history_saver"))),); // unfinished and u should prolly change this
BIND_ENUM_CONSTANT(SINGLETONS);
BIND_ENUM_CONSTANT(REGULAR);
BIND_ENUM_CONSTANT(BOUNDING_BOX);
BIND_ENUM_CONSTANT(SERIALIZER);
BIND_ENUM_CONSTANT(HIT_RESOLVER);
BIND_ENUM_CONSTANT(HISTORY_SAVER);
BIND_ENUM_CONSTANT(PERF_OVERLAY);

}