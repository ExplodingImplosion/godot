#include "time_utils.h"
#include "settings.h"

class ThreadUtils: public RefCounted {
GDCLASS(ThreadUtils, RefCounted);
public:
static Dictionary threads;
static bool print_thread_checks;
static Dictionary locked_threads;
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
static Dictionary get_threads();
static void set_threads(Dictionary p_threads);
static bool get_print_thread_checks();
static void set_print_thread_checks(bool p_print_thread_checks);
static Dictionary get_locked_threads();
static void set_locked_threads(Dictionary p_locked_threads);
static void _bind_methods();
ThreadUtils();~ThreadUtils();
};
VARIANT_ENUM_CAST(ThreadUtils::CheckMode);
