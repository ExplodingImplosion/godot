#include "change_team_accept_packet.h"
ChangeTeamAcceptPacket::ChangeTeamAcceptPacket(){
	
}
ChangeTeamAcceptPacket::~ChangeTeamAcceptPacket(){
	
}
void ChangeTeamAcceptPacket::_execute(int _sender_id) {
	
}
bool ChangeTeamAcceptPacket::is_script_valid_packet(GdScript script) {
	
}
void ChangeTeamAcceptPacket::_execute(int _sender_id) {
	
}
int ChangeTeamAcceptPacket::get_u8_player_index() {
	return u8_player_index;
}
void ChangeTeamAcceptPacket::set_u8_player_index(int p_u8_player_index) {
	u8_player_index = p_u8_player_index;
}
void ChangeTeamAcceptPacket::_bind_methods(){
ClassDB::bind_method(D_METHOD("_execute", "_sender_id"), &ChangeTeamAcceptPacket::_execute);
ClassDB::bind_static_method("ChangeTeamAcceptPacket", D_METHOD("is_script_valid_packet", "script"), &ChangeTeamAcceptPacket::is_script_valid_packet);
ClassDB::bind_method(D_METHOD("_execute", "_sender_id"), &ChangeTeamAcceptPacket::_execute);
ClassDB::bind_method(D_METHOD("set_u8_player_index", "value"), &ChangeTeamAcceptPacket::set_u8_player_index);
ClassDB::bind_method(D_METHOD("get_u8_player_index"), &ChangeTeamAcceptPacket::get_u8_player_index);
ADD_PROPERTY(PropertyInfo(Variant::INT, "u8_player_index"), "set_u8_player_index", "get_u8_player_index"); // unfinished and u should prolly change this
}