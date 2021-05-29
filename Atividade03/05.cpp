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
        // st.push(s[0]);
        for(int i=0;i<s.size();i++){ 
            if(st.empty()){
                st.push(s[i]);
            }else{
                if(s[i]==')' && st.top()=='('){
                    st.pop();
                }else{
                    st.push(s[i]);
                }
            }
        }
        return st.size();
    }
};

int main(int argc, char const *argv[]){
    Solution so;
    string v="((())))))((";
    int ola = so.minAddToMakeValid(v);

    cout << ola << " ";

    cout<<' '<<endl; /* code */
    return 0;
}
