#include <iostream>
  
#include <bits/stdc++.h>

using namespace std;


/**
 * 
 * 1470. Shuffle the Array
 * 
 **/

class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> aux;

        for (int i = 0; i < n; i++)
        {
           aux.push_back(nums[i]);
           aux.push_back(nums[n+i]);
        }
        
        return aux;
    }
};