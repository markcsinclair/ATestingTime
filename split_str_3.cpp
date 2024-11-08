#include "split_str_3_lib.h"

#include <iostream>

int main() {
  string         input  = " separation  of concerns is a sound strategy for software development ";
  vector<string> tokens = getTokens(input);
  LineOutputStrategy los;
  string         output = getOutput(tokens, &los);
  cout << output;
}
