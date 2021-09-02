
#include <bits/stdc++.h>

using namespace std;

#define MAXN 10000

int t[4 * MAXN];

void build(vector<int> arr, int idx, int tl, int tr)
{
    if (tl == tr)
    {
        t[idx] = arr[tl];
        return;
    }
    else
    {
        int tm = (tl + tr) / 2;
        build(arr, idx << 1, tl, tm);
        build(arr, idx << 1 | 1, tm + 1, tr);
        t[idx] = t[idx << 1] ^ t[idx << 1 | 1];
    }

    printf("xor(%d, %d) = %d\n", tl, tr, t[idx]);
}


int query_xor(int idx, int tl, int tr, int l, int r)
{
    if (l > tr || r < tl)
    {
        return 0;
    }

    if (l <= tl && tr <= r)
    {
        return t[idx];
    }

    int tm = (tl + tr) / 2;

    return query_xor(idx << 1, tl, tm, l, r) ^ query_xor(idx << 1 | 1, tm + 1, tr, l, r);
}

class Solution{
    public:
    int getXor(vector<int>&nums, int a, int b){
       
        build(nums,1,0,nums.size()-1);

        return query_xor(1,0,nums.size()-1,a,b);
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
