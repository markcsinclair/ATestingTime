#ifndef SPLIT_STR_3_LIB_H
#define SPLIT_STR_3_LIB_H

#include <string>
#include <vector>

using namespace std;

class OutputStrategy {
  public:
    virtual string output(vector<string> tokens) = 0;
};

class LineOutputStrategy : public OutputStrategy {
  public:
    virtual string output(vector<string> tokens);
};

vector<string> getTokens(string str);
string         getOutput(vector<string> tokens, OutputStrategy* os);

#endif // SPLIT_STR_3_LIB_H
