#include "debug_meshes.h"
// DebugMeshes::DebugMeshes(){
	
// }
// DebugMeshes::~DebugMeshes(){
	
// }
void DebugMeshes::add_debug_boxmesh(Transform3D transform, float time, Vector3 custom_extents) {
	Ref<BoxMesh> bm; bm.instantiate();
	bm->set_size(custom_extents);
	spawn_debug_mesh(bm,transform,time);
}

// void create_mat() {
// 	RenderingServer* server = RedneringServer::get_singleton();
// 	auto rid server->material_create();
// 	server->material_set_param(rid,StringName("shading_mode"),BaseMaterial3D::SHADING_MODE_UNSHADED)
// }

Ref<StandardMaterial3D> DebugMeshes::get_raycast_debug_mat() {
	if (raycast_debug_mesh) {
		return raycast_debug_mesh;
	}
	else {
		Ref<StandardMaterial3D> mat = get_raycast_mat();
		raycast_debug_mesh = mat;
		return mat;
	}
}

inline Ref<StandardMaterial3D> get_raycast_mat() {
	Ref<StandardMaterial3D> mat; mat.instantiate();
	mat->set_shading_mode(BaseMaterial3D::SHADING_MODE_UNSHADED);
	mat->set_flag(StandardMaterial3D::FLAG_SRGB_VERTEX_COLOR, true);
	mat->set_flag(StandardMaterial3D::FLAG_ALBEDO_FROM_VERTEX_COLOR, true);
	mat->set_flag(StandardMaterial3D::FLAG_DISABLE_FOG, true);
	mat->set_cull_mode(BaseMaterial3D::CULL_DISABLED);
	mat->set_transparency(BaseMaterial3D::TRANSPARENCY_ALPHA);
	return mat;
}

inline Array get_line_array(Vector3 start_pos, Vector3 target_pos, Color color) {
	PackedVector3Array verts; verts.resize(2); verts[0] = start_pos; verts[1] = target_pos;
	PackedColorArray colors; colors.resize(2); colors.fill(color);
	Array array; array.resize(Mesh::ARRAY_MAX); array[Mesh::ARRAY_VERTEX] = verts; array[Mesh::ARRAY_COLOR] = colors;
	return array;
}

MeshInstance3D* DebugMeshes::spawn_debug_raycast_mesh(RayCast3D* raycast, float time) {
	Ref<ArrayMesh> mesh; mat.instantiate();
	Array array = get_line_array(Vector3(0,0,0), raycast->get_target_position(),raycast->is_colliding()? Color(1,0,0,1) : Color(0,1,0,1));
	mesh->add_surface_from_arrays(Mesh::PRIMITIVE_LINES,array);
	mesh->surface_set_material(0,get_raycast_debug_mesh());
	return spawn_debug_mesh(mesh,raycast->get_global_transform(),time);
}

MeshInstance3D* DebugMeshes::draw_line(Vector3 start, Vector3 end, float lifetime, Color color) {
	Ref<StandardMaterial3D> mat = get_raycast_debug_mesh();
	Ref<ArrayMesh> mesh; mesh.instantiate();
	Array array = get_line_array(start, end, color);
	mesh -> add_surface_from_arrays(Mesh::PRIMITIVE_LINES,array);
	mesh -> surface_set_material(0,mat);
	return spawn_debug_mesh(mesh,Transform3D(0,0,0,0,0,0,0,0,0,0,0,0),lifetime);
}

MeshInstance3D* DebugMeshes::spawn_debug_mesh(Ref<Mesh> mesh, Transform3D transform, float time) {
	MeshInstance3D* node = memnew(MeshInstance3D);
	node->set_mesh(mesh);
	node->connect(StringName("ready"),Callable(node,StringName("set_global_transform")).bind(transform),CONNECT_ONE_SHOT);
	auto tree = node->get_tree();
	tree->get_current_scene()->add_child(node);
	node->add_to_group(StringName("Debug Collision Shapes"));
	tree->create_timer(time,true,true,false)->connect(StringName("timeout"),Callable(node,StringName("queue_free")),CONNECT_ONE_SHOT);
	return node;
}

bool DebugMeshes::can_add_debug_mesh() {
	return Settings::get_setting_safe("quack/debug/show_collisions",false);
}

bool DebugMeshes::can_add_debug_ray() {
	return Settings::get_setting_safe("quack/debug/show_rays",false);
}

MeshInstance3D* DebugMeshes::spawn_colldier_debug_mesh(CollisionShape3D* collider, float time) {
	// auto mesh = collider->shape->get_debug_mesh();
	return spawn_debug_mesh(collider->shape->get_debug_mesh(),collider->get_global_transform(),time);
}

MeshInstance3D* DebugMeshes::spawn_recolored_debug_mesh(Ref<Mesh> mesh, Color color, Transform3D transform, float time) {
	// mesh = mesh->duplicate();
	// auto server = RenderingServer::get_singleton();
	// for (int i = 0; i < mesh->get_surface_count(); i++) {
	// 	server->mesh_surface_update_attribute_region(mesh->get_rid(),i,)
	// }
}

