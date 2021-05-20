#include <iostream>
  
#include <bits/stdc++.h>

using namespace std;


/**
 * 
 * 35. Posição de inserção de pesquisa
 * 
 **/

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        auto j = lower_bound(nums.begin(),nums.end(),target);
        return j-nums.begin();
    }
};

int main(int argc, char const *argv[])
{
    vector<int> nums1 = {1};
    int target =0;
    Solution so;
    int ola = so.searchInsert(nums1,target);

    cout << ola << " ";

    cout<<' '<<endl; 
    return 0;
}
