#include <bits/stdc++.h>

using namespace std;


/**
 *
 * 795. Number of Subarrays with Bounded Maximum
 * https://leetcode.com/problems/number-of-subarrays-with-bounded-maximum/
 *
 **/


class Solution {
public:
    int numSubarrayBoundedMax(vector<int>& nums, int left, int right) {
        
         int ans = 0;
        int start = 0;
        int n = nums.size();
        int prev_count = 0;
        int end = 0;
        while(end < n){
            if( nums[end] >= left && nums[end] <= right){
                prev_count = end - start + 1;
                ans += prev_count;
            }else if( nums[end] < left ){
                ans += prev_count;
            }else{
                prev_count = 0;
                start = end+1;
            }
            end++;
        }
        return ans;
        
    }
};