#include <iostream>

#include "common.h"

long long fibonacci(int n) {
  if (n <= 1) {
    return n;
  }
  return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
  int n;
  std::cout << "Enter n: ";
  std::cin >> n;

  std::cout << "Fibonacci(" << n << ") = " << fibonacci(n) << std::endl;

  return 0;
}
