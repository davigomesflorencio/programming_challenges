#include <bits/stdc++.h>

using namespace std;


/**
 *
 * 46. Permutations
 * https://leetcode.com/problems/permutations/
 *
 **/


class Solution {
public:
    
    void helper(vector<int> nums, vector<int> cur,set<int> curset,vector<vector<int>>& res){
        if (cur.size()==nums.size())
        {
            res.push_back(cur);
        }else{
            for (auto x:nums)
            {
                if(curset.count(x)==0){
                    cur.push_back(x);
                    curset.insert(x);
                    helper(nums,cur,curset,res);

                    cur.pop_back();
                    curset.erase(x);
                }
            }
            
        }
        
    }

    vector<vector<int>> permute(vector<int>& nums) {
     
        vector<vector<int>> res;
        vector<int> cur;
        set<int> curset;

        helper(nums,cur,curset,res);

        return res;
    }
};