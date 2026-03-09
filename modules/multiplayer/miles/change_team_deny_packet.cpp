#include change_team_deny_packet.h
void ChangeTeamDenyPacket::_execute(int _sender_id) {
	
}
bool ChangeTeamDenyPacket::is_script_valid_packet(GdScript script) {
	
}
void ChangeTeamDenyPacket::_execute(int _sender_id) {
	
}
int ChangeTeamDenyPacket::get_u8_player_index() {
	
}
int ChangeTeamDenyPacket::set_u8_player_index(int p_u8_player_index) {
	
}
void ChangeTeamDenyPacket::_bind_methods(){
ClassDB::bind_method(D_METHOD("_execute", "_sender_id"), &ChangeTeamDenyPacket::_execute);
ClassDB::bind_static_method("ChangeTeamDenyPacket", D_METHOD("is_script_valid_packet", "script"), &ChangeTeamDenyPacket::is_script_valid_packet);
ClassDB::bind_method(D_METHOD("_execute", "_sender_id"), &ChangeTeamDenyPacket::_execute);
ADD_PROPERTY(PropertyInfo(Variant::INT, "u8_player_index"), "set_u8_player_index," "get_u8_player_index"); // unfinished and u should prolly change this
}