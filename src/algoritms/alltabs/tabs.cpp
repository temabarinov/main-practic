#include "common.h"

int simple_string_hash(std::string s) {
  int sum = 0;
  for (int i = 0; i < s.length(); i++) {
    sum += static_cast<int>(s[i]);
  }
  return sum;
}

int main() {
  std::string s{};
  do {
    std::cout << "Введите строку:";
    std::cin >> s;
    std::cout << "\nНаивный хэш строки " << s << ":" << simple_string_hash(s)
              << "\n";
  } while (s != "exit");

  return 0;
}