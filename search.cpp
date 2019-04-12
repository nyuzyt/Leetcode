//
// Created by Zhou Yitao on 2019-04-11.
//

#include "Solution.h"

int Solution::search(vector<int>& nums, int target) {
    if (nums.size() == 0)
        return -1;
    int low = 0, high = nums.size() - 1;
    while (low + 1 < high) {
        int mid = (high - low) / 2 + low;
        if (nums[mid] == target)
            return mid;
        if (nums[mid] > target) {
            if (nums[mid] > target && target >= nums[low])
                high = mid;
            else
                low = mid;
        } else {
            if (nums[mid] > nums[low])
                low = mid;
            else
                high = mid;
        }
    }
    if (nums[low] == target) return low;
    if (nums[high] == target) return high;
    return -1;
}