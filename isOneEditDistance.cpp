//
// Created by Zhou Yitao on 2018/11/11.
//
#include "Solution.h"


bool Solution::isOneEditDistance(string s, string t){
    for (int i = 0; i < min(s.size(), t.size()); i++) {
        if (s[i] != t[i]){
            if (s.size() == t.size())
                return s.substr(i + 1) == t.substr(i + 1);
            if (s.size() > t.size())
                return s.substr(i + 1) == t.substr(i);
            else
                return s.substr(i) == t.substr(i + 1);
        }
    }
    return abs((int)s.size() - (int)t.size()) == 1;
}

