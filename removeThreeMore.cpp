//
// Created by Zhou Yitao on 2019-04-01.
//

#include "Solution.h"

string Solution::removeThreeMore(string s) {
    stack<pair<char, int>> stk;
    for (int i = 0; i < s.size(); i++) {
        int num = 1;
        while (i < s.size() - 1 && s[i] == s[i + 1]) {
            num++;
            i++;
        }
        if (num < 3) {
            if (stk.empty() || stk.top().first != s[i])
                stk.push(make_pair(s[i], num));
            else if (stk.top().second + num >= 3) {
                stk.pop();
            } else {
                num += stk.top().second;
                stk.pop();
                stk.push(make_pair(s[i], num));
            }
        }
    }
    string res;
    while (!stk.empty()) {
        for (int i = 0; i < stk.top().second; i++)
            res = stk.top().first + res;
        stk.pop();
    }
    return res;
}

