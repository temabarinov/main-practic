#include <iostream>

#include "common.h"

long long fibonacci_helper(int n, long long memo[]) {
  if (n <= 1) {
    return n;
  }
  if (memo[n] != 0) {
    return memo[n];
  }
  memo[n] = fibonacci_helper(n - 1, memo) + fibonacci_helper(n - 2, memo);
  return memo[n];
}

long long fibonacci(int n) {
  long long memo[100] = {0};
  return fibonacci_helper(n, memo);
}

int main() {
  int n;
  std::cout << "Enter n: ";
  std::cin >> n;

  std::cout << "Fibonacci(" << n << ") = " << fibonacci(n) << std::endl;

  return 0;
}
