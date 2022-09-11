#include "printer.h"

Printer::Printer() {}

std::string Printer::CheckNumber(int number) {
  std::string result = std::to_string(number);
  if (number % 15 == 0) {
    result = WORD_FIZZ_BUZZ;
  } else if (number % 5 == 0) {
    result = WORD_BUZZ;
  } else if (number % 3 == 0) {
    result = WORD_FIZZ;
  }
  return result;
}
