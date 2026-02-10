#include "common.h"

class shape {
 private:
  const std::string _name;
  shape() : count_sides{0}, _name{"Фигура"} {}

 protected:
  int count_sides;

 public:
  shape(int count, std::string_view name) : count_sides{count}, _name{name} {}
  virtual void draw() {
    std::cout << "Фигура:" << std::endl;
    if (check()) {
      std::cout << "Правильная" << std::endl;
    } else {
      std::cout << "Неправильная" << std::endl;
    }
    std::cout << "Количество сторон:" << count_sides << "\n" << std::endl;
  }
  virtual bool check() { return (count_sides == 0); }
  std::string getname() { return _name; }
  int getsides() { return (count_sides); }
};

class triangle : public shape {
 private:
  int a{}, b{}, c{};
  int A{}, B{}, C{};

 public:
  triangle(int seta, int setb, int setc, int setA, int setB, int setC)
      : shape(3, "Треугольник"),
        a{seta},
        b{setb},
        c{setc},
        A{setA},
        B{setB},
        C{setC} {};
  triangle(int seta, int setb, int setc, int setA, int setB, int setC,
           std::string_view setname)
      : shape(3, setname),
        a{seta},
        b{setb},
        c{setc},
        A{setA},
        B{setB},
        C{setC} {};

  int geta() { return a; }
  int getb() { return b; }
  int getc() { return c; }
  int getA() { return A; }
  int getB() { return B; }
  int getC() { return C; }
  void draw() {
    std::cout << getname() << ":" << std::endl;
    if (check()) {
      std::cout << "Правильный" << std::endl;
    } else {
      std::cout << "Неправильный" << std::endl;
    }

    std::cout << "Стороны:     " << "a=" << geta() << " b=" << getb()
              << " c=" << getc() << std::endl;
    std::cout << "Углы:        " << "A=" << getA() << " B=" << getB()
              << " C=" << getC() << "\n"
              << std::endl;
  }
  bool check() { return ((count_sides == 3) && (A + B + C == 180)); }
};

class triangle90 : public triangle {
 public:
  triangle90(int seta, int setb, int setc, int setA, int setB)
      : triangle(seta, setb, setc, setA, setB, 90,
                 "Прямоугольный треугольник") {}
  bool check() { return ((getA() + getB() + getC() == 180) && (getC() == 90)); }
  void draw() {
    std::cout << getname() << ":" << std::endl;
    if (check()) {
      std::cout << "Правильный" << std::endl;
    } else {
      std::cout << "Неправильный" << std::endl;
    }
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
      : triangle(seta, setb, seta, setA, setB, setA,
                 "Равнобедренный треугольник") {}
  bool check() {
    return ((getA() + getB() + getC() == 180) && (geta() == getc()) &&
            (getA() == getC()));
  }
  void draw() {
    std::cout << getname() << ":" << std::endl;
    if (check()) {
      std::cout << "Правильный" << std::endl;
    } else {
      std::cout << "Неправильный" << std::endl;
    }
    std::cout << "Стороны:     " << "a=" << geta() << " b=" << getb()
              << " c=" << getc() << std::endl;
    std::cout << "Углы:        " << "A=" << getA() << " B=" << getB()
              << " C=" << getC() << "\n"
              << std::endl;
  }
};

class triangle_equal_all_sides : public triangle {
 public:
  triangle_equal_all_sides(int seta)
      : triangle(seta, seta, seta, 60, 60, 60, "Равносторонний треугольник") {}
  bool check() {
    return ((geta()==getb()) && (getb()==getc()) && (getA()==getB()) && (getB()==getC()) && (getA()==60));
  }
  void draw() {
    std::cout << getname() << ":" << std::endl;
    if (check()) {
      std::cout << "Правильный" << std::endl;
    } else {
      std::cout << "Неправильный" << std::endl;
    }
    std::cout << "Стороны:     " << "a=" << geta() << " b=" << getb()
              << " c=" << getc() << std::endl;
    std::cout << "Углы:        " << "A=" << getA() << " B=" << getB()
              << " C=" << getC() << "\n"
              << std::endl;
  }
};

class quadrilateral : public shape {
 private:
  int a{}, b{}, c{}, d{};
  int A{}, B{}, C{}, D{};

