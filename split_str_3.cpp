#include "split_str_3_lib.h"

#include <iostream>

int main() {
  string         input  = " separation  of concerns is a sound strategy for software development ";
  vector<string> tokens = getTokens(input);
  OutputStrategy os;
  string         output = getOutput(tokens, os);
  cout << output;
}
