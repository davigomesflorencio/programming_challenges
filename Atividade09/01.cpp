#include <bits/stdc++.h>

using namespace std;

class Solution{
    public:
    int getXor(vector<int>&nums, int a, int b){
        // Code here
        int sum=0;
        for(int i=0;i<nums.size();i++){
            if(a<=i and i<=b){
                sum^=nums[i];
            }
        }
        return sum;
    }
};

int main()
{

    vector<int> aux = {1, 3, 5, 7, 9, 11};

    Solution so;
    int res = so.getXor(aux,1,3);
    cout << "Solution " << res << endl;
    return 0;
}
