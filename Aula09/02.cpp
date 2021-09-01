#include <bits/stdc++.h>

#define MAXN 10000

using namespace std;


class SegmentTree{
	
	private:
	int n, t[2*MAXN];
	int l[2*MAXN];
	int r[2*MAXN];
	
	public:

	SegmentTree( int * arr, int sz){
		n = sz;
		build(arr, n);
	}
	
	void build( int * arr, int n){
		
		// insert leaf nodes in tree
    for (int i=0; i<n; i++){   
      t[n+i] = arr[i];
      l[n+i] = i;
      r[n+i] = i;
			printf("sum(%d,%d) = %d\n", l[n+i], r[n+i], t[n+i]);	
		}
     
    // build the tree by calculating parents
    for (int i = n - 1; i > 0; --i){    
      t[i] = t[i<<1] + t[i<<1 | 1];
      l[i] = l[i<<1];
      r[i] = r[i<<1|1];
			printf("sum(%d,%d) = %d\n", l[i], r[i], t[i]);
		}
         	
	}
	
	
	
	void update(int p, int val){
		t[p+n] = val;
    p = p+n;
    // move upward and update parents
    for (int i=p; i > 1; i >>= 1)
        t[i>>1] = t[i] + t[i^1];
	}
	

	int query(int l, int r){
		int res = 0;
     
    // loop to find the sum in the range
    for (l += n, r += n; l < r; l >>= 1, r >>= 1)
    {
        if (l&1)
            res += t[l++];
     
        if (r&1)
            res += t[--r];
    }
     
    return res;
	}
	
	
};


int main(){
	
	int arr[] = {3,2,4,2,4,3,7,1};
	int n = sizeof(arr)/sizeof(int);
	SegmentTree st(arr, n);
	
	
	
	
	
	
}

