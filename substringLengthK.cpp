//
// Created by Zhou Yitao on 2019-04-13.
//

#include "Solution.h"

vector<string> Solution::substringLengthK(string s, int k) {
    vector<int> freq(256, 0);
    vector<string> res;
    int count = 0;
    for (int i = 0; i < s.size(); i++) {
        if (freq[s[i]] == 0)
            count++;
        freq[s[i]]++;
        if (i >= k) {
            if (freq[s[i - k]] == 1)
                count--;
            freq[s[i - k]]--;
        }
        if (count == k - 1 && i >= k - 1) {
            res.push_back(s.substr(i - k + 1, k));
        }
    }
    return res;
}