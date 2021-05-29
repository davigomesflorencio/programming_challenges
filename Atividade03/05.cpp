#include <iostream>
#include <bits/stdc++.h>
#include <stack>

using namespace std;

/**
 * 
 * 921. Minimum Add to Make Parentheses Valid
 * 
 **/

class Solution {
public:
    int minAddToMakeValid(string s) {
        int res=0;
        stack<int> st;
        for(auto x:s){ 
            if(st.empty()){
                st.push(x);
            }else{
                if(x==')' && st.top()=='('){
                    st.pop();
                }else{
                    st.push(x);
                }
            }
        }
        return st.size();
    }
};

int main(int argc, char const *argv[]){
    Solution so;
    string v="))((";
    int ola = so.minAddToMakeValid(v);

    cout << ola << " ";

    cout<<' '<<endl; /* code */
    return 0;
}
