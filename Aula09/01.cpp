#include <bits/stdc++.h>

#define MAXN 10000

using namespace std;

class SegmentTree
{

private:
    int n, t[4 * MAXN];

public:
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
            t[idx] = t[idx << 1] + t[idx << 1 | 1];
        }

        printf("sum(%d, %d) = %d\n", tl, tr, t[idx]);
    }

    void update(int idx, int tl, int tr, int pos, int val)
    {

        printf("update %d [%d,%d]\n", idx, tl, tr);

        if (tl == tr)
        {
            t[idx] = val;
        }
        else
        {

            int tm = (tl + tr) / 2;

            if (pos >= tl && pos <= tm)
            {
                update(idx << 1, tl, tm, pos, val);
            }
            else
            {
                update(idx << 1 | 1, tm + 1, tr, pos, val);
            }

            t[idx] = t[idx << 1] + t[idx << 1 | 1];

            printf("sum(%d, %d) = %d\n", tl, tr, t[idx]);
        }
    }

    void update(int pos, int val)
    {
        update(1, 0, n - 1, pos, val);
    }

    int query(int idx, int tl, int tr, int l, int r)
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

        return query(idx << 1, tl, tm, l, r) + query(idx << 1 | 1, tm + 1, tr, l, r);
    }

    int query(int l, int r)
    {
        return query(1, 0, n - 1, l, r);
    }
};

int main()
{

    int arr[] = {3, 2, 4, 2, 4, 3, 7, 1};
    int n = sizeof(arr) / sizeof(int);
    SegmentTree st(arr, n);

    cout << st.query(0, 2) << endl;

    st.update(1, 0, n - 1, 2, 2);

    //cout << st.query(0, 2) << endl;
}