#ifndef SPLIT_STR_3_LIB_H
#define SPLIT_STR_3_LIB_H

#include <string>
#include <vector>

using namespace std;

class OutputStrategy {
  public:
    void append(string token);
    virtual string output() = 0;
  protected:
    vector<string> tokens;
};

class LineOutputStrategy : public OutputStrategy {
  public:
    virtual string output();
};

string getOutput(string str, OutputStrategy* os);

#endif // SPLIT_STR_3_LIB_H
