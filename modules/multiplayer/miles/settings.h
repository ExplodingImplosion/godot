
class Settings: public RefCounted {
GDCLASS(Settings, RefCounted);
public:
static void get_setting_safe(String name, void default_value);
static void _bind_methods();
Settings();~Settings();
};
