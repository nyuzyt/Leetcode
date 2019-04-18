//
// Created by Zhou Yitao on 2019-04-17.
//

#include "Solution.h"

int helper(string s, map<char, int> count) {
    if (s == "") return 0;
    int res = 2 * s.size() + 1;
    for (int i = 0; i < s.size(); i++) {
        int j = i + 1;
        while ( j < s.size() && s[i] == s[j]) j++;
        int num = 3 - (j - i);
        if (count[s[i]] >= num) {
            num = num < 0 ? 0 : num;
            count[s[i]] -= num;
            int tmp = helper(s.substr(0, i) + s.substr(j), count);
            if (tmp >= 0) res = min(res, num + tmp);
            count[s[i]] += num;
        }
    }
    return res == 2 * s.size() + 1 ? -1 : res;
}

int Solution::findMinStep(string board, string hand) {
    map<char, int> count;
    for (char c: hand)
        count[c]++;
    return helper(board, count);
}

