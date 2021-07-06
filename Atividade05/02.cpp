
#include <bits/stdc++.h>

using namespace std;


/**
 *
 * https://leetcode.com/problems/binary-watch/
 * 401. Binary Watch
 *
 **/

class Solution {
public:
    vector<string> readBinaryWatch(int turnedOn) {
        vector<string> res;
        
        for(int i=0;i<12;i++){
            for(int j=0;j<60;j++){
                string hora = bitset<64>(i).to_string();
                string min = bitset<64>(j).to_string();
                string aux=hora+min;
                
                if(count(aux.begin(), aux.end(), '1')==turnedOn){
                    res.push_back(to_string(i) + (j < 10 ? ":0" : ":") + to_string(j));
                }
            }
        }
        return res;
    }
};