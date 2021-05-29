#include <iostream>
#include <bits/stdc++.h>
#include <stack>

/**
 * 
 * 1381. Design a Stack With Increment Operation
 * 
 **/


class CustomStack {
    
private:
    vector<int> st;
    vector<int> inc;
    int maxStack;
public:
    CustomStack(int maxSize) {
        inc.resize(maxSize);
        this->maxStack =maxSize;
    }
    
    void push(int x) {
        if(st.size() <maxStack){
            st.push_back(x);
        }
    }
    
    int pop() {
        if(st.size()>0){
            int u =st[st.size()-1] + inc[st.size()-1];
            inc[st.size()-1]=0;
            st.pop_back();
            return u;
        }
        return -1;
        
    }
    
    void increment(int k, int val) {
        int minimum= k<st.size()?k:st.size();
        for(int i=0;i < minimum;i++){
            inc[i]+=val;
        }
    }
};

/**
 * Your CustomStack object will be instantiated and called as such:
 * CustomStack* obj = new CustomStack(maxSize);
 * obj->push(x);
 * int param_2 = obj->pop();
 * obj->increment(k,val);
 */