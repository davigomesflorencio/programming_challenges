#include <bits/stdc++.h>
#include <iostream>
#include <stack>

using namespace std;

/**
 *
 * 1046. Last Stone Weight
 *
 **/
class Solution {
public:
  int minOperations(vector<int> &nums) {
    if (nums.size() == 1) {
      return 0;
    }
    int sum = 0;
    for (int i = 1; i < nums.size(); i++) {
      if (nums[i - 1] >= nums[i]) {
        sum += nums[i - 1] - nums[i] + 1;
        nums[i] += nums[i - 1] - nums[i] + 1;
      }
    }
    return sum;
  }
};

int main(int argc, char const *argv[]) {
  vector<int> nums1 = {2, 7, 4, 1, 8, 1};

  Solution so;
  int a = so.lastStoneWeight(nums1);
  printf("%d", a);
  // nums1 = so.intersection(nums1,nums2);

  // for (auto it = nums1.begin(); it != nums1.end(); ++it)
  //     cout << *it << " ";

  // cout<<' '<<endl;
  return 0;
}
