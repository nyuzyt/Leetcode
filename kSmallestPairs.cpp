//
// Created by Zhou Yitao on 2019-01-13.
//

#include "Solution.h"

struct comparePair{
    bool operator()(const pair<int, int>&i, const pair<int, int>&j) {
        return i.first + i.second > j.first + j.second;
    }
};

vector<pair<int, int>> Solution::kSmallestPairs(vector<int>& nums1, vector<int>& nums2, int k) {
    priority_queue<pair<int, int>, vector<pair<int, int>>, comparePair> pq;
    vector<pair<int, int>> res;
    for (int i = 0; i < nums1.size(); i++) {
        for (int j = 0; j < nums2.size(); j++) {
            pq.push(make_pair(nums1[i], nums2[j]));
            cout << pq.size() << endl;
            cout << nums1.size() << nums2.size() << endl;
            if (pq.size() > nums1.size() * nums2.size() - k) {
                auto tmp = pq.top();
                res.push_back(tmp);
                pq.pop();
            }
        }
    }
    return res;
}