#include <bits/stdc++.h>

using namespace std;


/**
 *
 * 47. Permutations II
 * https://leetcode.com/problems/permutations-ii/
 *
 **/

class Solution {
public:
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<vector<int>> res;
        
        do{
            res.push_back(nums);
        }while(next_permutation(nums.begin(),nums.end()));
        return res;
    }
};