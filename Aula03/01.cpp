#include <iostream>
#include <bits/stdc++.h>
#include <stack>

/**
 * 
 *  Problem: Min stack
 * 
 **/


class MinStack {
public:
    /** initialize your data structure here. */
    
    stack<int> minpilha;
    stack<int> pilha;
    
    MinStack() {
    }
    
    void push(int val) {
        if(pilha.empty()){
            minpilha.push(val);
            pilha.push(val);
        }else{
            if(pilha.top() > val){
                minpilha.push(val);
                pilha.push(val);
            }else{
                minpilha.push(pilha.top());
                pilha.push(val);
            }
        }
    }
    
    void pop() {
        if(!pilha.empty()){
            minpilha.pop();
            pilha.pop();
        }
        
    }
    
    int top() {
        if(pilha.empty()){
            return -1;
        }else{
            return pilha.top();
        }
    }
    
    int getMin() {
        return minpilha.top();
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */
