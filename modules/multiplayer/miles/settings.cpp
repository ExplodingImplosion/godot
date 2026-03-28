#include "settings.h"
// Settings::Settings(){
	
// }
// Settings::~Settings(){
	
// }
Variant Settings::get_setting_safe(String name, Variant default_value) {
	auto ps = ProjectSettings::get_singleton();
    if (ps->has_setting(name)) {
        return ps->get_setting(name);
    }
    else {
        ps->set_setting(name,default_value);
        return default_value;
    }
}
void Settings::_bind_methods(){
    ClassDB::bind_static_method("Settings", D_METHOD("get_setting_safe", "name", "default_value"), &Settings::get_setting_safe, DEFVAL(nullptr));
}