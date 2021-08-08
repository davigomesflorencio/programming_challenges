#include <bits/stdc++.h>

using namespace std;

/**
 *
 * 
 * 201. Bitwise AND of Numbers Range
 * https://leetcode.com/problems/bitwise-and-of-numbers-range/
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
    int rangeBitwiseAnd(int left, int right)
    {

        int res = 0;

        while (left and right)
        {
            int msb1 = msb(left);
            int msb2 = msb(right);

            int msb_val = 1 << msb1;
            if (msb1 == msb2)
            {
                res = res | msb_val;
            }
            else
            {
                break;
            }

            left -= msb_val;
            right -= msb_val;
        }
        return res;
    }
};