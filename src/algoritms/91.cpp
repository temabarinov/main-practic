#include <iostream>
#include <vector>

using namespace std;

int count_greater(const vector<int>& arr, int point) {
  int left = 0;
  int right = arr.size() - 1;

  int firstGreater = arr.size();

  while (left <= right) {
    int mid = (left + right) / 2;

    if (arr[mid] > point) {
      firstGreater = mid;
      right = mid - 1;
    } else {
      left = mid + 1;
    }
  }

  return arr.size() - firstGreater;
}

int main() {
  vector<int> arr = {14, 16, 19, 32, 32, 32, 56, 69, 72};

  int point;

  cout << "Введите точку отсчета: ";
  cin >> point;

  cout << "Количество элементов больше " << point << ": "
       << count_greater(arr, point);

  return 0;
}