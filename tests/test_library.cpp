#include <gtest/gtest.h>

#include <kiwilang/kiwilang.hpp>
using namespace kiwilang;

TEST(LibraryTest, Add) {
  // Consider adding more test cases
  EXPECT_EQ(add(2, 3), 5);
  EXPECT_EQ(add(-1, 1), 0);
  EXPECT_EQ(add(0, 0), 0);
  EXPECT_EQ(add(-2, -3), -5);
}
