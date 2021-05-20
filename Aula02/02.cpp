#include <iostream>
  
#include <bits/stdc++.h>

using namespace std;


/**
 * 
 * 349. Intersection of Two Arrays
 * 
 **/

class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int> res;
        
        for(auto num:nums1){
            if(find(nums2.begin(), nums2.end(), num)!=nums2.end() and find(res.begin(), res.end(), num)==res.end()){
                res.push_back(num);
            }
        }
        
        return res;
    }

    vector<int> intersection2(vector<int>& nums1, vector<int>& nums2) {
        vector<int> res;
        sort(nums1.begin(),nums1.end());
        auto j = unique(nums1.begin(),nums1.end());
        nums1.resize(j-nums1.begin());
        sort(nums2.begin(),nums2.end());
        
        for(int num:nums1){
            if(binary_search(nums2.begin(),nums2.end(),num)){
                res.push_back(num);
            }
        }
        
        return res;
    }
};


int main(int argc, char const *argv[])
{
    vector<int> nums1 = {1,1,1,8,9};
    vector<int> nums2 = {1,2,3,1,9};
    Solution so;
    nums1 = so.intersection(nums1,nums2);

    for (auto it = nums1.begin(); it != nums1.end(); ++it)
        cout << *it << " ";

    cout<<' '<<endl; 
    return 0;
}
