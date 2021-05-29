#include <iostream>
#include <bits/stdc++.h>
#include <stack>

using namespace std;

/**
 * 
 * 682. Baseball Game
 * 
 **/

class Solution {
private: 
    stack<int> st;
    int sum=0;
public:
    int calPoints(vector<string>& ops) {
       for(auto x:ops){
           if(x=="+"){
               int aux1=st.top();
               st.pop();
               int aux2=st.top();
               st.push(aux1);
               st.push(aux2+aux1);
               sum+=st.top();
           }else if(x=="D"){
               st.push(2*st.top());
               sum+=st.top();
           }else if(x=="C"){
               sum-= st.top();
               st.pop();
           }else{
               st.push(atoi(x.c_str()));
               sum+=atoi(x.c_str());
           }
       } 
       return sum;
    }
};

int main(int argc, char const *argv[])
{
    Solution so;
    vector<string> v ={"36","28","70","65","C","+","33","-46","84","C"};
    int ola = so.calPoints(v);

    cout << ola << " ";

    cout<<' '<<endl; 
    return 0;
}