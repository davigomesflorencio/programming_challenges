#include <iostream>
  
#include <bits/stdc++.h>

using namespace std;


/**
 * 
 * 1760. Limite Mínimo de Bolas em um Saco
 * 
 **/

class Solution {
public:
    int reduce(vector<int>& nums, int maxOperations,int penalty){
        long long ope=0;
        for(int x:nums){
            if(x%penalty==0){
                ope+=x/penalty -1;
            }else{
                ope+=x/penalty;
            }
        } 
        return ope <=maxOperations;

    }


    int minimumSize(vector<int>& nums, int maxOperations) {
        int start =1;
        int end= *max_element(nums.begin(),nums.end());
        int sol=-1;
        while (start<=end)
        {
            int m =start + (end -start)/2;
            if(reduce(nums,maxOperations,m)){
                sol=m;
                end =m-1;
            }else{
                start =m+1;
            }
        }
        return sol;
    }
};