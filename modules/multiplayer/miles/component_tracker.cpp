#include "component_tracker.h"
void ComponentTracker::_bind_methods(){
ADD_SIGNAL(MethodInfo("component_added", PropertyInfo(Variant::OBJECT, "component")));
ADD_SIGNAL(MethodInfo("component_removed", PropertyInfo(Variant::OBJECT, "component")));
}