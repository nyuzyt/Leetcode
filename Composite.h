//
// Created by Zhou Yitao on 2019-04-01.
//

#ifndef LEETCODE_COMPOSITE_H
#define LEETCODE_COMPOSITE_H
#include <map>
#include <string>
#include <iostream>

using namespace std;

class Composite {
private:
    map<string, map<string, double>> record;
public:
    void addRate(string bank, string currency, double rate);
    void printCompositeRate();
};


#endif //LEETCODE_COMPOSITE_H
