#include <iostream>
  
#include <bits/stdc++.h>

using namespace std;


/**
 * 
 * 1295. Find Numbers with Even Number of Digits
 * 
 **/

class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int aux=0;
        for (int i = 0; i < nums.size(); i++)
        {
           if(to_string(nums[i]).size() % 2 ==0){
               aux++;
           }
        }
        return aux;
    }
};