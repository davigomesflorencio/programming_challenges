#include <bits/stdc++.h>

using namespace std;

/**
 *
 * 1310. XOR Queries of a Subarray
 * https://leetcode.com/problems/xor-queries-of-a-subarray/
 *
 **/

class Solution
{
public:
    vector<int> xorQueries(vector<int> &arr, vector<vector<int>> &queries)
    {
        int n = arr.size();
        vector<int> prefixSum(n + 1);

        for (int i = 0; i < n; i++)
        {
            prefixSum[i + 1] = arr[i] ^ prefixSum[i];
        }

        vector<int> res;
        for (int i = 0; i < queries.size(); i++)
        {
            res.push_back(prefixSum[queries[i][0]] ^ prefixSum[queries[i][1] + 1]);
        }
        return res;
    }
};

int main()
{

    // vector<int> aux = {-3,2,-3,4,2};
    vector<int> arr = {1, 3, 4, 8};
    vector<vector<int>> queries = {{0, 1}, {1, 2}, {0, 3}, {3, 3}};

    Solution so;
    vector<int> res = so.xorQueries(arr, queries);

    cout << "Solution " << endl;

    for (auto x : res)
    {
        cout << x << " ";
    }

    return 0;
}
