#include "component_tracker.h"
ComponentTracker::ComponentTracker(){
	
}
ComponentTracker::~ComponentTracker(){
	
}
void ComponentTracker::_bind_methods(){
ADD_SIGNAL(MethodInfo("component_added", PropertyInfo(Variant::OBJECT, "component")));
ADD_SIGNAL(MethodInfo("component_removed", PropertyInfo(Variant::OBJECT, "component")));
}