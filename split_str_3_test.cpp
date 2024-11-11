#include <gtest/gtest.h>

#include "split_str_3_lib.h"

class TestLineOutputStrategy : public LineOutputStrategy {
  public:
    vector<string> getTokens();
};

vector<string> TestLineOutputStrategy::getTokens() {
  return tokens;
};

TEST(SplitStr3Test, GetTokensSingleWord) {
  string str("hello");
  TestLineOutputStrategy tlos;
  getOutput(str, &tlos);
  vector<string> tokens   = tlos.getTokens();
  vector<string> expected = { "hello" };
  EXPECT_TRUE(expected == tokens);
}

TEST(SplitStr3Test, GetTokensSingleWordSpaceBefore) {
  string str(" hello");
  TestLineOutputStrategy tlos;
  getOutput(str, &tlos);
  vector<string> tokens   = tlos.getTokens();
  vector<string> expected = { "hello" };
  EXPECT_TRUE(expected == tokens);
}

TEST(SplitStr3Test, GetTokensSingleWordSpaceAfter) {
  string str("hello ");
  TestLineOutputStrategy tlos;
  getOutput(str, &tlos);
  vector<string> tokens   = tlos.getTokens();
  vector<string> expected = { "hello" };
  EXPECT_TRUE(expected == tokens);
}

TEST(SplitStr3Test, GetTokensTwoWords) {
  string str("hello world");
  TestLineOutputStrategy tlos;
  getOutput(str, &tlos);
  vector<string> tokens   = tlos.getTokens();
  vector<string> expected = { "hello", "world" };
  EXPECT_TRUE(expected == tokens);
}

TEST(SplitStr3Test, GetTokensTwoWordsDoubleSpaceBetween) {
  string str("hello  world");
  TestLineOutputStrategy tlos;
  getOutput(str, &tlos);
  vector<string> tokens   = tlos.getTokens();
  vector<string> expected = { "hello", "world" };
  EXPECT_TRUE(expected == tokens);
}

TEST(SplitStr3Test, GetOutputSingleToken) {
  LineOutputStrategy los;
  los.append("hello");
  string out = los.output();
  string expected("hello\n");
  EXPECT_TRUE(expected == out);
}

TEST(SplitStr3Test, GetOutputTwoTokens) {
  LineOutputStrategy los;
  los.append("hello");
  los.append("world");
  string out = los.output();
  string expected("hello\nworld\n");
  EXPECT_TRUE(expected == out);
}
