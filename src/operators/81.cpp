
#include "common.h"
class Fraction {
 private:
  int numerator_;
  int denominator_;

 public:
  double genNumerator() const { return numerator_; }
  double getDenomerator() const { return denominator_; }
  Fraction(int numerator, int denominator) {
    numerator_ = numerator;
    denominator_ = denominator;
  }
  double drob() const { return genNumerator() / getDenomerator(); }
  bool operator==(Fraction a) const {
    if (this->drob() == a.drob()) {
      return true;
    } else {
      return false;
    }
  }
  bool operator!=(Fraction a) const { return !(*this == a); }
  bool operator>(Fraction a) const {
    if (this->drob() > a.drob()) {
      return true;
    } else {
      return false;
    }
  }
  bool operator<(Fraction a) const { return a > *this; }
  bool operator>=(Fraction a) const { return !(*this < a); }
  bool operator<=(Fraction a) const { return !(*this > a); }
};

int main() {
  Fraction f1(4, 3);
  Fraction f2(6, 11);

  std::cout << "f1" << ((f1 == f2) ? " == " : " not == ") << "f2" << '\n';
  std::cout << "f1" << ((f1 != f2) ? " != " : " not != ") << "f2" << '\n';
  std::cout << "f1" << ((f1 < f2) ? " < " : " not < ") << "f2" << '\n';
  std::cout << "f1" << ((f1 > f2) ? " > " : " not > ") << "f2" << '\n';
  std::cout << "f1" << ((f1 <= f2) ? " <= " : " not <= ") << "f2" << '\n';
  std::cout << "f1" << ((f1 >= f2) ? " >= " : " not >= ") << "f2" << '\n';
  return 0;
}