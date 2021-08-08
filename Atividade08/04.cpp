#include <bits/stdc++.h>

using namespace std;

/**
 *
 * 
 * 1342. Number of Steps to Reduce a Number to Zero
 * https://leetcode.com/problems/number-of-steps-to-reduce-a-number-to-zero/
 *
 * 
 **/

class Solution
{
public:
    int Subtract(int a, int b)
    {
        return a + (~b + 1);
    }

    int numberOfSteps(int num)
    {
        int res = 0;

        while (num)
        {

            if ((num & 1) == 0)
            {
                num >>= 1;
            }
            else
            {
                num = Subtract(num, 1);
            }
            res += 1;
        }

        return res;
    }
};
