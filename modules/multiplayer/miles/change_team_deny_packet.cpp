#include "change_team_deny_packet.h"
ChangeTeamDenyPacket::ChangeTeamDenyPacket(){
	
}
ChangeTeamDenyPacket::~ChangeTeamDenyPacket(){
	
}
void ChangeTeamDenyPacket::_execute(int _sender_id) {
	
}
bool ChangeTeamDenyPacket::is_script_valid_packet(GdScript script) {
	
}
void ChangeTeamDenyPacket::_execute(int _sender_id) {
	
}
int ChangeTeamDenyPacket::get_u8_player_index() {
	return u8_player_index;
}
void ChangeTeamDenyPacket::set_u8_player_index(int p_u8_player_index) {
	u8_player_index = p_u8_player_index;
}
void ChangeTeamDenyPacket::_bind_methods(){
ClassDB::bind_method(D_METHOD("_execute", "_sender_id"), &ChangeTeamDenyPacket::_execute);
ClassDB::bind_static_method("ChangeTeamDenyPacket", D_METHOD("is_script_valid_packet", "script"), &ChangeTeamDenyPacket::is_script_valid_packet);
ClassDB::bind_method(D_METHOD("_execute", "_sender_id"), &ChangeTeamDenyPacket::_execute);
ClassDB::bind_method(D_METHOD("set_u8_player_index", "value"), &ChangeTeamDenyPacket::set_u8_player_index);
ClassDB::bind_method(D_METHOD("get_u8_player_index"), &ChangeTeamDenyPacket::get_u8_player_index);
ADD_PROPERTY(PropertyInfo(Variant::INT, "u8_player_index"), "set_u8_player_index", "get_u8_player_index"); // unfinished and u should prolly change this
}