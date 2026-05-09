#include <cstdint>

#include "common.h"

using namespace std;

uint64_t real_string_hash(const string& s, uint64_t p, uint64_t n) {
  uint64_t hash = 0;
  uint64_t power = 1;

  for (size_t i = 0; i < s.length(); i++) {
    hash = (hash + (uint64_t)s[i] * power) % n;
    power = (power * p) % n;
  }

  return hash;
}

int main() {
  uint64_t p, n;

  cout << "Введите p: ";
  cin >> p;

  cout << "Введите n: ";
  cin >> n;

  string s;

  while (true) {
    cout << "Введите строку: ";
    cin >> s;

    uint64_t h = real_string_hash(s, p, n);

    cout << "Хэш строки " << s << " = " << h << endl;

    if (s == "exit") {
      break;
    }
  }

  return 0;
}