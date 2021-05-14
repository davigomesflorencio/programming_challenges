#include <iostream>
  
#include <bits/stdc++.h>

using namespace std;


/**
 * 
 * 1773. Count Items Matching a Rule
 * 
 **/

class Solution {
public:
    int countMatches(vector<vector<string>>& items, string ruleKey, string ruleValue) {
        int aux=0;
        for (int i = 0; i < items.size(); i++)
        {
            if(ruleKey=="type"){
                if(items[i][0]==ruleValue){
                    aux++;
                }
            }

            if(ruleKey=="color"){
                if(items[i][1]==ruleValue){
                    aux++;
                }
            }

            if(ruleKey=="name"){
                if(items[i][2]==ruleValue){
                    aux++;
                }
            }
        }
        return aux;
    }
};