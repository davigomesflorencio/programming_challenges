#include <iostream>
#include <vector>
#include <numeric>

using namespace std;


/**
 * 
 * 1480. Running Sum of 1d Array
 * 
 **/
class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int> aux;
        
        aux.push_back(nums[0]);
        for (int i = 1; i < nums.size(); i++)
        {
            aux.push_back(aux[i-1]+nums[i]);
        }
        return aux;
    }
};

int main(int argc, char const *argv[])
{
    vector<int> nums = {1,1,1,1,1};
    Solution so;
    nums = so.runningSum(nums);

    for (auto it = nums.begin(); it != nums.end(); ++it)
        cout << *it << " ";

    cout<<' '<<endl; 
    return 0;
}
