//
// Created by Zhou Yitao on 2018/11/12.
//
#include "Solution.h"

char getNextChar(vector<int>& count, vector<int>& index, int i) {
    int res = -1, max = 0;
    for (int j = 0; j < count.size(); j++) {
        if (count[j] > max && index[j] <= i){
            res = j;
            max = count[j];
        }
    }
    char tmp = res > -1 ? res + 'a' : '\0';
    return tmp;
}

string Solution::rearrangeString(string s, int k) {
    int default_value = 0;
    vector<int> count(26, default_value);
    vector<int> index(26, default_value);

    for (char c: s)
        count[c - 'a']++;

    string res;
    for (int i = 0; i < s.size(); i++) {
        char tmp = getNextChar(count, index, i);
        res += tmp;
        count[tmp - 'a']--;
        index[tmp - 'a'] = i + k;
    }
    return res.size() == s.size() ? res : "";;

}