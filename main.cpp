#include "Solution.h"
#include "Composite.h"
#include "TreeNode.h"


int main() {
    auto* solution = new Solution();
//    string s = "ADOBECODEBANC";
//    string t = "ABC";

    vector<vector<int>> input{{1,0,0,0,0},{1,1,1,1,1},
                              {1,0,0,0,1},{0,0,9,1,1}};

//    vector<int>v1(10,5);
//    vector<int>v2(5,10);
//    set<vector<int>> s;
//    s.insert(v1);
//    s.insert(v2);
//    cout << s.size() << endl;

//    TreeNode* root = new TreeNode({1, -5, 11, 1, 2, 4, -2});

//    map<int, double> res = solution->highFive({{1,91},{1,92},{2,93},{2,99},{2,98},{2,97},{1,60},{1,58},{2,100},{1,61}});

    vector<Connection> connections;
    connections.push_back(Connection("A", "B", 1));
    connections.push_back(Connection("A", "B", 1));
    connections.push_back(Connection("B", "C", 3));
    connections.push_back(Connection("B", "E", 2));
    connections.push_back(Connection("C", "E", 7));
    connections.push_back(Connection("E", "A", 6));
    connections.push_back(Connection("D", "E", 5));
    cout << connections.size() << endl;

    auto res = solution->getLowCost(connections);
    for (auto connection: res) {
        cout << connection.node1 << " " << connection.node2 << " " << connection.cost << endl;
    }

//    Composite composite;
//    composite.addRate("bank1", "eurusd", 1.1);
//    composite.addRate("bank2", "eurusd", 1.3);
//    composite.addRate("bank2", "rmbusd", 6.5);
//    composite.printCompositeRate();


    return 0;
}
