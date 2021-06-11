#include <bits/stdc++.h>
#include <iostream>
#include <stack>

using namespace std;

/**
 *
 * 1710. Maximum Units on a Truck
 *
 **/

typedef pair<int, int> pi;

struct Comparador {
  constexpr bool operator()(pi const &a, pi const &b) const noexcept {
    return a.second < b.second || (a.second == b.second and a.first > b.first);
  }
};
class Solution {
public:
  int maximumUnits(vector<vector<int>> &boxTypes, int truckSize) {
    priority_queue<pi, vector<pi>, Comparador> pq;

    for (auto x : boxTypes) {
      pq.push(make_pair(x[0], x[1]));
    }
    int sum = 0;
    while (truckSize != 0 and !pq.empty()) {
      pi aux = pq.top();
      pq.pop();
      // cout<< truckSize<<" pair "<<aux.first<<" "<<aux.second<<endl;
      if (aux.first < truckSize) {
        truckSize -= aux.first;
        sum += aux.first * aux.second;

      } else {
        sum += truckSize * aux.second;
        truckSize = 0;
      }
    }
    return sum;
  }
};
