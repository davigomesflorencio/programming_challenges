#include <bits/stdc++.h>

using namespace std;

/**
 *
 * 485. Max Consecutive Ones
 * https://leetcode.com/problems/max-consecutive-ones/
 *
 **/

class Solution
{
public:
    int findMaxConsecutiveOnes(vector<int> &nums)
    {
        int k = 0;
        int cont=0;
        int start = 0;
        int end = nums.size();

        while (start < end)
        {
            if(nums[start] == 1){
                cont += 1;
                k = max(k, cont);
            }else{   
                cont = 0;
            }
            start++;
        }

        return k;
    }
};

int main()
{
    vector<int> vec = {1, 1, 0, 1};

    Solution so;

    int k = so.findMaxConsecutiveOnes(vec);

    cout << "k " << k << endl;
    return 0;
}
