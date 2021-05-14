#include <iostream>
  
#include <bits/stdc++.h>

using namespace std;


/**
 * 
 * 1672. Richest Customer Wealth
 * 
 **/

class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        
        vector<int> aux;

        for (int i = 0; i < accounts.size(); i++)
        {
            aux.push_back(accumulate(accounts[i].begin(), accounts[i].end(),0));
        }
        return *max_element(aux.begin(),aux.end());
    }
};