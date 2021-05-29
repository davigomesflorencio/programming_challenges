#include <iostream>
#include <bits/stdc++.h>
#include <stack>


using namespace std;

/**
 * 
 * 1441. Build an Array With Stack Operations
 * 
 **/

class Solution {
    private:
        vector<string> res;
        int maximum,minimum;
        stack<int> pilha;
        
    public:
    vector<string> buildArray(vector<int>& target, int n) {
        maximum =*max_element(target.begin(), target.end());
        minimum=maximum<n?maximum:n;
        for(int i=1;i<=minimum;i++){
            if(binary_search(target.begin(), target.end(), i)){
                res.push_back("Push");               
            }else{
                 res.push_back("Push");
                 res.push_back("Pop");
            }
        }
        return res;
    }

    vector<string> buildArray2(vector<int>& target, int n) {
        res.clear();    
        pilha.push(1);
        for(int x:target){
            while( pilha.top()< x){
                res.push_back("Push");
                res.push_back("Pop");
                pilha.push(pilha.top()+1);
            } 
            res.push_back("Push");
            pilha.push(pilha.top()+1);
            if( pilha.size() > n ) break;    
        }
        return res;
    }
};

int main(int argc, char const *argv[])
{
    Solution so;
    vector<int> v ={2,3,4,6};
    vector<string> ola = so.buildArray(v,8);

    for(auto x:ola) 
        cout << x << " ";

    cout<<" "<<endl;
    
    ola = so.buildArray2(v,8);

    for(auto x:ola) 
        cout << x << " ";

    cout<<' '<<endl; 
    return 0;
}

