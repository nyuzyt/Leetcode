//
// Created by Zhou Yitao on 2019-01-13.
//

#include "Solution.h"

string mapping[10] = {"0", "1", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};

vector<string> Solution::letterCombinations(string digits) {
    vector<string> res;
    if (digits.size() == 0)
        return res;
    int high = digits[0] - '0';
    if (digits.size() == 1) {
        for (char c: mapping[high]) {
            res.push_back(to_string(c));
        }
        return res;
    }
    for (char c: mapping[high]) {
        for (const string &str: letterCombinations(digits.substr(1))) {
            res.push_back(c + str);
        }
    }
    return res;
}