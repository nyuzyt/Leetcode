//
// Created by Zhou Yitao on 2019-04-05.
//

#include "Solution.h"

void Solution::printPattern(int row) {
    for (int i = 0; i < row; i++) {
        char ch = 'a';
        for (int j = 0; j <= i; j++) {
            cout << (ch++);
        }
        cout << endl;
    }
}