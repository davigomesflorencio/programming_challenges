#include <bits/stdc++.h>

using namespace std;

/**
 *
 * 1732. Find the Highest Altitude
 * https://leetcode.com/problems/find-the-highest-altitude/
 *
 **/

class Solution {
public:
    int largestAltitude(vector<int>& gain) {
 
        vector <int> alt;
 
        alt.push_back(0);
        int max = 0;
        for(auto x : gain){
            alt.push_back( alt.back() + x);
            if( alt.back() > max){
                max = alt.back();
            }
        }
 
        return max;
 
 
    }
};