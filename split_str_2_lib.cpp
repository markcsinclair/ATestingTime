#include "split_str_2_lib.h"

vector<string> getTokens(string str) {
  vector<string> tokens;
  string tmp;
  for (long unsigned int i=0; i <= str.size(); i++) {
    if (isspace(str[i]) || i == str.size()) {
      if (tmp.size() > 0) {
	tokens.push_back(tmp);
	tmp.clear();
      }
    } else {
      tmp.append(str, i, 1);
    }
  }
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
