#include <bits/stdc++.h>

using namespace std;

/**
 *
 * 209. Minimum Size Subarray Sum
 * https://leetcode.com/problems/minimum-size-subarray-sum/
 *
 **/

class Solution
{
public:
    int minSubArrayLen(int target, vector<int> &nums)
    {

        int n = nums.size();

        if (n == 0)
        {
            return 0;
        }

        int init = 0, end = 0, sum = 0;
        int minValue = INT_MAX;

        while (end < n)
        {
            while (sum < target)
            {
                if (end < n)
                {
                    cout << nums[end] << " ";
                    sum += nums[end];
                    end++;
                }
                else
                {
                    break;
                }
            }
            // cout << "sum =" << sum << endl;

            if (sum >= target)
            {
                while (sum >= target && init <= end)
                {
                    // cout<<" diff "<<end - init <<endl;
                    minValue = min(minValue, end - init);
                    // cout<<"minValue "<<minValue<<" ";
                    sum -= nums[init];
                    // cout << " sum =" << sum << endl;
                    init++;
                }
            }
        }
        if (minValue == INT_MAX)
        {
            return 0;
        }
        return minValue;
    }
};

int main()
{

    vector<int> aux = {1, 1, 1, 1, 1, 1, 1, 1};
    // vector<int> aux = {2,3,1,2,4,3};

    Solution so;
    int res = so.minSubArrayLen(11, aux);
    cout << "Solution " << res << endl;
    return 0;
}
