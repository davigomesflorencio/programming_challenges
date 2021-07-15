#include <bits/stdc++.h>

using namespace std;


/**
 *
 * 344. Reverse String
 * https://leetcode.com/problems/reverse-string/
 *
 **/

class Solution {
public:
    void reverseString(vector<char>& s) {
        int start=0,end=s.size()-1;
        while(start<end){
            swap(s[start],s[end]);
            start++;
            end--;
        }
        
    }
};