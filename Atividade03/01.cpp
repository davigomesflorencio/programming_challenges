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
        
        for(auto x:s){
            if (x == '('){
                pilha.push(x);
            } 
            if (pilha.size() > 1){
                res += x;
            }
            if (x == ')'){ 
                pilha.pop();
            }
        }

        return res;
    }
};

int main(int argc, char const *argv[])
{
    Solution so;
    string x="()(())";
    string ola = so.removeOuterParentheses(x);

    cout << ola << " ";

    cout<<' '<<endl; 
    return 0;
}
