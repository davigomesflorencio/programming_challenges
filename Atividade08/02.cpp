#include <bits/stdc++.h>

using namespace std;

/**
 *
 * 
 * 762. Prime Number of Set Bits in Binary Representation
 * https://leetcode.com/problems/prime-number-of-set-bits-in-binary-representation/
 *
 * 
 **/
class Solution
{
public:
    bool isPrime(int n)
    {
        if (n <= 1)
        {
            return false;
        }
        if (n <= 3)
        {
            return true;
        }

        if (n % 2 == 0 || n % 3 == 0)
        {
            return false;
        }

        for (int i = 5; i <= n; i++)
        {
            if (n % i == 0)
            {
                return false;
            }
        }

        return true;
    }
    int countPrimeSetBits(int left, int right)
    {
        int count = 0;

        for (int i = left; i <= right; i++)
        {
            int aux = __builtin_popcount(i);
            if (aux != 1)
            {
                count += aux <= 3 ? 1 : (aux % 2 && aux % 3);
            }
        }

        return count;
    }

    int countPrimeSetBits2(int left, int right)
    {
        int count = 0;

        for (int i = left; i <= right; i++)
        {
            if (isPrime(__builtin_popcount(i)))
            {
                count += 1;
            }
        }

        return count;
    }
};
