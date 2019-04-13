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

//    solution->printPattern(5);
    auto res = solution->truck(input, 10);
    cout << res.first << " " << res.second << endl;

//    Composite composite;
//    composite.addRate("bank1", "eurusd", 1.1);
//    composite.addRate("bank2", "eurusd", 1.3);
//    composite.addRate("bank2", "rmbusd", 6.5);
//    composite.printCompositeRate();

    return 0;
}
