#include <bits/stdc++.h>

using namespace std;

/**
 *
 * 1893. Check if All the Integers in a Range Are Covered
 * https://leetcode.com/problems/check-if-all-the-integers-in-a-range-are-covered/
 *
 **/

class Solution {
public:
    bool isCovered(vector<vector<int>>& ranges, int left, int right) {
       int interval[50 + 2]; 
       memset( interval, 0, sizeof(interval) ); 
       for(auto rng : ranges){
           int l = rng[0];
           int r = rng[1];
           interval[l]   += 1;
           interval[r+1] -= 1;   
       }
       int acc = 0;
       for(int i = 0; i <= right; i++){
           acc += interval[i];
 
           if( i >= left && acc == 0 )
               return false;
       }   
       return true;       
    }
};