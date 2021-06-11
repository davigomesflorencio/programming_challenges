#include <bits/stdc++.h>
#include <iostream>
#include <stack>

using namespace std;

/**
 *
 * 1725. Number Of Rectangles That Can Form The Largest Square
 *
 **/

class Solution
{
public:
  int countGoodRectangles(vector<vector<int>> &rectangles)
  {
    vector<int> aux;
    int maxP = 0, minAux;
    for (auto x : rectangles)
    {
      minAux = min(x[0], x[1]);
      aux.push_back(minAux);
      maxP = max(maxP, minAux);
    }
    return count(aux.begin(), aux.end(), maxP);
  }
};