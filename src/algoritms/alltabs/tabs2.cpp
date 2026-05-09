#include "common.h"

int find_substring_light_rabin_karp(const std::string s, const std::string f) {
  int idx = 0;
  for (int i = 0; i < s.length(); i++) {
    bool ok = true;
    if (s[i] == f[0]) {
      for (int j = 0; j < f.length(); j++) {
        if (s[i + j] != f[j]) {
          ok = false;
          break;
        }
      }
      if (ok) {
        return i;
      }
    }
  }
  return -1;
}

int main() {
  std::string s{};
  std::string f{};
  std::cout << "Введите строку, в которой будет осуществляться поиск:";
  std::cin >> s;
  while (f != "exit") {
    std::cout << "\nВведите подстроку, которую нужно найти:";
    std::cin >> f;
    if (find_substring_light_rabin_karp(s, f) == -1) {
      std::cout << "\nПодстрока " << f << " не найдена";
    } else {
      std::cout << "Подстрока hello найдена по индексу: "
                << find_substring_light_rabin_karp(s, f) << std::endl;
    }
  }

  return 0;
}