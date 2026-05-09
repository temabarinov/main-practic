#include "common.h"

void func(int* arr, int n) {}

int main(int* arr, int point) {
  std::cout << "Введите количество чисел фибоначчи:" << std::endl;
  int n;
  std::cin >> n;
  int* arr = new int[n];
  arr[0] = 0;
  arr[1] = 1;

  return 0;
}