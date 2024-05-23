#include <bits/stdc++.h>
using namespace std;

// 2591. Distribute Money to Maximum Children

class Solution {
public:
    int distMoney(int money, int children) {
        int count = 0;

        // If children are greated than money --  not possible
        if(children > money)
            return -1;

        vector<int>vec(children, 1);
        money -= children;
        int count = 0;

        for(int i=0; i<children-2; i++) {
            if(money <= 0)
                return count;

            if(money >= 7) {
                vec[i] += 7;
                count++;
                money -= 7;
            }
        }

        if(money < 7) {
            return count;
        }

        if(money - 7 != 3) {
            count+=1;
            money-=7;
        }

        if(money == 7)
            count++;

        return count;
    }
};