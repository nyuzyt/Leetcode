#include "Solution.h"


int Solution::lengthLongestPath(string input) {
    stack<int> s;
    int res = 0;
    int pos;
    s.push(0);
    while (input.size() > 0) {
        pos = input.find("\n");
        string token = pos == -1 ? input : input.substr(0, pos);
        int level = token.rfind("\t") + 1;
        while (level + 1 < s.size()) {
            s.pop();
        }
        int len = s.top() + token.size() - level + 1;
        s.push(len);
        if (token.find('.') != -1) {
            res = max(res, len - 1);
        }
        if (pos == -1)
            pos = input.size();
        input.erase(0, pos + 1);
    }

    return res;
}