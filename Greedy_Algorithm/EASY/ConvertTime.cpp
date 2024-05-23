#include <bits/stdc++.h>
using namespace std;

// 2224. Minimum Number of Operations to Convert Time

class Solution {
public:
    int convertTime(string current, string correct) {
    #if 0
        int time_gap = 0;
        int hcu, hco, mcu, mco;
        char col;
        int count = 0;

        std::istringstream ss(current);
        ss >> hcu;
        ss >> col;
        ss >> mcu;

        std::istringstream ss(correct);
        ss >> hco;
        ss >> col;
        ss >> mco;

        time_gap = (hco - hcu) * 60;
        time_gap += (mco - mcu);

        while(time_gap > 0) {
            if(time_gap >= 60) {
                time_gap -= 60;
                count++;
            } else if(time_gap >= 15) {
                time_gap -= 15;
                count++;
            } else if(time_gap >= 5) {
                time_gap -= 5;
                count++;
            } else if(time_gap >= 1) {
                time_gap -= 1;
                count++;
            } 
        }

        return count;
    #endif
        // Use a delimiter methot using getline

        int hcu, mcu, hco, mco;
        string token;

        istringstream ss(current);
        getline(ss, token, ':');
        hcu = stoi(token);
        getline(ss, token, ':');
        mcu = stoi(token);

        ss.clear();                     // First clear the ss to remove any error flags that might have been set
        ss.str(correct);                // To reset the ss to a new string
        getline(ss, token, ':');
        hco = stoi(token);
        getline(ss, token, ':');
        mco = stoi(token);

        int time_min = ((hco - hcu) * 60) + (mcu - mco);
        int count = 0;
        vector<int> time = {60, 15, 5, 1};

        for(auto t : time) {
            count += (time_min/t);
            time_min %= t;
        }

        return count;
    }
};