#include time_utils.h
#include settings.h

class ThreadUtils: public RefCounted {
GDCLASS(ThreadUtils, RefCounted);
public:
enum CheckMode {
PROCESS = 1,
PHYSICS = 2,
BOTH = 3,
};
static void cleanup_threads();
static int add_thread(Callable callable, bool high_priority, String description);
static void _static_init();
static void setup_cleanup();
static void add_locked_thread(Object object, Callable callable, bool high_priority, String description);
static void cleanup_locked_thread(Object object, bool clear);
};
VARIANT_ENUM_CAST(ThreadUtils::CheckMode);
