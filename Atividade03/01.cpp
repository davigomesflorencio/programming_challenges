#include <iostream>
#include <bits/stdc++.h>
#include <stack>

using namespace std;

/**
 * 
 * 1021. Remove Outermost Parentheses
 * 
 **/

class Solution {
private:
    string res="";
    stack<char> pilha;
    
public:
    string removeOuterParentheses(string s) {
        
        for(int i=0;i<s.size();i++){
            if (s[i] == '('){
                pilha.push(s[i]);
            } 
            if (!pilha.empty()){
                res += s[i];
            }
            if (s[i] == ')'){ 
                pilha.pop();
            }
        }

        return res;
    }
};

int main(int argc, char const *argv[])
{
    Solution so;
    string x="(()(()))";
    string ola = so.removeOuterParentheses(x);

    cout << ola << " ";

    cout<<' '<<endl; 
    return 0;
}
