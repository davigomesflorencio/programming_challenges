#include <iostream>
#include <bits/stdc++.h>
#include <stack>

/**
 * 
 * 1047. Remove All Adjacent Duplicates In String
 * 
 **/

class Solution {
public:
    string removeDuplicates(string s) {
        
        stack<char> st;
        
        for(char x: s){
            if(st.empty()){
                st.push(x);
            }else{
                if(x==st.top()){
                    st.pop();
                }else{
                    st.push(x);
                }
            }
        }
        
        string res;
        while(!st.empty()){
            res = res +st.top();
            st.pop();
        }
        reverse(res.begin(),res.end());
        return res;
    }
    
};