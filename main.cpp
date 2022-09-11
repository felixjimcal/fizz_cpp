#include "printer.h"
#include <iostream>

int main() {
  for (int i = 1; i < 101; i++) {
    std::cout << Printer::CheckNumber(i) << std::endl;
  }
  return 0;
}
