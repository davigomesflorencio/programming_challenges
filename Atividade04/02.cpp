#include <bits/stdc++.h>
#include <iostream>
#include <stack>

using namespace std;

/**
 *
 * 455. Assign Cookies
 *
 **/


class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        sort(g.begin(), g.end());
        sort(s.begin(), s.end());
        int count=0;
        int cookie=0;
        for(int i=0; i < g.size() && cookie < s.size(); ){
            if(s[cookie]>=g[i]){
                count++;
                i++;
            }
            cookie++;
        }    
        
        return count;
    }
};