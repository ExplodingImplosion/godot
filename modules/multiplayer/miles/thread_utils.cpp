#include "thread_utils.h"
ThreadUtils::ThreadUtils(){
	
}
ThreadUtils::~ThreadUtils(){
	
}
void ThreadUtils::cleanup_threads() {
	
}
int ThreadUtils::add_thread(Callable callable, bool high_priority, String description) {
	
}
void ThreadUtils::_static_init() {
	
}
void ThreadUtils::setup_cleanup() {
	
}
void ThreadUtils::add_locked_thread(Object object, Callable callable, bool high_priority, String description) {
	
}
void ThreadUtils::cleanup_locked_thread(Object object, bool clear) {
	
}
static Dictionary ThreadUtils::get_threads() {
	return threads;
}
static void ThreadUtils::set_threads(Dictionary p_threads) {
	threads = p_threads;
}
static bool ThreadUtils::get_print_thread_checks() {
	return print_thread_checks;
}
static void ThreadUtils::set_print_thread_checks(bool p_print_thread_checks) {
	print_thread_checks = p_print_thread_checks;
}
static Dictionary ThreadUtils::get_locked_threads() {
	return locked_threads;
}
static void ThreadUtils::set_locked_threads(Dictionary p_locked_threads) {
	locked_threads = p_locked_threads;
}
void ThreadUtils::_bind_methods(){
ClassDB::bind_static_method("ThreadUtils", D_METHOD("cleanup_threads"), &ThreadUtils::cleanup_threads);
ClassDB::bind_static_method("ThreadUtils", D_METHOD("add_thread", "callable", "high_priority", "description"), &ThreadUtils::add_thread, DEFVAL(false), DEFVAL(""));
ClassDB::bind_static_method("ThreadUtils", D_METHOD("_static_init"), &ThreadUtils::_static_init);
ClassDB::bind_static_method("ThreadUtils", D_METHOD("setup_cleanup"), &ThreadUtils::setup_cleanup);
ClassDB::bind_static_method("ThreadUtils", D_METHOD("add_locked_thread", "object", "callable", "high_priority", "description"), &ThreadUtils::add_locked_thread, DEFVAL(false), DEFVAL(""));
ClassDB::bind_static_method("ThreadUtils", D_METHOD("cleanup_locked_thread", "object", "clear"), &ThreadUtils::cleanup_locked_thread, DEFVAL(false));
ClassDB::bind_method(D_METHOD("set_threads", "value"), &ThreadUtils::set_threads);
ClassDB::bind_method(D_METHOD("get_threads"), &ThreadUtils::get_threads);
ADD_PROPERTY(PropertyInfo(Variant::DICTIONARY, "threads", PropertyHint(38), "int;Variant", 4096), "set_threads", "get_threads"); // unfinished and u should prolly change this
ClassDB::bind_method(D_METHOD("set_print_thread_checks", "value"), &ThreadUtils::set_print_thread_checks);
ClassDB::bind_method(D_METHOD("get_print_thread_checks"), &ThreadUtils::get_print_thread_checks);
ADD_PROPERTY(PropertyInfo(Variant::BOOL, "print_thread_checks"), "set_print_thread_checks", "get_print_thread_checks"); // unfinished and u should prolly change this
ClassDB::bind_method(D_METHOD("set_locked_threads", "value"), &ThreadUtils::set_locked_threads);
ClassDB::bind_method(D_METHOD("get_locked_threads"), &ThreadUtils::get_locked_threads);
ADD_PROPERTY(PropertyInfo(Variant::DICTIONARY, "locked_threads", PropertyHint(38), "Object;int", 4096), "set_locked_threads", "get_locked_threads"); // unfinished and u should prolly change this
BIND_ENUM_CONSTANT(PROCESS);
BIND_ENUM_CONSTANT(PHYSICS);
BIND_ENUM_CONSTANT(BOTH);

}