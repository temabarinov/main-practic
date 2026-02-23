#include "common.h"
class Fraction {
 private:
  int numerator_;
  int denominator_;

 public:
  double genNumerator() { return numerator_; }
  double getDenomerator() { return denominator_; }
  Fraction(int numerator, int denominator) {
    numerator_ = numerator;
    denominator_ = denominator;
  }
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
    this->setNumerator(this->genNumerator() * a.getDenomerator());
    this->setDenominator(this->getDenomerator() * a.genNumerator());
    return *this;
  }
};

int main(int argc, char** argv) {
  Fraction a{3, 4};
  Fraction b{4, 5};

  return 0;
}