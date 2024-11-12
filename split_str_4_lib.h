#ifndef SPLIT_STR_4_LIB_H
#define SPLIT_STR_4_LIB_H

#include <string>
#include <vector>
#include <istream>
#include <sstream>
#include <iterator>

using namespace std;

vector<string> getTokens(string str);
string         getOutput(vector<string> tokens);

#endif // SPLIT_STR_4_LIB_H
