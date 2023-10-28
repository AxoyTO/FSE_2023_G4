#include "converter.hpp"

using DC = DecimalConverter;

unsigned int DC::to_binary() {
  int remainder, binary = 0, var = 1, number = number_;

  do {
    remainder = number % 2;
    number = number / 2;
    binary = binary + (remainder * var);
    var = var * 10;
  } while (number > 0);

  return binary;
}

std::string DC::to_hexadecimal() {
  int number = number_;
  int hexArray[8];  // Contains hex values backwards
  int i = 0;        // counter
  std::string hex = "";
  char HexValues[] = "0123456789ABCDEF";

  while (number > 15) {           // Dec to Hex Algorithm
    hexArray[i++] = number % 16;  // Gets remainder
    number >>= 4;                 // This will divide by 2^4=16 and is faster
  }
  hexArray[i] = number;  // Gets last value

  while (i >= 0)
    hex += HexValues[hexArray[i--]];

  return hex;
}

std::string DecimalConverter::to_roman() {
  return to_roman(number_);
}

std::string DC::to_roman(int n) {
  auto fill = [](char c, int n) {
    std::string s = "";
    while (n--)
      s += c;
    return s;
  };

  if (n < 4)
    return fill('I', n);
  if (n < 6)
    return fill('I', 5 - n) + "V";
  if (n < 9)
    return std::string("V") + fill('I', n - 5);
  if (n < 11)
    return fill('I', 10 - n) + "X";
  if (n < 40)
    return fill('X', n / 10) + to_roman(n % 10);
  if (n < 60)
    return fill('X', 5 - n / 10) + 'L' + to_roman(n % 10);
  if (n < 90)
    return std::string("L") + fill('X', n / 10 - 5) + to_roman(n % 10);
  if (n < 110)
    return fill('X', 10 - n / 10) + "C" + to_roman(n % 10);
  if (n < 400)
    return fill('C', n / 100) + to_roman(n % 100);
  if (n < 600)
    return fill('C', 5 - n / 100) + 'D' + to_roman(n % 100);
  if (n < 900)
    return std::string("D") + fill('C', n / 100 - 5) + to_roman(n % 100);
  if (n < 1100)
    return fill('C', 10 - n / 100) + "M" + to_roman(n % 100);
  if (n < 4000)
    return fill('M', n / 1000) + to_roman(n % 1000);
  return "?";
}
