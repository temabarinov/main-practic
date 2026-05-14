#include "common.h"

void merge_sort(int* arr, int size) {
  if (size <= 1) {
    return;
  }

  std::vector<int> temp(size);

  for (int part_size = 1; part_size < size; part_size *= 2) {
    for (int left = 0; left < size; left += part_size * 2) {
      int middle = std::min(left + part_size, size);
      int right = std::min(left + part_size * 2, size);

      int i = left;
      int j = middle;
      int k = left;

      while (i < middle && j < right) {
        if (arr[i] <= arr[j]) {
          temp[k] = arr[i];
          ++i;
        } else {
          temp[k] = arr[j];
          ++j;
        }
        ++k;
      }

      while (i < middle) {
        temp[k] = arr[i];
        ++i;
        ++k;
      }

      while (j < right) {
        temp[k] = arr[j];
        ++j;
        ++k;
      }

      for (int n = left; n < right; ++n) {
        arr[n] = temp[n];
      }
    }
  }
}

int main() {
  int arr1[] = {3, 43, 38, 29, 18, 72, 57, 61, 2, 33};
  int arr2[] = {88, 91, 87, 59, 53, 49, 29, 16, 4, 27, 28, 89, 2, 25, 74};
  int arr3[] = {24, 66, 20, 79, 30, 16, 19, 62, 94,
                59, 0,  7,  59, 90, 84, 60, 95, 62};

  int* arrays[] = {arr1, arr2, arr3};
  int sizes[] = {std::size(arr1), std::size(arr2), std::size(arr3)};

  for (int i = 0; i < 3; ++i) {
    std::cout << "Исходный массив: ";
    for (int j = 0; j < sizes[i]; ++j) {
      std::cout << arrays[i][j] << ' ';
    }
    std::cout << std::endl;

    merge_sort(arrays[i], sizes[i]);

    std::cout << "Отсортированный массив: ";
    for (int j = 0; j < sizes[i]; ++j) {
      std::cout << arrays[i][j] << ' ';
    }
    std::cout << std::endl << std::endl;
  }

  return 0;
}
