#include "split_str_4_lib.h"

vector<string> getTokens(string str) {
  istringstream buffer(str);
  vector<string> tokens{istream_iterator<string>(buffer), {}};
  return tokens;
}

string getOutput(vector<string> tokens) {
  string output;
  for (auto token : tokens) {
    output.append(token);
    output.append(1, '\n');
  }
  return output;
}
