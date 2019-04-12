//
// Created by Zhou Yitao on 2019-01-15.
//

#include "Solution.h"

string Solution::minWindow(string s, string t) {
    vector<int> map(128,0);
    int counter = t.size(); // check whether the substring is valid
    int begin = 0, end = 0; //two pointers, one point to tail and one  head
    int d = INT_MAX; //the length of substring

    int head = 0;

    for (char c: t) {
        /* initialize the hash map here */
        map[c]++;
    }

    while (end < s.size()) {

        if (map[s[end++]]-- > 0){
            /* modify counter here */
            counter--;
        }

        // valid
        while(counter == 0){

            /* update d here if finding minimum*/
            if (d > end - begin)
                d = end - (head = begin);

            //increase begin to make it invalid/valid again
            if (map[s[begin++]]++ == 0) {
                /*modify counter here*/
                counter++;
            }
        }

        /* update d here if finding maximum*/
    }
    return d == INT_MAX? "" : s.substr(head, d);
}