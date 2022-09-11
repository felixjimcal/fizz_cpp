#include "printer.cpp"
#include <gtest/gtest.h>

namespace {

TEST(FizzTest, MultiplesOfThreeFizz) {
  EXPECT_EQ(WORD_FIZZ, Printer::CheckNumber(3));
  EXPECT_EQ(WORD_FIZZ, Printer::CheckNumber(6));
  EXPECT_EQ(WORD_FIZZ, Printer::CheckNumber(9));
}

TEST(FizzTest, MultiplesOfFiveBUZZ) {
  EXPECT_EQ(WORD_BUZZ, Printer::CheckNumber(5));
  EXPECT_EQ(WORD_BUZZ, Printer::CheckNumber(10));
  EXPECT_EQ(WORD_BUZZ, Printer::CheckNumber(20));
}

TEST(FizzTest, MultiplesOfFifteenFizzBuzz) {
  EXPECT_EQ(WORD_FIZZ_BUZZ, Printer::CheckNumber(45));
  EXPECT_EQ(WORD_FIZZ_BUZZ, Printer::CheckNumber(60));
  EXPECT_EQ(WORD_FIZZ_BUZZ, Printer::CheckNumber(75));
}

} // namespace
