#include <bits/stdc++.h>
using namespace std;

// 2160. Minimum Sum of Four Digit Number After Splitting Digits

class Solution {
public:
    int minimumSum(int num) {
        vector<int> v;

        for(int i=0; i<4; i++) {
            v.push_back(num%10);
            num/=10;
        }

        sort(v.begin(), v.end());

        return ( (v[0]*10 + v[2]) + (v[1]*10 + v[3]) );     // Greedy as we know smallest sum of 2 nums = two small nums added
    }
};

int main() {
    Solution sol;

    cout<<sol.minimumSum(4526);

    return 0;
}