MeshInstance3D* DebugMeshes::spawn_recolored_colldier_debug_mesh(CollisionShape3D* collider, Color color, float time) {
	
}

void DebugMeshes::spawn_debug_mesh_child(CollisionShape3D* collider, bool interp) {
	
}

Ref<StandardMaterial3D> DebugMeshes::get_raycast_debug_mesh() {
	return raycast_debug_mesh;
}

void DebugMeshes::set_raycast_debug_mesh(Ref<StandardMaterial3D> p_raycast_debug_mesh) {
	raycast_debug_mesh = p_raycast_debug_mesh;
}

Ref<StandardMaterial3D> DebugMeshes::get_raycast_colliding_debug_mesh() {
	return raycast_colliding_debug_mesh;
}

void DebugMeshes::set_raycast_colliding_debug_mesh(Ref<StandardMaterial3D> p_raycast_colliding_debug_mesh) {
	raycast_colliding_debug_mesh = p_raycast_colliding_debug_mesh;
}

Ref<ArrayMesh> DebugMeshes::get_impact_mesh() {
	return impact_mesh;
}

void DebugMeshes::set_impact_mesh(Ref<ArrayMesh> p_impact_mesh) {
	impact_mesh = p_impact_mesh;
}

void DebugMeshes::_bind_methods(){
	ClassDB::bind_static_method("DebugMeshes", D_METHOD("add_debug_boxmesh", "transform", "time", "custom_extents"), &DebugMeshes::add_debug_boxmesh, DEFVAL(3.0), DEFVAL((0.05, 0.05, 0.05)));
	ClassDB::bind_static_method("DebugMeshes", D_METHOD("spawn_debug_raycast_mesh", "raycast", "time"), &DebugMeshes::spawn_debug_raycast_mesh, DEFVAL(3.0));
	ClassDB::bind_static_method("DebugMeshes", D_METHOD("draw_line", "start", "end", "lifetime", "color"), &DebugMeshes::draw_line, DEFVAL((0.6275, 0.1255, 0.9412, 1.0)));
	ClassDB::bind_static_method("DebugMeshes", D_METHOD("spawn_debug_mesh", "mesh", "transform", "time"), &DebugMeshes::spawn_debug_mesh, DEFVAL(3.0));
	ClassDB::bind_static_method("DebugMeshes", D_METHOD("can_add_debug_mesh"), &DebugMeshes::can_add_debug_mesh);
	ClassDB::bind_static_method("DebugMeshes", D_METHOD("can_add_debug_ray"), &DebugMeshes::can_add_debug_ray);
	ClassDB::bind_static_method("DebugMeshes", D_METHOD("spawn_colldier_debug_mesh", "collider", "time"), &DebugMeshes::spawn_colldier_debug_mesh, DEFVAL(<null>));
	ClassDB::bind_static_method("DebugMeshes", D_METHOD("spawn_recolored_debug_mesh", "mesh", "color", "transform", "time"), &DebugMeshes::spawn_recolored_debug_mesh);
	ClassDB::bind_static_method("DebugMeshes", D_METHOD("spawn_recolored_colldier_debug_mesh", "collider", "color", "time"), &DebugMeshes::spawn_recolored_colldier_debug_mesh, DEFVAL((0.0, 0.6, 0.698, 0.0235)), DEFVAL(<null>));
	ClassDB::bind_static_method("DebugMeshes", D_METHOD("spawn_debug_mesh_child", "collider", "interp"), &DebugMeshes::spawn_debug_mesh_child, DEFVAL(false));
	ClassDB::bind_method(D_METHOD("set_raycast_debug_mesh", "value"), &DebugMeshes::set_raycast_debug_mesh);
	ClassDB::bind_method(D_METHOD("get_raycast_debug_mesh"), &DebugMeshes::get_raycast_debug_mesh);
	ADD_PROPERTY(PropertyInfo(Variant::OBJECT, "raycast_debug_mesh"), "set_raycast_debug_mesh", "get_raycast_debug_mesh"); // unfinished and u should prolly change this
	ClassDB::bind_method(D_METHOD("set_raycast_colliding_debug_mesh", "value"), &DebugMeshes::set_raycast_colliding_debug_mesh);
	ClassDB::bind_method(D_METHOD("get_raycast_colliding_debug_mesh"), &DebugMeshes::get_raycast_colliding_debug_mesh);
	ADD_PROPERTY(PropertyInfo(Variant::OBJECT, "raycast_colliding_debug_mesh"), "set_raycast_colliding_debug_mesh", "get_raycast_colliding_debug_mesh"); // unfinished and u should prolly change this
	// ClassDB::bind_method(D_METHOD("set_impact_mesh", "value"), &DebugMeshes::set_impact_mesh);
	ClassDB::bind_method(D_METHOD("get_impact_mesh"), &DebugMeshes::get_impact_mesh);
	ADD_PROPERTY(PropertyInfo(Variant::OBJECT, "impact_mesh"), "set_impact_mesh", "get_impact_mesh"); // unfinished and u should prolly change this
}