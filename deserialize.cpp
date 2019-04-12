//
// Created by Zhou Yitao on 2019-01-12.
//
#include "Solution.h"

NestedInteger Solution::deserialize(string s) {
    if (s[0] != '[') {
        NestedInteger res(stoi(s));
        return res;
    }

    stack<NestedInteger> mystack;
    NestedInteger res;
    mystack.push(res);
    int start = 1;
    for (int i = 1; i < s.size(); i++) {
        char c = s[i];
        if (c == '[') {
            NestedInteger nestedInteger;
            mystack.top().add(nestedInteger);
            mystack.push(nestedInteger);
            start = i + 1;
        } else if (c == ',' || c == ']') {
            if (i > start) {
                int val = stoi(s.substr(start, i - start));
                cout << val << endl;
                NestedInteger nestedInteger(val);
                mystack.top().add(nestedInteger);
            }
            start = i + 1;
            if (c == ']') {
                mystack.pop();
            }
        }
    }
    return mystack.top();
}