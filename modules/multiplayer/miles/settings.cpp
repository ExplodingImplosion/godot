#include settings.h
void Settings::get_setting_safe(String name, void default_value) {
	
}
void Settings::_bind_methods(){
ClassDB::bind_method(D_METHOD("get_setting_safe", "name", "default_value"), &Settings::get_setting_safe);
}