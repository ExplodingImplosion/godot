#include thread_utils.h
static void cleanup_threads() {
	
}
static int add_thread(Callable callable, bool high_priority, String description) {
	
}
static void _static_init() {
	
}
static void setup_cleanup() {
	
}
static void add_locked_thread(Object object, Callable callable, bool high_priority, String description) {
	
}
static void cleanup_locked_thread(Object object, bool clear) {
	
}
void ThreadUtils::_bind_methods(){
ClassDB::bind_method(D_METHOD("cleanup_threads"), &ThreadUtils::cleanup_threads);
ClassDB::bind_method(D_METHOD("add_thread", "callable", "high_priority", "description"), &ThreadUtils::add_thread);
ClassDB::bind_method(D_METHOD("_static_init"), &ThreadUtils::_static_init);
ClassDB::bind_method(D_METHOD("setup_cleanup"), &ThreadUtils::setup_cleanup);
ClassDB::bind_method(D_METHOD("add_locked_thread", "object", "callable", "high_priority", "description"), &ThreadUtils::add_locked_thread);
ClassDB::bind_method(D_METHOD("cleanup_locked_thread", "object", "clear"), &ThreadUtils::cleanup_locked_thread);
BIND_ENUM_CONSTANT(PROCESS);
BIND_ENUM_CONSTANT(PHYSICS);
BIND_ENUM_CONSTANT(BOTH);

}