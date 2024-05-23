#include <bits/stdc++.h>
using namespace std;

//2864. Maximum Odd Binary Number

class Solution {
public:
    string maximumOddBinaryNumber(string s) { 
        int len = s.size();
        int count_1 = 0;

        for(auto b : s) {
            count_1 += (b == '1') ? 1 : 0;
        }

        string ret;
        for(int i=0; i<len-1; i++) {
            if(count_1 > 1) {
                ret += '1';
                count_1--;
            } else
                ret += '0';
        }

        ret += '1';

        return ret;
    }
};