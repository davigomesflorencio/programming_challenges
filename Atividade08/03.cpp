#include <bits/stdc++.h>

using namespace std;

/**
 *
 * 
 * 1829. Maximum XOR for Each Query
 * https://leetcode.com/problems/maximum-xor-for-each-query/
 *
 * 
 **/

#define ALL(c) c.begin(), c.end()
class Solution
{
public:
    vector<int> getMaximumXor(vector<int> &nums, int maximumBit)
    {
        int max = (1 << maximumBit) - 1;

        vector<int> res;
        int aux = 0;

        for (int num : nums)
        {
            aux ^= num;
            res.push_back(aux ^ max);
        }

        reverse(ALL(res));
        return res;
    }
};