#include "split_str_3_lib.h"

#include <iostream>

int main() {
  string input  = " separation  of concerns is a sound strategy for software development ";
  LineOutputStrategy los;
  string output = getOutput(input, &los);
  cout << output;
}
