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
    this->setNumerator(this->genNumerator() * a.getDenomerator() +
                       a.genNumerator() * this->getDenomerator());
    this->setDenominator(this->getDenomerator() * a.getDenomerator());
    return *this;
  }
  Fraction operator-(Fraction a) {
    this->setNumerator(this->genNumerator() * a.getDenomerator() -
                       a.genNumerator() * this->getDenomerator());
    this->setDenominator(this->getDenomerator() * a.getDenomerator());
    return *this;
  }
  Fraction operator*(Fraction a) {
    this->setNumerator(this->genNumerator() * a.genNumerator());
    this->setDenominator(this->getDenomerator() * a.getDenomerator());
    return *this;
  }
  Fraction operator/(Fraction a) {
    if (this->getDenomerator() == 0 || a.getDenomerator() == 0) {
      return;
    }
    this->setNumerator(this->genNumerator() * a.getDenomerator());
    this->setDenominator(this->getDenomerator() * a.genNumerator());
    return *this;
  }
};

int main(int argc, char** argv) {
  Fraction a{};
  Fraction b{};
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

  return 0;
}