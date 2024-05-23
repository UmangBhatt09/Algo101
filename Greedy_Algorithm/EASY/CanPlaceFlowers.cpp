#include <bits/stdc++.h>
using namespace std;

// 605. Can Place Flowers

class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        if(n == 0)
            return true;

        if(flowerbed.size() == 1) {
            if(n > 1)
                return false;
            else 
                return (flowerbed[0] == 0) ? true : false;
        }
        
        if(flowerbed[0] == 0 &&  flowerbed[1] == 0) {
            n--;
            flowerbed[0] = 1;
        }

        for(int i=1; i<flowerbed.size()-1; i++) {
            if(n == 0)
                return true;
            
            if(flowerbed[i] == 0 && flowerbed[i+1] == 0 && flowerbed[i-1] == 0) {
                n--;
                flowerbed[i] = 1;
            }
        }

        if(n == 0)
            return true;

        if(flowerbed[flowerbed.size()-1] == 0 && flowerbed[flowerbed.size()-2] == 0) {
            n--;
            flowerbed[flowerbed.size()-1] = 1;
        }

        if(n == 0)
            return true;

        return false;
    }
};

// Solu 2
/*
bool canPlaceFlowers(vector<int>& flowerbed, int n) {
    int count = 0;
    int size = flowerbed.size();
    if(flowerbed[0] == 0){
        count++;
        flowerbed[0] = 1;
    }

    for(int i = 1; i<size;i++ ){
        if(flowerbed[i - 1] + flowerbed[i] == 0){
            count++;
            flowerbed[i] = 1;
        }
        if(flowerbed[i - 1] + flowerbed[i] == 2){
            count--;
        }
    }
    if(count >= n)
    return true;
    return false;
}
*/