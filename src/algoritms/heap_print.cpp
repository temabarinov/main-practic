#include <cmath>

#include "common.h"

void printHeap(const int* arr, int size) {
  std::cout << "Пирамида:" << std::endl;
  for (int i = 0; i < size; i++) {
    int level = static_cast<int>(std::log2(i + 1));

    if (i == 0) {
      std::cout << level << " root " << arr[i] << std::endl;
    } else {
      int parentIndex = (i - 1) / 2;
      const char* role = (i % 2 == 1) ? "left" : "right";
      std::cout << level << " " << role << "(" << arr[parentIndex] << ") "
                << arr[i] << std::endl;
    }
  }
}

int main() {
  int arr1[] = {1, 3, 6, 5, 9, 8};
  int n1 = 6;

  int arr2[] = {94, 67, 18, 44, 55, 12, 6, 42};
  int n2 = 8;

  int arr3[] = {16, 11, 9, 10, 5, 6, 8, 1, 2, 4};
  int n3 = 10;

  std::cout << "Исходный массив: 1 3 6 5 9 8" << std::endl;
  printHeap(arr1, n1);
  std::cout << std::endl;

  std::cout << "Исходный массив: 94 67 18 44 55 12 6 42" << std::endl;
  printHeap(arr2, n2);
  std::cout << std::endl;

  std::cout << "Исходный массив: 16 11 9 10 5 6 8 1 2 4" << std::endl;
  printHeap(arr3, n3);

  return 0;
}
