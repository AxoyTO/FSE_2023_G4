#include <iostream>
#include "converter.hpp"

int main() {
  int number;
  std::cout << "Enter a number: ";
  std::cin >> number;

  auto DC = DecimalConverter(number);

  std::cout << "Binary: " << DC.to_binary() << std::endl;
  std::cout << "Hex: " << DC.to_hexadecimal() << std::endl;
  std::cout << "Roman: " << DC.to_roman() << std::endl;

  return 0;
}
