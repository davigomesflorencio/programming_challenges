#include <bits/stdc++.h>

using namespace std;

/**
 *
 * 303. Range Sum Query - Immutable
 * https://leetcode.com/problems/range-sum-query-immutable/
 *
 **/

class NumArray
{

private:
    vector<int> acc;

public:
    NumArray(vector<int> &nums)
    {

        acc.push_back(0);

        for (auto x : nums)
        {
            acc.push_back(acc.back() + x);
        }
    }

    int sumRange(int left, int right)
    {
        return acc[right + 1] - acc[left];
    }
};