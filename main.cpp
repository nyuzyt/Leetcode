#include "Solution.h"
#include "Composite.h"
#include "TreeNode.h"


int main() {
    auto* solution = new Solution();
//    string s = "ADOBECODEBANC";
//    string t = "ABC";

    vector<int> input{5, 5,4, 6};

//    vector<int>v1(10,5);
//    vector<int>v2(5,10);
//    set<vector<int>> s;
//    s.insert(v1);
//    s.insert(v2);
//    cout << s.size() << endl;

//    TreeNode* root = new TreeNode({1, -5, 11, 1, 2, 4, -2});

//    map<int, double> res = solution->highFive({{1,91},{1,92},{2,93},{2,99},{2,98},{2,97},{1,60},{1,58},{2,100},{1,61}});
    int res = solution->twoSumClosest({-1, 2, 1, -4}, 4);
    cout << res << endl;

//    Composite composite;
//    composite.addRate("bank1", "eurusd", 1.1);
//    composite.addRate("bank2", "eurusd", 1.3);
//    composite.addRate("bank2", "rmbusd", 6.5);
//    composite.printCompositeRate();


    return 0;
}
