#include <bits/stdc++.h>

using namespace std;


/**
 *
 * 443. String Compression
 * https://leetcode.com/problems/string-compression/
 *
 **/


class Solution {
public:
    int compress(vector<char>& chars) {
        int start=0;
        int n=chars.size();
        int k=0;
        
        while( start < n){
            int end=start;
            
            while(end<n and chars[end]==chars[start]) end++;
            
            int len=end-start;
            
            if(len==1){
                chars[k++]=chars[start];
            }else{
                chars[k++]=chars[start];
                string num= to_string(len);
                for(auto c:num){
                    chars[k++]=c;
                } 
            }
             
            start=end;
        }
        
        return k;
    }
};