#include <iostream>
#include <vector>
#include <map>
#include <stack>
#include <queue>
#include <set>
#include <algorithm>
#include <numeric>
#include "NestedInteger.cpp"
#include "TreeNode.h"
#include "Connection.h"
#include "LinkedNode.h"
using namespace std;

class Solution {
public:
    bool isOneEditDistance(string s, string t);
    string rearrangeString(string s, int k);
    string removeDuplicateLetters(string s);
    vector<vector<int>> getFactors(int n);
    string getPermutation(int n, int k);
    int lengthLongestPath(string);
    NestedInteger deserialize(string);
    vector<pair<int, int>> kSmallestPairs(vector<int>&, vector<int>&, int);
    string longestPalindrome(string);
    vector<string> letterCombinations(string);
    vector<int> findSubstring(string, vector<string>&);
    void solveSudoku(vector<vector<char>>&);
    string minWindow(string, string);
    string fractionToDecimal(int numerator, int denominator);
    vector<string> findRepeatedDnaSequences(string s);
    uint32_t reverseBits(uint32_t n);
    vector<string> stringPermulation(string s, string t);
    string removeThreeMore(string s);
    int leastInstruction(int target);
    vector<int> removeElement(vector<int> arr, int index);
    int digitCount(int num);
    void bubbleSort(vector<int>& arr);
    void insertionSort(vector<int>& arr);
    void selectionSort(vector<int>& arr);
    void replaceValues(vector<int>& arr);
    void reverseArray(vector<int>& arr);
    void evenOdd(int num);
    vector<int> manchester(vector<int> arr);
    void printPattern(int row);
    void nearlySortedArray(vector<int>& input);
    int calculate(string s);
    bool isMatch(string s, string p);
    int search(vector<int>& nums, int target);
    int substringK(string s, int k);
    int lengthOfLongestSubstringKDistinct(string s, int k);
    pair<int, int> truck(vector<int> v, int target);
    TreeNode* findMaxAverageSubtree(TreeNode* root);
    map<int, double> highFive(vector<pair<int,int>> records);
    int twoSumClosest(vector<int> nums, int target);
    static int removeObstacle(vector<vector<int>> maze);
    vector<Connection> getLowCost(vector<Connection> connections);
    vector<string> substringLengthK(string s, int k);
    int maxMinPath(vector<vector<int>> matrix);
    int maxMinPathdfs(vector<vector<int>> matrix);
    vector<pair<int, int>> pairSum(int maxDist,
            vector<pair<int, int>> forward, vector<pair<int, int>> backward);
    LinkedNode* reverse2ndHalf(LinkedNode* head);
    int gcdOfArray(vector<int> nums);
};
