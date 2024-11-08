#include "split_str_3_lib.h"

string getOutput(string str,  OutputStrategy* os) {
  string tmp;
  for (long unsigned int i=0; i <= str.size(); i++) {
    if (isspace(str[i]) || i == str.size()) {
      if (tmp.size() > 0) {
	os->append(tmp);
	tmp.clear();
      }
    } else {
      tmp.append(str, i, 1);
    }
  }
  return os->output();
}

void OutputStrategy::append(string token) {
  tokens.push_back(token);
}

string LineOutputStrategy::output() {
  string out;
  for (auto token : tokens) {
    out.append(token);
    out.append(1, '\n');
  }
  return out;
}


