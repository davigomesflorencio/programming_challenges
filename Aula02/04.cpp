#include <iostream>
  
#include <bits/stdc++.h>

using namespace std;


/**
 * 
 * 278. First Bad Version
 * 
 **/

class Solution {
public:
    int firstBadVersion(int n) {
        if (n==1)
        {
            return 1;
        }
        int i=1,f=n;
        while (i <f)
        {
            int m = i +(f-i)/2;
            if(isBadVersion(m)){
                f=m;
            }else{
                i=m+1;
            }
        }
        return i;
    }
};