#include "common.h"
#include "counter.h"

int main(int argc, char** argv) {
  std::string ask{};
  std::cout
      << "Вы хотите указать начаьное значение счётчика? Выберите да или нет:"
      << std::endl;
  std::cin >> ask;
  std::string operation{};

  if (ask == "Да" || ask == "да") {
    int first_number;
    std::cout << "Введите начальное значение счетчика:" << std::endl;
    std::cin >> first_number;
    counter ccounter(first_number);

    while (operation != "x") {
      std::cout << "Введите команду ('+', '-', '=' или 'x'):" << std::endl;
      std::cin >> operation;
      if (operation == "+") {
        ccounter.increment();

      } else if (operation == "-") {
        ccounter.decrement();
      } else if (operation == "=") {
        std::cout << ccounter.getCounter() << "\n";
      }
    }
    std::cout << "До свидания!" << std::endl;

  } else {
    counter ccounter(1);
    std::cout << "Введите команду ('+', '-', '=' или 'x'):" << std::endl;
    std::cin >> operation;
    while (operation != "x") {
      if (operation == "+") {
        ccounter.increment();

      } else if (operation == "-") {
        ccounter.decrement();
      } else if (operation == "=") {
        std::cout << ccounter.getCounter() << "\n";
      }
    }
    std::cout << "До свидания!" << std::endl;
  }

  return 0;
}