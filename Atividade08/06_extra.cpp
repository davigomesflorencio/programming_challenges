
#include <bits/stdc++.h>

using namespace std;

/**
 *
 * 
 * 1442. Count Triplets That Can Form Two Arrays of Equal XOR
 * https://leetcode.com/problems/count-triplets-that-can-form-two-arrays-of-equal-xor/
 *
 * 
 * prefix(i até k) == 0 
 * prefix(0 até k) ^ prefix(0 até i - 1) = 0
 * 
 * Para cada par prefix(i - 1, k), há k - i posições que podemos inserir j.
 * 
 **/

class Solution
{
public:
    int countTriplets(vector<int> &arr)
    {
        int n = arr.size();
        int res = 0;
        vector<int> prefix(n + 1);

        for (int i = 0; i < n; i++)
        {
            prefix[i + 1] = prefix[i] ^ arr[i];
        }

        for (int i = 0; i < n; i++)
            for (int k = i + 1; k < n; k++)
                if (prefix[k + 1] == prefix[i])
                {
                    // cout << k << " " << i << endl;
                    res += k - i;
                }
        return res;
    }
};