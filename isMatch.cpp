//
// Created by Zhou Yitao on 2019-04-11.
//
#include "Solution.h"

bool Solution::isMatch(string s, string p) {
    int s_pos = 0;
    int p_pos = 0;
    int match = 0;
    int star = -1;
    while (s_pos < s.size()) {
        if (p_pos < p.size() && (s[s_pos] == p[p_pos] || p[p_pos] == '?')) {
            s_pos++;
            p_pos++;
        } else if (p_pos < p.size() && p[p_pos] == '*') {
            star = p_pos;
            match = s_pos;
            p_pos++;
        } else if (star != -1) {
            p_pos = star + 1;
            match++;
            s_pos = match;
        } else return false;
    }
    while(p_pos < p.size() && p[p_pos] == '*')
        p_pos++;
    return p_pos == p.size();
}