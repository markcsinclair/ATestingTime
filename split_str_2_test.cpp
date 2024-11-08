#include <gtest/gtest.h>

#include "split_str_2_lib.h"

TEST(SplitStr2Test, GetTokensSingleWord) {
  string str("hello");
  vector<string> tokens   = getTokens(str);
  vector<string> expected = { "hello" };
  EXPECT_TRUE(expected == tokens);
}

TEST(SplitStr2Test, GetTokensSingleWordSpaceBefore) {
  string str(" hello");
  vector<string> tokens   = getTokens(str);
  vector<string> expected = { "hello" };
  EXPECT_TRUE(expected == tokens);
}

TEST(SplitStr2Test, GetTokensSingleWordSpaceAfter) {
  string str("hello ");
  vector<string> tokens   = getTokens(str);
  vector<string> expected = { "hello" };
  EXPECT_TRUE(expected == tokens);
}

TEST(SplitStr2Test, GetTokensTwoWords) {
  string str("hello world");
  vector<string> tokens   = getTokens(str);
  vector<string> expected = { "hello", "world" };
  EXPECT_TRUE(expected == tokens);
}

TEST(SplitStr2Test, GetTokensTwoWordsDoubleSpaceBetween) {
  string str("hello  world");
  vector<string> tokens   = getTokens(str);
  vector<string> expected = { "hello", "world" };
  EXPECT_TRUE(expected == tokens);
}

TEST(SplitStr2Test, GetOutputSingleToken) {
  vector<string> tokens = { "hello" };
  string output = getOutput(tokens);
  string expected("hello\n");
  EXPECT_TRUE(expected == output);
}

TEST(SplitStr2Test, GetOutputTwoTokens) {
  vector<string> tokens = { "hello", "world" };
  string output = getOutput(tokens);
  string expected("hello\nworld\n");
  EXPECT_TRUE(expected == output);
}
