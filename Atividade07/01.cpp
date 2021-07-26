#include <bits/stdc++.h>

using namespace std;

/**
 *
 * 724. Find Pivot Index
 * https://leetcode.com/problems/find-pivot-index/
 *
 **/

class Solution
{
public:
    int pivotIndex(vector<int> &nums)
    {
        if (nums.size() < 3)
        {
            return -1;
        }

        vector<int> acc;

        acc.push_back(0);

        for (int i = 1; i < nums.size() + 1; i++)
        {
            acc.push_back(acc[i - 1] + nums[i - 1]);
        }
        acc.push_back(acc.back());

        int tam = acc.size() - 1;
        for (int i = 1; i < tam; i++)
        {
            if (acc[i - 1] == (acc[tam] - acc[i - 1] - nums[i - 1]))
            {
                return i - 1;
            }
        }
        return -1;
    }
};

int main()
{

    vector<int> aux = {2, -1, 1};

    Solution so;
    int res = so.pivotIndex(aux);
    cout << "Solution " << res << endl;
    return 0;
}
