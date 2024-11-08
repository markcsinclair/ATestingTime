#include <gtest/gtest.h>

#include "split_str_1_lib.h"

TEST(SplitStr1Test, GetOutputSingleWord) {
  string str("hello");
  string output = getOutput(str);
  string expected("hello\n");
  EXPECT_TRUE(expected == output);
}

TEST(SplitStr1Test, GetOutputSingleWordSpaceBefore) {
  string str(" hello");
  string output = getOutput(str);
  string expected("hello\n");
  EXPECT_TRUE(expected == output);
}

TEST(SplitStr1Test, GetOutputSingleWordSpaceAfter) {
  string str("hello ");
  string output = getOutput(str);
  string expected("hello\n");
  EXPECT_TRUE(expected == output);
}

TEST(SplitStr1Test, GetOutputTwoWords) {
  string str("hello world");
  string output = getOutput(str);
  string expected("hello\nworld\n");
  EXPECT_TRUE(expected == output);
}

TEST(SplitStr1Test, GetOutputTwoWordsDoubleSpaceBetween) {
  string str("hello  world");
  string output = getOutput(str);
  string expected("hello\nworld\n");
  EXPECT_TRUE(expected == output);
}

