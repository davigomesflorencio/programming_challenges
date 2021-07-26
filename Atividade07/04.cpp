#include <bits/stdc++.h>

using namespace std;

/**
 *
 * 1094. Car Pooling
 * https://leetcode.com/problems/car-pooling/
 *
 **/

class Solution
{
public:
    bool carPooling(vector<vector<int>> &trips, int capacity)
    {
        vector<int> d(1001);

        for (auto trip : trips)
        {
            d[trip[1]] -= trip[0];
            d[trip[2]] += trip[0];
        }

        for (const int c : d)
            if ((capacity += c) < 0)
                return false;
        return true;
    }
};