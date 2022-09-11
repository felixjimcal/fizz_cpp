#ifndef PRINTER_H
#define PRINTER_H

#include <string>

const std::string WORD_FIZZ = "FIZZ";
const std::string WORD_BUZZ = "BUZZ";
const std::string WORD_FIZZ_BUZZ = "FIZZ_BUZZ";

class Printer {
public:
  Printer();
  static std::string CheckNumber(int number);
};

#endif // PRINTER_H
