//
// Created by Zhou Yitao on 2019-04-13.
//

#include "Solution.h"

int Solution::twoSumClosest(vector<int> nums, int target) {
    sort(nums.begin(), nums.end());
    int start = 0, end = nums.size() - 1;
    int res = INT_MAX;
    while (start < end) {
        if (nums[start] + nums[end] <= target) {
            res = min(res, target - nums[start] - nums[end]);
            start++;
        } else {
            res = min(res, nums[start] + nums[end] - target);
            end--;
        }
    }
    return res;
}