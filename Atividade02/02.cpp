#include <iostream>
  
#include <bits/stdc++.h>

using namespace std;


/**
 * 
 * 374. Número de palpites maior ou menor
 * 
 **/

class Solution {
public:
    int guessNumber(int n) {
        if(n==1){
            return 1;
        }
        int start=1,end=n,m=0;
        while(start<=end){
            m = start + (end-start)/2;
            if(guess(m)==-1){
                end=m -1;
            }else if(guess(m)==1){
                start=m+1;
            }else if(guess(m)==0){
                break;
            }
        }  
        return m;
    }
};
