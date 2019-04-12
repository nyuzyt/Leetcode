//
// Created by Zhou Yitao on 2019-04-12.
//

#include "Solution.h"

int Solution::substringK(string s, int k) {
    int res = 0;
    for (int i = 0; i < s.size(); i++) {
        int count = 0;
        vector<int> freq(26, 0);
        for (int j = i; j < s.size(); j++) {
            if (freq[s[j] - 'a'] == 0)
                count++;
            freq[s[j] - 'a']++;
            if (count == k)
                res++;
            if (count > k)
                break;
        }
    }
    return res;
}