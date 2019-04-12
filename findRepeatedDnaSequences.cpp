//
// Created by Zhou Yitao on 2019-03-03.
//
#include "Solution.h"

vector<string> Solution::findRepeatedDnaSequences(string s) {
    set<string> seen;
    set<string> repeated;
    for (int i = 0; i < int(s.size()) - 9; i++) {
        string tmp = s.substr(i, 10);
        if (!seen.insert(tmp).second)
            repeated.insert(tmp);
    }
    vector<string> res(repeated.begin(), repeated.end());
    return res;
}