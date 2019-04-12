//
// Created by Zhou Yitao on 2019-01-21.
//
#include "Solution.h"

string Solution::fractionToDecimal(int numerator, int denominator) {
    if (numerator == 0) {
        return "0";
    }
    string res;
    res += ((numerator > 0) ^ (denominator > 0)) ? "-" : "";
    long num = abs((long) numerator);
    long den = abs((long) denominator);

    res += to_string(num / den);
    num %= den;
    if (num == 0) {
        return res;
    }

    res += ".";
    map<long, int> m;
    m[num] = res.size();

    while (num != 0) {
        num *= 10;
        res += (num / den);
        num %= den;
        if (m.find(num) != m.end()) {
            int index = m[num];
            res.insert(index, "(");
            res += ")";
            break;
        } else {
            m[num] = res.size();
        }
    }
    return res;
}