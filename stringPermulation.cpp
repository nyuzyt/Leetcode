//
// Created by Zhou Yitao on 2019-03-27.
//

#include "Solution.h"

void helper(string s, string t, int s_index, int t_index, string cur, vector<string>& res) {
    if (s_index == s.size() && t_index == t.size())
        res.push_back(cur);
    if (s_index < s.size())
        helper(s, t, s_index + 1, t_index, cur + s[s_index], res);
    if (t_index < t.size())
        helper(s, t, s_index, t_index + 1, cur + t[t_index], res);
}

vector<string> Solution::stringPermulation(string s, string t) {
    vector<string> res;
    helper(s, t, 0, 0, "", res);
    return res;
}