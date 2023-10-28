#pragma once
#include <iostream>

class DecimalConverter {
 public:
  DecimalConverter(const int& number) : number_(number) {}

  unsigned int to_binary();
  std::string to_hexadecimal();
  std::string to_roman();
  std::string to_roman(int n);

 private:
  const int number_;
};
