#include "split_str_3_lib.h"

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

string getOutput(vector<string> tokens, OutputStrategy os) {
  return os.output(tokens);
}

string OutputStrategy::output(vector<string> tokens) {
  string out;
  for (auto token : tokens) {
    out.append(token);
    out.append(1, '\n');
  }
  return out;
}


