//
// Created by Zhou Yitao on 2019-04-13.
//

#include "Solution.h"

int calGCD(int num1, int num2) {
    if (num2 == 0)
        return num1;
    if (num2 > num1)
        swap(num1, num2);
    return calGCD(num2, num1 % num2);
}

int Solution::gcdOfArray(vector<int> nums) {
    if (nums.empty())
        return 0;
    if (nums.size() == 1)
        return nums[0];
    int gcd = calGCD(nums[0], nums[1]);
    for (int i = 2; i < nums.size(); i++) {
        gcd = calGCD(nums[i], gcd);
    }
    return gcd;
}