#include change_team_request_packet.h
void ChangeTeamRequestPacket::_execute(int _sender_id) {
	
}
bool ChangeTeamRequestPacket::is_script_valid_packet(GdScript script) {
	
}
void ChangeTeamRequestPacket::_execute(int _sender_id) {
	
}
int ChangeTeamRequestPacket::get_u8_player_index() {
	
}
int ChangeTeamRequestPacket::set_u8_player_index(int p_u8_player_index) {
	
}
void ChangeTeamRequestPacket::_bind_methods(){
ClassDB::bind_method(D_METHOD("_execute", "_sender_id"), &ChangeTeamRequestPacket::_execute);
ClassDB::bind_static_method("ChangeTeamRequestPacket", D_METHOD("is_script_valid_packet", "script"), &ChangeTeamRequestPacket::is_script_valid_packet);
ClassDB::bind_method(D_METHOD("_execute", "_sender_id"), &ChangeTeamRequestPacket::_execute);
ADD_PROPERTY(PropertyInfo(Variant::INT, "u8_player_index"), "set_u8_player_index," "get_u8_player_index"); // unfinished and u should prolly change this
}