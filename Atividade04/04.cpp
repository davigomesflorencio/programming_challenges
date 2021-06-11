#include <bits/stdc++.h>
#include <iostream>
#include <stack>

using namespace std;

/**
 *
 * 1403. Minimum Subsequence in Non-Increasing Order
 *
 **/

typedef pair<char, int> pi;
#define ALL(c) c.begin(), c.end()

class Solution {
public:
  vector<int> minSubsequence(vector<int> &nums) {
    vector<int> res;
    int sum = accumulate(ALL(nums), 0), aux = 0;
    sort(ALL(nums));
    for (int i = nums.size() - 1; i >= 0; i--) {
      res.push_back(nums[i]);
      aux += nums[i];
      if (aux > sum - aux) {
        return res;
      }
    }
    return res;
  }
};

int main() {
  vector<int> vec;
  //   vec = {4, 3, 10, 9, 8};
  vec = {4, 4, 7, 6, 7};

  Solution so;
  vec = so.minSubsequence(vec);
  for (auto a : vec) {
    cout << a << " ";
  }
  return 0;
}