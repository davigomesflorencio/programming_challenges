#include <bits/stdc++.h>
#include <iostream>
#include <stack>

using namespace std;

/**
 *
 * 1877. Minimize Maximum Pair Sum in Array
 *
 **/

class Solution
{
public:
  int minPairSum(vector<int> &nums)
  {
    sort(nums.begin(), nums.end());
    int i = 0, j = nums.size() - 1;
    int maxPair = 0;
    while (i < j)
    {
      maxPair = max(maxPair, nums[i] + nums[j]);
      i++;
      j--;
    }
    return maxPair;
  }
};

int main(int argc, char const *argv[])
{
  // Solution so;
  // string x="()(())";
  // string ola = so.removeOuterParentheses(x);

  // cout << ola << " ";

  cout << ' ' << endl;
  return 0;
}
