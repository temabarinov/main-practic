#include "common.h"
#define MODE 1

#ifndef MODE
#error need define MODE
#endif

#if MODE == 1
int add(int x, int y) { return x + y; }

#endif

int main(int argc, char** argv) {
#if MODE == 0
  std::cout << "Работаю в режиме тренировки" << std::endl;

#endif

#if MODE == 1
  int x{}, y{};
  std::cout << "Работаю в боевом режиме:" << std::endl;
  std::cout << "Введите первое число:" << std::endl;
  std::cin >> x;
  std::cout << "Введите второе число" << std::endl;
  std::cin >> y;
  std::cout << "Результат сложения:" << add(x, y) << std::endl;

#else
  std::cout << "Неизвестный режим.Завершение работы";
#endif

  return 0;
}