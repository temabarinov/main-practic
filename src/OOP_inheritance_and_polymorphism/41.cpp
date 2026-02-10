#include "common.h"

class Figure {
 private:
  int sides_count;
  std::string name;

 protected:
  Figure(int sides, const std::string& fig_name)
      : sides_count(sides), name(fig_name) {}

 public:
  Figure() : Figure(0, "Фигура") {}

  int get_sides_count() const { return sides_count; }

  std::string get_name() const { return name; }
};

class Triangle : public Figure {
 public:
  Triangle() : Figure(3, "Треугольник") {}
};

class Quadrangle : public Figure {
 public:
  Quadrangle() : Figure(4, "Четырёхугольник") {}
};

int main() {
  Figure f;
  Triangle t;
  Quadrangle q;

  std::cout << f.get_name() << ": " << f.get_sides_count() << std::endl;
  std::cout << t.get_name() << ": " << t.get_sides_count() << std::endl;
  std::cout << q.get_name() << ": " << q.get_sides_count() << std::endl;

  return 0;
}