#include <iostream>
#include <string>
#include <vector>

using namespace std;

string getOutput(string str);

int main() {
  string input  = " separation  of concerns is a sound strategy for software development ";
  string output = getOutput(input);
  cout << output;
}

string getOutput(string str) {
  vector<string> tokens;
  string tmp;
  string output;

  for (long unsigned int i=0; i <= str.size(); i++) {
    if (isspace(str[i]) || i == str.size()) {
      if (tmp.size() > 0) {
	output.append(tmp);
	output.append(1, '\n');
	tmp.clear();
      }
    } else {
      tmp.append(str, i, 1);
    }
  }
  return output;
}
			
