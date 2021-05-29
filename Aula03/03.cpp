#include <iostream>
#include <bits/stdc++.h>
#include <stack>

/**
 * 
 * 496. Next Greater Element I
 * 
 **/

class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        stack<int> st;
        map<int,int> next;
        
        for(auto x: nums2){
            if(st.empty()){
                st.push(x);
            }else{
                while(!st.empty() && x>st.top()){
                    next[st.top()]=x;
                    st.pop();
                }
                st.push(x);
            }
        }
        
        while(!st.empty()){
            next[st.top()]=-1;
            st.pop();
        }
        
        vector<int> res;
        for(int x : nums1){
            res.push_back(next[x]);
        }
        
        return res;
    }
};