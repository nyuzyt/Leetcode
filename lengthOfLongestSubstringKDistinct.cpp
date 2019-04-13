//
// Created by Zhou Yitao on 2019-04-12.
//

#include "Solution.h"

int Solution::lengthOfLongestSubstringKDistinct(string s, int k) {
    vector<int> frequency(26, 0);
    int start = 0, last = 0, count = 0;
    int res = 0;
    while(last < s.size() - 1) {
        while (count <= k && last < s.size()) {
            if (frequency[s[last] - 'a'] == 0)
                count++;
            frequency[s[last] - 'a']++;
            last++;
        }
        res = max(res, last - start - 1);
        while (count > k) {
            if (frequency[s[start] - 'a'] == 1)
                count--;
            frequency[s[start] - 'a']--;
            start++;
        }

    }
    return res;
}