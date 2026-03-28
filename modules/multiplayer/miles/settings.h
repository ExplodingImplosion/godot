#include "core/config/project_settings.h"
#include "core/object/class_db.h"

class Settings: public RefCounted {
    GDCLASS(Settings, RefCounted);
    public:
        static Variant get_setting_safe(String name, Variant default_value);
        static void _bind_methods();
        // Settings();~Settings();
};
