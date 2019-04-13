#include <iostream>
#include <vector>
#include <map>
#include <stack>
#include <queue>
#include <set>
#include <algorithm>
#include <numeric>
#include "NestedInteger.cpp"
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
};
