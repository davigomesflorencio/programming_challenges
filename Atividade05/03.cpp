
#include <bits/stdc++.h>

using namespace std;


/**
 *
 * https://leetcode.com/problems/sum-of-all-subset-xor-totals/
 * 1863. Sum of All Subset XOR Totals
 *
 **/

class Solution {
public:
    int subsetXORSum(vector<int>& nums) {
        int len = nums.size();
        int res = 0;
        for(int i = 0; i < (1<<len); i ++){
            int sum = 0;
            for(int j = 0; j < len; j++)
                if(i & (1 << j)) sum ^= nums[j];
            res += sum;
        }
        return res;
    }
};
