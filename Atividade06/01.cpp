#include <bits/stdc++.h>

using namespace std;


/**
 *
 * 27. Remove Element
 * https://leetcode.com/problems/remove-element/
 *
 **/


class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int k=0;
        int start=0;
        int end=nums.size();
        
        while(start<end){
            if(nums[start]!=val){
                nums[k++]=nums[start];
                
            }
            start++;
        }
        
        return k;
    }
};