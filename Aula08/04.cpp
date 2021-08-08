#include <bits/stdc++.h>

using namespace std;

/**
 *
 * 476. Number Complement
 * https://leetcode.com/problems/number-complement/
 *
 **/

class Solution
{
public:
    int findComplement(int num)
    {

        int res = 0;
        int pow = 1;

        while (num)
        {
            if (num % 2 == 0)
            {
                res += pow;
            }
            pow <<= 1;
            num >>= 1;
        }

        return res;
    }
};