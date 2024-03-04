#include "custom_node2d.h"

#include <godot_cpp/core/class_db.hpp>

using namespace godot;

void CustomNode2D::set_label(Label *p_label) {
  _label = p_label;
}

Label *CustomNode2D::get_label() {
  return _label;
}

void CustomNode2D::_bind_methods() {
  ClassDB::bind_method(D_METHOD("set_label", "label"), &CustomNode2D::set_label);
  ClassDB::bind_method(D_METHOD("get_label"), &CustomNode2D::get_label);

  ADD_PROPERTY(PropertyInfo(Variant::OBJECT, "label", PROPERTY_HINT_NODE_TYPE, ""), "set_label", "get_label");
}
