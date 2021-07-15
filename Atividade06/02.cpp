#include <bits/stdc++.h>

using namespace std;


/**
 *
 * 283. Move Zeroes
 * https://leetcode.com/problems/move-zeroes/
 *
 **/

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int start=0;
        int end=nums.size();
        int k=0;
        
        while(start<end){
            if(nums[start]!=0){
                nums[k++]=nums[start];
            }
            start++;
        }
        
        for(int i=k;i<end;i++){
            nums[i]=0;
        }
            
    }
};