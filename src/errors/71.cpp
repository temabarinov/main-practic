#include <exception>

#include "common.h"

int function(std::string str, int forbidden_length) {
  if (str.length() == forbidden_length) {
    throw std::runtime_error("Вы ввели слово запретной длины! До свидания");
  } else {
    return str.length();
  }
}

int main(int argc, char** argv) {
  try {
    int forbidden_length;
    std::cout << "Введите запретную длину:" << std::endl;
    std::cin >> forbidden_length;
    std::string str{};
    while (true) {
      std::cout << "Введите слово:\n";
      std::cin >> str;
      if (str.length() == forbidden_length) {
        function(str, forbidden_length);
        break;
      }
      std::cout << "Длина слова " << '"' << str << '"' << " равна "
                << function(str, forbidden_length) << std::endl;
    }
  } catch (std::exception& exception) {
    std::cout << exception.what();

  } catch (...) {
  }

  return 0;
}