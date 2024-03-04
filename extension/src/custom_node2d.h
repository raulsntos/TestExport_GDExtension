#ifndef CUSTOM_NODE2D_H
#define CUSTOM_NODE2D_H

#include <godot_cpp/classes/node2d.hpp>
#include <godot_cpp/classes/label.hpp>

using namespace godot;

class CustomNode2D : public Node2D {
  GDCLASS(CustomNode2D, Node2D);

private:
  Label *_label;

protected:
  static void _bind_methods();

public:
  void set_label(Label *label);
  Label *get_label();
};

#endif // CUSTOM_NODE2D_H
