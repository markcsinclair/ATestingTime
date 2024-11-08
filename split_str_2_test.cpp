#include <gtest/gtest.h>

#include "split_str_2_lib.h"

TEST(SplitStr2Test, GetOutputSingleToken) {
  vector<string> tokens = { "hello" };
  string output = getOutput(tokens);
  string expected("hello\n");
  EXPECT_TRUE(expected == output);
}
