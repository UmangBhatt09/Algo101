#include <bits/stdc++.h>
using namespace std;

// 409. Longest Palindrome

class Solution {
public:
    int longestPalindrome(string s) {
        map<char, int> freq;
        int count = 0;
        bool odd = false;

        for(auto c : s) 
            freq[c]++;

        for(auto f : freq) {
            if(f.second % 2 == 0)
                count += f.second;
            else {
                odd = true;
                count += f.second - 1;
            }
        }

        if(odd)
            return count+1;
        
        return count;
    }
};