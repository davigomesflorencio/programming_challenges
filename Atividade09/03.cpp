#include <bits/stdc++.h>

using namespace std;

#define MAXN 10000

int t[4 * MAXN];

void build(int *arr, int idx, int tl, int tr)
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
        return t[idx];
    }

    if (l <= tl && tr <= r)
    {
        return 0;
    }

    int tm = (tl + tr) / 2;

    return query_xor(idx << 1, tl, tm, l, r) ^ query_xor(idx << 1 | 1, tm + 1, tr, l, r);
}

class Solution
{
public:
    vector<int> specialXor(int N, int Q, int a[], vector<int> query[])
    {
        // code here
        build(a,1,0,N-1);

        vector<int> res;
        for (int i = 0; i < Q; i++)
        {
            res.push_back(query_xor(1,0,N-1, query[i][0]-1, query[i][1]-1));
        }
        return res;
    }
};

int main()
{

    int arr[] = {4, 7, 8, 5, 9, 6, 1, 0, 20, 10};
    int n = sizeof(arr) / sizeof(int);
    // SegmentTree st(arr, n);
    // int *segTree = constructST(arr, n);

    Solution so;

    int ArrayAux[] = {1, 10, 1, 6, 2, 3};

    vector<int> q[3];
    for (int i = 0; i < 3; i++)
    {
        q[i].push_back(ArrayAux[2 * i]);
        q[i].push_back(ArrayAux[2 * i + 1]);
    }

    vector<int> res = so.specialXor(n, 3, arr, q);

    for (auto x : res)
    {
        cout << x << endl;
    }
    // cout << st.query(1, 3) << endl;
    //cout << st.query(0, 2) << endl;
}