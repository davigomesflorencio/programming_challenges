#include <iostream>
  
#include <bits/stdc++.h>

using namespace std;


/**
 * 
 * 1011. Capacidade de envio de pacotes dentro de dias D

 * 
 **/

class Solution {
public:
    int count(vector<int>& weights, int cap) {
        int res = 1;
        int temp = 0;
        for(int w: weights) {
            temp += w;
            if(temp > cap) {
                res ++;
                temp = w;
            }
        }
        return res;
    }
    int shipWithinDays(vector<int>& weights, int days) {
        int l = *max_element(weights.begin(), weights.end());
        int r = accumulate(weights.begin(), weights.end(), 0);
        
        while(l < r) {
            int mid = l + (r - l) / 2;
            cout<< "mid:"<< mid << " l:" << l << " r:" << r <<endl;
            if(count(weights, mid) > days) l = mid + 1;
            else r = mid;
        }
        return l;
    }
};

int main(int argc, char const *argv[])
{
    vector<int> nums1 = {1,2,3,1,1};
    int target =4;
    Solution so;
    int ola = so.shipWithinDays(nums1,target);

    cout << ola << " ";

    cout<<' '<<endl; 
    return 0;
}