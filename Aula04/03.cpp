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
  int lastStoneWeight(vector<int> &stones) {
    priority_queue<int> pq(stones.begin(), stones.end());

    while (pq.size() > 1) {
      auto x = pq.top();
      pq.pop();
      auto y = pq.top();
      pq.pop();
      if (x != y) {
        pq.push(x - y);
      }
      if (pq.empty()) {
        return 0;
      }
      return pq.top();
    }
  };

  int main(int argc, char const *argv[]) {
    vector<int> nums1 = {2, 7, 4, 1, 8, 1};

    Solution so;
    int a = so.lastStoneWeight(nums1);
    printf("%d", a);
    return 0;
  }
