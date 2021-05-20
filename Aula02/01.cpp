#include <iostream>
  
#include <bits/stdc++.h>

using namespace std;


/**
 * 
 * 1365. How Many Numbers Are Smaller Than the Current Number
 * 
 **/

class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int> aux(nums);
        vector<int> res;
        
        sort(aux.begin(), aux.end());

        for(int num: nums){
            int j = upper_bound(aux.begin(),aux.end(),num-1)-aux.begin();
            res.push_back(j);

        }
        return res;
    }
};


int main(int argc, char const *argv[])
{
    vector<int> nums1 = {8,1,2,2,3};
    
    Solution so;
    // nums1 = so.intersection(nums1,nums2);

    // for (auto it = nums1.begin(); it != nums1.end(); ++it)
    //     cout << *it << " ";

    // cout<<' '<<endl; 
    return 0;
}
