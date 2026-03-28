#include "stupid_4_pt_5_mesh.h"
Stupid4Pt5Mesh::Stupid4Pt5Mesh(){
	set_physics_interpolation_mode(PhysicsInterpolationMode::PHYSICS_INTERPOLATION_MODE_OFF);
	set_as_top_level(true);
	set_process_mode(PROCESS_MODE_PAUSABLE);
}
// Stupid4Pt5Mesh::~Stupid4Pt5Mesh(){
	
// }
void Stupid4Pt5Mesh::update_transform() {
	if (parent_collider) { set_global_transform(parent_collider->get_global_transform()); }
}



void Stupid4Pt5Mesh::_notification(int what) {
	switch (what) {
		// case NOTIFICATION_POSTINITIALIZE: {
		// 	break;
		// }
		case NOTIFICATION_PHYSICS_PROCESS: {
			if (is_set_as_top_level()) {
				callable_mp(this, &Stupid4Pt5Mesh::update_transform).call_deferred();
			}
			break;
		}
		case NOTIFICATION_PARENTED: {
			parent_collider = Object::cast_to<CollisionShape3D>(get_parent());
			if (parent_collider) {
				set_mesh(parent_collider->get_shape()->get_debug_mesh());
			}
			break;
		}
		case NOTIFICATION_UNPARENTED: {
			parent_collider = nullptr;
			set_mesh(nullptr);
			break;
		}
	}
}

Stupid4Pt5Mesh* Stupid4Pt5Mesh::create(CollisionShape3D* p_collider, bool p_interp) {
	Stupid4Pt5Mesh* stupid_mesh = memnew(Stupid4Pt5Mesh);
	stupid_mesh->set_physics_interpolation_mode(p_interp? PHYSICS_INTERPOLATION_MODE_ON : PHYSICS_INTERPOLATION_MODE_OFF);
	p_collider->add_child(stupid_mesh);
}

void Stupid4Pt5Mesh::_bind_methods(){
	ClassDB::bind_static_method("Stupid4Pt5Mesh",D_METHOD("create","collider","interpolate"),&Stupid4Pt5Mesh::create);
	// ClassDB::bind_method(D_METHOD("update_transform"), &Stupid4Pt5Mesh::update_transform);
//	ClassDB::bind_method(D_METHOD("set_parent_collider", "value"), &Stupid4Pt5Mesh::set_parent_collider);
//	ClassDB::bind_method(D_METHOD("get_parent_collider"), &Stupid4Pt5Mesh::get_parent_collider);
	// ADD_PROPERTY(PropertyInfo(Variant::OBJECT, "parent_collider"), "set_parent_collider", "get_parent_collider"); // unfinished and u should prolly change this
}