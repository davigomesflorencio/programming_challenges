#include <bits/stdc++.h>

using namespace std;

/**
 *
 * 268. Missing Number
 * https://leetcode.com/problems/missing-number/
 *
 **/

class Solution
{
public:
    int missingNumber(vector<int> &nums)
    {

        int sum = 0;

        for (int i = 0; i <= nums.size(); i++)
        {
            sum ^= i;
        }

        for (auto x : nums)
        {
            sum ^= x;
        }
        return sum;
    }
};