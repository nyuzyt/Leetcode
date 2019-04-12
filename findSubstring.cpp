//
// Created by Zhou Yitao on 2019-01-14.
//
#include "Solution.h"

vector<int> Solution::findSubstring(string s, vector<string>& words) {
    vector<int> res;
    int n = words.size();
    if (n == 0)
        return res;
    int m = words[0].size();
    if (m == 0)
        return res;
    map<string, int> myMap;
    for (string word: words) {
        myMap[word]++;
    }
    for (int i = 0; i <= (int)s.size() - n * m; i++) {
        map<string, int> tmpMap(myMap.begin(), myMap.end());
        int cum = 0;
        int j = i;
        while (cum < n) {
            string tmpStr = s.substr(j, m);
            if (tmpMap.find(tmpStr) == tmpMap.end() ||  tmpMap[tmpStr] < 1) {
                break;
            }
            tmpMap[tmpStr]--;
            cum++;
            j += m;
        }
        if (cum == n)
            res.push_back(i);
    }
    return res;
}