#include <bits/stdc++.h>

using namespace std;

/**
 *
 * 
 * 461. Hamming Distance
 * https://leetcode.com/problems/hamming-distance/
 *
 * 
 **/

class Solution
{
public:
    int msb(int n)
    {
        int m = __builtin_clz(n);
        return 31 - m;
    }
    int hammingDistance(int x, int y)
    {
        int res = x ^ y;
        int count = 0;
        while (res)
        {
            if ((res & 1) == 1)
            {
                count++;
            }
            res >>= 1;
        }
        return count;
    }
};