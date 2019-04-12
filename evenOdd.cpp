//
// Created by Zhou Yitao on 2019-04-05.
//

#include "Solution.h"

void Solution::evenOdd(int num) {
    int i, print = 0;
    if (num % 2 == 0) {
        print = 0;
        for (int i = 0; i < num; i++) {
            cout << print << " ";
            print += 2;
        }
    } else {
        print = 1;
        for (int i = 0; i < num; i++) {
            cout << print << " ";
            print += 2;
        }
    }
}