#include "Solution.h"
#include "Composite.h"



int main() {
    auto* solution = new Solution();
//    string s = "ADOBECODEBANC";
//    string t = "ABC";

    vector<int> input{4,5,6,7,8,1,2,3};

//    vector<int>v1(10,5);
//    vector<int>v2(5,10);
//    set<vector<int>> s;
//    s.insert(v1);
//    s.insert(v2);
//    cout << s.size() << endl;

//    solution->printPattern(5);
    int res = solution->search(input, 8);
    cout << res << endl;

//    Composite composite;
//    composite.addRate("bank1", "eurusd", 1.1);
//    composite.addRate("bank2", "eurusd", 1.3);
//    composite.addRate("bank2", "rmbusd", 6.5);
//    composite.printCompositeRate();

    return 0;
}
