#include <iostream>
  
#include <bits/stdc++.h>

using namespace std;


/**
 * 
 * 1431. Crianças com o maior número de doces
 * 
 **/

class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool> aux;

        for (int i = 0; i < candies.size(); i++)
        {
            if (candies[i]+extraCandies>=*max_element(candies.begin(),candies.end()))
            {
                aux.push_back(true);
            }else{
                aux.push_back(false);
            }
            
        }
        return aux;
    }
};