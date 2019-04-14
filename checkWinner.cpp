//
// Created by Zhou Yitao on 2019-04-14.
//

#include "Solution.h"

bool Solution::checkWinner(vector<vector<string>> codeList, vector<string> shoppingCart) {
    int cartIndex = 0;
    bool flag = true;
    for (const auto& list: codeList) {
        flag = false;
        for (int i = 0; i < list.size(); i++) {
            if (cartIndex == shoppingCart.size())
                return false;
            if (list[i] == shoppingCart[cartIndex] || list[i] == "anything") {
                cartIndex++;
            } else if (shoppingCart[i] == list[0]) {
                i = 1;
                cartIndex++;
            } else {
                i = 0;
                cartIndex++;
            }
        }
        flag = true;
    }
    return flag;
}
