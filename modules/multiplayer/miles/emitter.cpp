#include emitter.h
void Emitter::_bind_methods(){
ADD_SIGNAL(MethodInfo("client_added", PropertyInfo(Variant::OBJECT, "client")))));
ADD_SIGNAL(MethodInfo("player_added", PropertyInfo(Variant::OBJECT, "player")))));
ADD_SIGNAL(MethodInfo("client_readied", PropertyInfo(Variant::OBJECT, "client")))));
ADD_SIGNAL(MethodInfo("player_readied", PropertyInfo(Variant::OBJECT, "player")))));
ADD_SIGNAL(MethodInfo("client_removed", PropertyInfo(Variant::OBJECT, "client")))));
ADD_SIGNAL(MethodInfo("player_removed", PropertyInfo(Variant::OBJECT, "player")))));
}