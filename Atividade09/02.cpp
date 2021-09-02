#include <bits/stdc++.h>

using namespace std;

#define MAXN 10000

class SegmentTree
{

private:
    int n, t[4 * MAXN];

public:
    int *getSegmentTree()
    {
        return t;
    }

    SegmentTree(int *arr, int sz)
    {
        n = sz;
        build(arr, 1, 0, n - 1);
    }

    void build(int *arr, int idx, int tl, int tr)
    {

        if (tl == tr)
        {
            t[idx] = arr[tl];
        }
        else
        {
            int tm = (tl + tr) / 2;
            build(arr, idx << 1, tl, tm);
            build(arr, idx << 1 | 1, tm + 1, tr);
            t[idx] = min(t[idx << 1], t[idx << 1 | 1]);
        }

        // printf("min(%d, %d) = %d\n", tl, tr, t[idx]);
    }
   
};

/* The functions which 
builds the segment tree */
int *constructST(int arr[], int n)
{
    //Your code here
    SegmentTree st(arr, n);
    return st.getSegmentTree();
}

/* The functions returns the
 min element in the range
 from a and b */

int queryRMQ(int st[], int idx, int tl, int tr, int l, int r)
{

    if (l > tr || r < tl)
    {
        return MAXN;
    }

    if (l <= tl && tr <= r)
    {
        return st[idx];
    }

    int tm = (tl + tr) / 2;

    return min(queryRMQ(st, idx << 1, tl, tm, l, r), queryRMQ(st, idx << 1 | 1, tm + 1, tr, l, r));
}

int RMQ(int st[], int n, int a, int b)
{
    //Your code here
    return queryRMQ(st, 1, 0, n - 1, a, b);
}


int main()
{

    int arr[] = {1, 2, 3, 4};
    int n = sizeof(arr) / sizeof(int);
    // SegmentTree st(arr, n);
    int *segTree = constructST(arr, n);

    cout << RMQ(segTree, n, 0, 2) << endl;

    // cout << st.query(1, 3) << endl;
    //cout << st.query(0, 2) << endl;
}