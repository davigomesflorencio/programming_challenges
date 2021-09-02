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
        t[idx] = min(t[idx << 1], t[idx << 1 | 1]);
    }

    printf("xor(%d, %d) = %d\n", tl, tr, t[idx]);
}

int query_min(int idx, int tl, int tr, int l, int r)
{
    if (l > tr || r < tl)
    {
        return MAXN;
    }

    if (l <= tl && tr <= r)
    {
        return t[idx];
    }

    int tm = (tl + tr) / 2;

    return min(query_min(idx << 1, tl, tm, l, r), query_min(idx << 1 | 1, tm + 1, tr, l, r));
}

int main()
{

    int arr[] = {1, 2, 3, 4};
    int n = sizeof(arr) / sizeof(int);
    
    build(arr, 1, 0, n - 1);

    cout << query_min(1, 0, n-1, 1, 2) << endl;

}