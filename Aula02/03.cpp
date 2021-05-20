#include <iostream>
  
#include <bits/stdc++.h>

using namespace std;


/**
 * 
 * 704. Binary Search
 * 
 **/

class Solution {
public:
    int search(vector<int>& nums, int target) {
        auto aux = lower_bound(nums.begin(),nums.end(),target);

        if(aux == nums.end() || *aux >target){
            return -1;
        }else{
            return aux-nums.begin();
        }
    }
};
