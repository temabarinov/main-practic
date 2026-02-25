#include "common.h"
class Fraction {
 private:
  int numerator_;
  int denominator_;

 public:
  int genNumerator() { return numerator_; }
  int getDenomerator() { return denominator_; }
  Fraction(int numerator, int denominator) {
    numerator_ = numerator;
    denominator_ = denominator;
  }
  Fraction() : numerator_{1}, denominator_{1} {};
  double drob() { return genNumerator() / getDenomerator(); }
  void setNumerator(int setNumer) { numerator_ = setNumer; }
  void setDenominator(int setDomi) { denominator_ = setDomi; }
  Fraction operator+(Fraction a) {
    Fraction c{};
    c.setNumerator(this->genNumerator() * a.getDenomerator() +
                   a.genNumerator() * this->getDenomerator());
    c.setDenominator(this->getDenomerator() * a.getDenomerator());
    return c;
  }
  Fraction operator-(Fraction a) {
    Fraction c{};
    c.setNumerator(this->genNumerator() * a.getDenomerator() -
                   a.genNumerator() * this->getDenomerator());
    c.setDenominator(this->getDenomerator() * a.getDenomerator());
    return c;
  }
  Fraction operator*(Fraction a) {
    Fraction c{};
    c.setNumerator(this->genNumerator() * a.genNumerator());
    c.setDenominator(this->getDenomerator() * a.getDenomerator());
    int gcd = std::gcd(c.genNumerator(), c.getDenomerator());
    c.setNumerator(c.genNumerator() / gcd);
    c.setDenominator(c.getDenomerator() / gcd);
    return c;
  }
  Fraction operator/(Fraction a) {
    Fraction c{};
    if (this->getDenomerator() == 0 || a.getDenomerator() == 0) {
      return c;
    }
    c.setNumerator(this->genNumerator() * a.getDenomerator());
    c.setDenominator(this->getDenomerator() * a.genNumerator());
    return c;
  }
  Fraction operator++() {
    Fraction c(1, 1);
    *this = *this + c;
    return *this;
  }
  Fraction operator--(int) {
    Fraction temp{};
    temp.setNumerator(this->genNumerator());
    temp.setDenominator(this->getDenomerator());
    this->setNumerator((this->genNumerator() - 1));
    this->setNumerator((this->getDenomerator() - 1));
    return temp;
  }
};

int main(int argc, char** argv) {
  Fraction a{};
  Fraction b{};
  Fraction c{};

  int num{}, denum{};
  std::cout << "Введите числитель дроби 1:\n";
  std::cin >> num;
  std::cout << "Введите знаменатель дроби 1:\n";
  std::cin >> denum;
  a.setNumerator(num);
  a.setDenominator(denum);
  std::cout << "Введите числитель дроби 2:\n";
  std::cin >> num;
  std::cout << "Введите знаменатель дроби 2:\n";
  std::cin >> denum;
  b.setNumerator(num);
  b.setDenominator(denum);

  std::cout << a.genNumerator() << "/" << a.getDenomerator() << " + "
            << b.genNumerator() << "/" << b.getDenomerator() << " = "
            << (a + b).genNumerator() << "/" << (a + b).getDenomerator()
            << "\n";

  std::cout << a.genNumerator() << "/" << a.getDenomerator() << " - "
            << b.genNumerator() << "/" << b.getDenomerator() << " = "
            << (a - b).genNumerator() << "/" << (a - b).getDenomerator()
            << "\n";
  std::cout << a.genNumerator() << "/" << a.getDenomerator() << " * "
            << b.genNumerator() << "/" << b.getDenomerator() << " = "
            << (a * b).genNumerator() << "/" << (a * b).getDenomerator()
            << "\n";
  std::cout << a.genNumerator() << "/" << a.getDenomerator() << " / "
            << b.genNumerator() << "/" << b.getDenomerator() << " = "
            << (a / b).genNumerator() << "/" << (a / b).getDenomerator()
            << "\n";
  std::cout << "++" << a.genNumerator() << "/" << a.getDenomerator() << " * "
            << b.genNumerator() << "/" << b.getDenomerator() << " = "
            << ((++a) * b).genNumerator() << "/" << (a * b).getDenomerator()
            << "\n";
  std ::cout << "Значение дроби 1 = " << a.genNumerator() << "/"
             << a.getDenomerator() << "\n";
  std::cout << a.genNumerator() << "/" << a.getDenomerator() << "--" << " * "
            << b.genNumerator() << "/" << b.getDenomerator() << " = "
            << ((a--) * b).genNumerator() << "/" << (a * b).getDenomerator()
            << "\n";
  std::cout << "Значение дроби 1 = " << a.genNumerator() << "/"
            << a.getDenomerator() << "\n";
  return 0;
}