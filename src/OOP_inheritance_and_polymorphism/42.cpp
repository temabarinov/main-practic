#include "common.h"

class drawshape {
 public:
  virtual void draw() = 0;
};

class triangle : public drawshape {
 private:
  int a{}, b{}, c{};
  int A{}, B{}, C{};

 public:
  triangle(int seta, int setb, int setc, int setA, int setB, int setC)
      : a{seta}, b{setb}, c{setc}, A{setA}, B{setB}, C{setC} {};

  int geta() { return a; }
  int getb() { return b; }
  int getc() { return c; }
  int getA() { return A; }
  int getB() { return B; }
  int getC() { return C; }
  void draw() {
    std::cout << "Треугольник: " << std::endl;
    std::cout << "Стороны:     " << "a=" << geta() << " b=" << getb()
              << " c=" << getc() << std::endl;
    std::cout << "Углы:        " << "A=" << getA() << " B=" << getB()
              << " C=" << getC() << "\n"
              << std::endl;
  }
};

class triangle90 : public triangle {
 public:
  triangle90(int seta, int setb, int setc, int setA, int setB)
      : triangle(seta, setb, setc, setA, setB, 90) {}

  void draw() {
    std::cout << "Прямоугольный треугольник: " << std::endl;
    std::cout << "Стороны:     " << "a=" << geta() << " b=" << getb()
              << " c=" << getc() << std::endl;
    std::cout << "Углы:        " << "A=" << getA() << " B=" << getB()
              << " C=" << getC() << "\n"
              << std::endl;
  }
};

class triangle_equal_two_sides : public triangle {
 public:
  triangle_equal_two_sides(int seta, int setb, int setA, int setB)
      : triangle(seta, setb, seta, setA, setB, setA) {}

  void draw() {
    std::cout << "Равнобедренный треугольник: " << std::endl;
    std::cout << "Стороны:     " << "a=" << geta() << " b=" << getb()
              << " c=" << getc() << std::endl;
    std::cout << "Углы:        " << "A=" << getA() << " B=" << getB()
              << " C=" << getC() << "\n"
              << std::endl;
  }
};

class triangle_equal_all_sides : public triangle {
 public:
  triangle_equal_all_sides(int seta) : triangle(seta, seta, seta, 60, 60, 60) {}

  void draw() {
    std::cout << "Равносторонний треугольник: " << std::endl;
    std::cout << "Стороны:     " << "a=" << geta() << " b=" << getb()
              << " c=" << getc() << std::endl;
    std::cout << "Углы:        " << "A=" << getA() << " B=" << getB()
              << " C=" << getC() << "\n"
              << std::endl;
  }
};

class quadrilateral : public drawshape {
 private:
  int a{}, b{}, c{}, d{};
  int A{}, B{}, C{}, D{};

 public:
  quadrilateral(int seta, int setb, int setc, int setd, int setA, int setB,
                int setC, int setD)
      : a{seta},
        b{setb},
        c{setc},
        d{setd},
        A{setA},
        B{setb},
        C{setC},
        D{setD} {}

  int geta() { return a; }
  int getb() { return b; }
  int getc() { return c; }
  int getd() { return d; }
  int getA() { return A; }
  int getB() { return B; }
  int getC() { return C; }
  int getD() { return D; }

  void draw() {
    std::cout << "Четырехугольник: " << std::endl;
    std::cout << "Стороны:     " << "a=" << geta() << " b=" << getb()
              << " c=" << getc() << " d=" << getd() << std::endl;
    std::cout << "Углы:        " << "A=" << getA() << " B=" << getB()
              << " C=" << getC() << " D=" << getD() << "\n"
              << std::endl;
  }
};

class square : public quadrilateral {
 public:
  square(int seta) : quadrilateral(seta, seta, seta, seta, 90, 90, 90, 90) {}

  void draw() {
    std::cout << "Квадрат:     " << std::endl;
    std::cout << "Стороны:     " << "a=" << geta() << " b=" << getb()
              << " c=" << getc() << " d=" << getd() << std::endl;
    std::cout << "Углы:        " << "A=" << getA() << " B=" << getB()
              << " C=" << getC() << " D=" << getD() << "\n"
              << std::endl;
  }
};
class rhombus : public quadrilateral {
 public:
  rhombus(int seta, int setA, int setB)
      : quadrilateral(seta, seta, seta, seta, setA, setB, setA, setB) {}

  void draw() {
    std::cout << "Ромб: " << std::endl;
    std::cout << "Стороны:     " << "a=" << geta() << " b=" << getb()
              << " c=" << getc() << " d=" << getd() << std::endl;
    std::cout << "Углы:        " << "A=" << getA() << " B=" << getB()
              << " C=" << getC() << " D=" << getD() << "\n"
              << std::endl;
  }
};

class rectangle : public quadrilateral {
 public:
  rectangle(int seta, int setb)
      : quadrilateral(seta, setb, seta, setb, 90, 90, 90, 90) {}

  void draw() {
    std::cout << "Прямоугольник: " << std::endl;
    std::cout << "Стороны:     " << "a=" << geta() << " b=" << getb()
              << " c=" << getc() << " d=" << getd() << std::endl;
    std::cout << "Углы:        " << "A=" << getA() << " B=" << getB()
              << " C=" << getC() << " D=" << getD() << "\n"
              << std::endl;
  }
};

class parallelogram : public quadrilateral {
 public:
  parallelogram(int seta, int setb, int setA, int setB)
      : quadrilateral(seta, setb, seta, setb, setA, setB, setA, setB) {}

  void draw() {
    std::cout << "Параллелограмм: " << std::endl;
    std::cout << "Стороны:     " << "a=" << geta() << " b=" << getb()
              << " c=" << getc() << " d=" << getd() << std::endl;
    std::cout << "Углы:        " << "A=" << getA() << " B=" << getB()
              << " C=" << getC() << " D=" << getD() << "\n"
              << std::endl;
  }
};

void drawsh(drawshape* a) { a->draw(); }

int main(int argc, char** argv) {
  triangle triangle(10, 20, 30, 50, 60, 70);
  triangle90 triangle90(10, 20, 30, 50, 60);
  triangle_equal_two_sides triangle_equal_two_sides(10, 20, 50, 60);
  triangle_equal_all_sides triangle_equal_all_sides(30);
  quadrilateral quadrilateral(10, 20, 30, 40, 50, 60, 70, 80);
  rectangle rectangle(10, 20);
  square square(20);
  parallelogram parallelogram(20, 30, 30, 40);
  rhombus rhombus(30, 30, 40);

  drawsh(&triangle);
  drawsh(&triangle90);
  drawsh(&triangle_equal_two_sides);
  drawsh(&triangle_equal_all_sides);
  drawsh(&quadrilateral);
  drawsh(&rectangle);
  drawsh(&square);
  drawsh(&parallelogram);
  drawsh(&rhombus);

  return 0;
}