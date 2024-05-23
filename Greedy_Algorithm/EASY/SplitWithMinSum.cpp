#include <bits/stdc++.h>
using namespace std;

// 2578. Split With Minimum Sum

class Solution {
public:
    int splitNum(int num) {
        vector<int> v;

        while(num > 0) {
            v.push_back(num%10);
            num /= 10;
        }

        sort(v.begin(), v.end());

        string val1, val2;
        //int val1=0, val2=0;

        for(int i=0; i<v.size(); i+=2) {
            val1 += v[i] + '0';
            //val1 = val1 * 10 + v[i];
        }

        for(int i=1; i<v.size(); i+=2) {
            val2 += v[i] + '0';
            //val2 = val2 * 10 + v[i];
        }

        return stoi(val1) + stoi(val2);
        // return val1 + val2;
    }
};