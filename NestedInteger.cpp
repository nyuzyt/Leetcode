//
// Created by Zhou Yitao on 2019-01-12.
//
#include <vector>

using namespace std;

class NestedInteger {
public:

    vector<NestedInteger> nestedInteger;

    NestedInteger() {};

    NestedInteger(int value) {};

    bool isInteger() const {return true;};

    int getInteger() const {return 0;};

    void setInteger(int value) {};

    void add(const NestedInteger &ni) {};

    const vector<NestedInteger> &getList() const {
        return nestedInteger;
    };
};