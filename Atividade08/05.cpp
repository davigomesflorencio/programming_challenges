#include <bits/stdc++.h>

using namespace std;

/**
 *
 * 
 * 342. Power of Four
 * https://leetcode.com/problems/power-of-four/
 *
 * 
 **/


class Solution
{
public:
    bool isPowerOfFour(int n)
    {
        if (n == 1)
        {
            return true;
        }
        if (n < 4)
        {

            return false;
        }
        while (n % 4 == 0)
        {
            n >>= 2;
        }
        return n == 1;
    }


    bool isPowerOfFour2(int n)
    {
        //0b0101 0101 0101 0101 0101 0101 0101 0101
        return n > 0 && !(n & (n - 1)) && (n & 0x55555555);
    }
};