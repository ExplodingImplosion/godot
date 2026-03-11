#include "network_packet.h"
NetworkPacket::NetworkPacket(){
	
}
NetworkPacket::~NetworkPacket(){
	
}
static bool NetworkPacket::get_print_in_packets() {
	return print_in_packets;
}
static void NetworkPacket::set_print_in_packets(bool p_print_in_packets) {
	print_in_packets = p_print_in_packets;
}
static bool NetworkPacket::get_print_out_packets() {
	return print_out_packets;
}
static void NetworkPacket::set_print_out_packets(bool p_print_out_packets) {
	print_out_packets = p_print_out_packets;
}
static Callable NetworkPacket::get_server_receive() {
	return server_receive;
}
static void NetworkPacket::set_server_receive(Callable p_server_receive) {
	server_receive = p_server_receive;
}
static Callable NetworkPacket::get_client_receive() {
	return client_receive;
}
static void NetworkPacket::set_client_receive(Callable p_client_receive) {
	client_receive = p_client_receive;
}
void NetworkPacket::_bind_methods(){
ClassDB::bind_method(D_METHOD("set_print_in_packets", "value"), &NetworkPacket::set_print_in_packets);
ClassDB::bind_method(D_METHOD("get_print_in_packets"), &NetworkPacket::get_print_in_packets);
ADD_PROPERTY(PropertyInfo(Variant::BOOL, "print_in_packets"), "set_print_in_packets", "get_print_in_packets"); // unfinished and u should prolly change this
ClassDB::bind_method(D_METHOD("set_print_out_packets", "value"), &NetworkPacket::set_print_out_packets);
ClassDB::bind_method(D_METHOD("get_print_out_packets"), &NetworkPacket::get_print_out_packets);
ADD_PROPERTY(PropertyInfo(Variant::BOOL, "print_out_packets"), "set_print_out_packets", "get_print_out_packets"); // unfinished and u should prolly change this
ClassDB::bind_method(D_METHOD("set_server_receive", "value"), &NetworkPacket::set_server_receive);
ClassDB::bind_method(D_METHOD("get_server_receive"), &NetworkPacket::get_server_receive);
ADD_PROPERTY(PropertyInfo(Variant::CALLABLE, "server_receive"), "set_server_receive", "get_server_receive"); // unfinished and u should prolly change this
ClassDB::bind_method(D_METHOD("set_client_receive", "value"), &NetworkPacket::set_client_receive);
ClassDB::bind_method(D_METHOD("get_client_receive"), &NetworkPacket::get_client_receive);
ADD_PROPERTY(PropertyInfo(Variant::CALLABLE, "client_receive"), "set_client_receive", "get_client_receive"); // unfinished and u should prolly change this
}