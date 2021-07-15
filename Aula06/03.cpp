#include <bits/stdc++.h>

using namespace std;


/**
 *
 * 26. Remove Duplicates from Sorted Array
 * https://leetcode.com/problems/remove-duplicates-from-sorted-array/
 *
 **/

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(nums.size()==0){
            return 0;
        }
        int end =1,start=1;
        int n=nums.size();
        
        while(start<n){
            if(nums[start]==nums[start-1]){
                start++;
            }else{
                nums[end]=nums[start];
                start++;
                end++;
            }    
        }
        
        return end;
    }
};