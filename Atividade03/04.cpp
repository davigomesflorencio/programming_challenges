#include <iostream>
#include <bits/stdc++.h>
#include <stack>

using namespace std;

/**
 * 
 * 1544. Make The String Great
 * 
 **/

class Solution {
public:
    string makeGood(string s) {
        string res="";
        if(s.size()<2){
            return s;
        }
        stack<char> st;
        for(auto x:s){
            if(!st.empty() && abs(st.top()-x) == 32){
                st.pop();
            }else{
                st.push(x);
            }
            
        }

        if (st.empty()){ 
            return res;
        }
        
        while (!st.empty()) {
            res.push_back(st.top());
            st.pop();
        }
        
        reverse(res.begin(), res.end());
        
        return res;

    }
};

int main(int argc, char const *argv[])
{
    Solution so;
    string v="bBAcC";
    string ola = so.makeGood(v);


    cout << ola << " ";

    cout<<' '<<endl; 
    return 0;
}