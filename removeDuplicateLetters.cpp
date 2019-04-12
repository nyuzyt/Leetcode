//
// Created by Zhou Yitao on 2018/11/12.
//
#include "Solution.h"

int findLastPos(map<char, int> m) {
    int pos = INT_MAX;
    for (auto it: m)
        pos = min(pos, it.second);
    return pos;
}

string Solution::removeDuplicateLetters(string s) {
    map<char, int> m;
    for (int i = 0; i < s.size(); i++)
        m[s[i]] = i;
    string res;
    int start = 0, end = findLastPos(m);
    int size = m.size();
    for (int i = 0; i < size; i++) {
        char minChar = 'z' + 1;
        for (int j = start; j <= end; j++){
            if (m.find(s[j])!= m.end() && s[j] < minChar) {
                minChar = s[j];
                start = j + 1;
            }
        }
        res += minChar;
        m.erase(minChar);
        if (s[end] == minChar)
            end = findLastPos(m);
    }
    return res;
}
