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

void printElement(const int* arr, int index) {
  int level = static_cast<int>(std::log2(index + 1));

  if (index == 0) {
    std::cout << level << " root " << arr[index] << std::endl;
  } else {
    int parentIndex = (index - 1) / 2;
    const char* role = (index % 2 == 1) ? "left" : "right";
    std::cout << level << " " << role << "(" << arr[parentIndex] << ") "
              << arr[index] << std::endl;
  }
}

void printArray(const int* arr, int size) {
  std::cout << "Исходный массив:";
  for (int i = 0; i < size; i++) {
    std::cout << " " << arr[i];
  }
  std::cout << std::endl;
}

int getLeftChild(int index) { return 2 * index + 1; }

int getRightChild(int index) { return 2 * index + 2; }

int getParent(int index) { return (index - 1) / 2; }

void travel(const int* arr, int size) {
  int current = 0;

  printArray(arr, size);
  printHeap(arr, size);

  while (true) {
    std::cout << "Вы находитесь здесь: ";
    printElement(arr, current);

    std::cout << "Введите команду: ";
    std::string command;
    std::cin >> command;

    if (command == "exit") {
      break;
    } else if (command == "up") {
      if (current == 0) {
        std::cout << "Ошибка! Отсутствует родитель" << std::endl;
      } else {
        current = getParent(current);
        std::cout << "Ок" << std::endl;
      }
    } else if (command == "left") {
      int child = getLeftChild(current);
      if (child >= size) {
        std::cout << "Ошибка! Отсутствует левый потомок" << std::endl;
      } else {
        current = child;
        std::cout << "Ок" << std::endl;
      }
    } else if (command == "right") {
      int child = getRightChild(current);
      if (child >= size) {
        std::cout << "Ошибка! Отсутствует правый потомок" << std::endl;
      } else {
        current = child;
        std::cout << "Ок" << std::endl;
      }
    } else {
      std::cout << "Ошибка! Неизвестная команда" << std::endl;
    }
  }
}

int main() {
  int arr1[] = {1, 3, 6, 5, 9, 8};
  travel(arr1, 6);

  return 0;
}
