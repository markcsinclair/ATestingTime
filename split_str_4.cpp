#include "split_str_4_lib.h"

#include <iostream>

int main() {
  string         input  = " separation  of concerns is a sound strategy for software development ";
  vector<string> tokens = getTokens(input);
  string         output = getOutput(tokens);
  cout << output;
}
