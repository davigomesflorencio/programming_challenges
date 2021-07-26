#include <bits/stdc++.h>

using namespace std;

/**
 *
 * 1413. Minimum Value to Get Positive Step by Step Sum
 * https://leetcode.com/problems/minimum-value-to-get-positive-step-by-step-sum/
 *
 **/

class Solution
{
public:
    int minStartValue(vector<int> &nums)
    {

        int minValue = nums[0];

        int total = 0;
        for (auto num : nums)
        {
            total += num;
            if (total < minValue)
                minValue = total;
        }
        if (minValue >= 1)
            return 1;
        else
            return 1 - minValue;
    }
};

int main()
{

    // vector<int> aux = {-3,2,-3,4,2};
    vector<int> aux = {1, 2};

    Solution so;
    int res = so.minStartValue(aux);
    cout << "Solution " << res << endl;
    return 0;
}
