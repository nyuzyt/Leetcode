//
// Created by Zhou Yitao on 2019-04-11.
//

#include "Solution.h"

long parseNum(string& s, int& i) {
    long n = 0;
    while(i < s.length() && isdigit(s[i]))
        n = s[i++] - '0' + 10 * n;
    return n;
}

int calExpr (string& s, int& i) {
    vector<int> res;
    char op = '+';
    for (; i < s.size() && s[i] != ')'; i++) {
        if (s[i] == ' ') continue;
        long n = s[i] == '(' ? calExpr(s, ++i) : parseNum(s, i);
        switch(op) {
            case '+' : res.push_back(n); break;
            case '-' : res.push_back(-n); break;
            case '*' : res.back() *= n; break;
            case '/' : res.back() /= n; break;
        }
        if (i < s.size())
            op = s[i];
    }
    return accumulate(res.begin(), res.end(), 0);
}

int Solution::calculate(string s) {
    int i = 0;
    int res = calExpr(s, i);
    return res;
}
