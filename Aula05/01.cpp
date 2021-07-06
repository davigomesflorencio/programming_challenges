#include <bits/stdc++.h>

using namespace std;


/**
 *
 * 78. Subsets
 * https://leetcode.com/problems/subsets/
 *
 **/


class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        
        vector<vector<int>> res;
        int n =nums.size();
        for(int i=0;i<1<<n;i++){
            vector<int> aux;
            for(int j=0;j<n;j++){
                if(i & (1<<j)){
                    aux.push_back(nums[j]);
                }
            }
            res.push_back(aux);
        }
        return res;
    }
};