 public:
  quadrilateral(int seta, int setb, int setc, int setd, int setA, int setB,
                int setC, int setD, std::string_view setname)
      : a{seta},
        b{setb},
        c{setc},
        d{setd},
        A{setA},
        B{setb},
        C{setC},
        D{setD},
        shape(4, setname) {}
  quadrilateral(int seta, int setb, int setc, int setd, int setA, int setB,
                int setC, int setD)
      : a{seta},
        b{setb},
        c{setc},
        d{setd},
        A{setA},
        B{setb},
        C{setC},
        D{setD},
        shape(4, "Четырехугольник") {}

  int geta() { return a; }
  int getb() { return b; }
  int getc() { return c; }
  int getd() { return d; }
  int getA() { return A; }
  int getB() { return B; }
  int getC() { return C; }
  int getD() { return D; }
  bool check() {
    return ((getsides() == 4) && (getA() + getB() + getC() + getD() == 360));
  }

  void draw() {
    std::cout << getname() << ":" << std::endl;
    if (check()) {
      std::cout << "Правильный" << std::endl;
    } else {
      std::cout << "Неправильный" << std::endl;
    }
    std::cout << "Стороны:     " << "a=" << geta() << " b=" << getb()
              << " c=" << getc() << " d=" << getd() << std::endl;
    std::cout << "Углы:        " << "A=" << getA() << " B=" << getB()
              << " C=" << getC() << " D=" << getD() << "\n"
              << std::endl;
  }
};

class square : public quadrilateral {
 public:
  square(int seta)
      : quadrilateral(seta, seta, seta, seta, 90, 90, 90, 90, "Квадрат") {}
  bool check() {
    return ((getA() + getB() + getC() + getD() == 360) && (getsides() == 4) &&
            (geta() == getb() == getc() == getd()));
  }
  void draw() {
    std::cout << getname() << ":" << std::endl;
    if (check()) {
      std::cout << "Правильный" << std::endl;
    } else {
      std::cout << "Неправильный" << std::endl;
    }
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
      : quadrilateral(seta, seta, seta, seta, setA, setB, setA, setB, "Ромб") {}
  bool check() {
    return ((geta() == getb() == getc() == getd()) && (getA() == getC()) &&
            (getB() == getD()));
  }

  void draw() {
    std::cout << getname() << ":" << std::endl;
    if (check()) {
      std::cout << "Правильный" << std::endl;
    } else {
      std::cout << "Неправильный" << std::endl;
    }
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
      : quadrilateral(seta, setb, seta, setb, 90, 90, 90, 90, "Прямоугольник") {
  }

  bool check() {
    return ((geta() == getc()) && (getb() == getd()) &&
            (getA() == getB() == getC() == getD()) && (getA() == 90));
  }
  void draw() {
    std::cout << getname() << ":" << std::endl;
    if (check()) {
      std::cout << "Правильный" << std::endl;
    } else {
      std::cout << "Неправильный" << std::endl;
    }
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
      : quadrilateral(seta, setb, seta, setb, setA, setB, setA, setB,
                      "Параллелограмм") {}
  bool check() {
    return ((geta() == getc()) && (getb() == getd()) && (getA() == getC()) &&
            (getB() == getD()));
  }

  void draw() {
    std::cout << getname() << ":" << std::endl;
    if (check()) {
      std::cout << "Правильный" << std::endl;
    } else {
      std::cout << "Неправильный" << std::endl;
    }
    std::cout << "Стороны:     " << "a=" << geta() << " b=" << getb()
              << " c=" << getc() << " d=" << getd() << std::endl;
    std::cout << "Углы:        " << "A=" << getA() << " B=" << getB()
              << " C=" << getC() << " D=" << getD() << "\n"
              << std::endl;
  }
};

void draw(shape* a) { a->draw(); }

int main(int argc, char** argv) {
  triangle triangle(10, 20, 30, 50, 60, 70);
  triangle90 triangle90(10, 20, 30, 50, 60);
  triangle_equal_two_sides triangle_equal_two_sides(10, 20, 60, 60);
  triangle_equal_all_sides triangle_equal_all_sides(50);
  quadrilateral quadrilateral(10, 20, 30, 40, 50, 60, 70, 80);
  rectangle rectangle(10, 20);
  square square(20);
  parallelogram parallelogram(20, 30, 30, 40);
  rhombus rhombus(30, 30, 40);

  draw(&triangle);
  draw(&triangle90);
  draw(&triangle_equal_two_sides);
  draw(&triangle_equal_all_sides);
  draw(&quadrilateral);
  draw(&rectangle);
  draw(&square);
  draw(&parallelogram);
  draw(&rhombus);

  return 0;
}