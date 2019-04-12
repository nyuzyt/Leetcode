//
// Created by Zhou Yitao on 2019-01-13.
//
#include "Solution.h"

string res;

void helper(string s, int left, int right) {
    while (left > 0 && right < s.size() && s[left] == s[right]) {
        left--;
        right++;
    }
    string cur = s.substr(left + 1, right - left - 1);
    if (cur.size() > res.size())
        res = cur;
}

string Solution::longestPalindrome(string s) {
    for (int i = 0; i < s.size(); i++) {
        helper(s, i, i);
        helper(s, i, i + 1);
    }
    return res;
}
