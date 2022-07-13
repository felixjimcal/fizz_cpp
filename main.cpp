#include <assert.h>
#include <iostream>

extern const std::string WORD_FIZZ = "FIZZ";
extern const std::string WORD_BUZZ = "BUZZ";
extern const std::string WORD_FIZZ_BUZZ = "FIZZ_BUZZ";

class Printer {
public:
  static std::string CheckNumber(int number) {
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
};

int main() {
  assert(Printer::CheckNumber(3) == WORD_FIZZ);
  assert(Printer::CheckNumber(5) == WORD_BUZZ);
  assert(Printer::CheckNumber(15) == WORD_FIZZ_BUZZ);

  for (int i = 1; i < 101; i++) {
    std::cout << Printer::CheckNumber(i) << std::endl;
  }
  return 0;
}
