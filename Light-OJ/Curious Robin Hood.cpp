#include<bits/stdc++.h>

using namespace std;
const int MX = 1e5+9;
int n ;
vector<int>a(MX), t(4*MX, 0);
void build(int node, int b, int e) {
	if(b==e) {
		t[node] = a[b];
		return ;
	}
	int m = (b+e)/2, l = 2*node, r = l+1;
	build(l, b, m);
	build(r, m+1, e);
	t[node] = t[l]+t[r];
}
int query(int node, int b, int e, int i, int j) {
	if(i > e or j < b) return 0;
	if(b >= i and e <= j) return t[node];
	int m = (b+e)/2, l = 2*node, r = l+1;
	return query(l, b, m, i, j) + query(r, m+1, e, i, j);
}
void update(int node, int b, int e, int pos, int x) {
	if(b==e) {
		a[pos]+=x;
		t[node] = a[pos];
	}
	else {
		int m = (b+e)>>1, l = node*2, r = l+1;
		if(pos<= m) {
			update(l, b, m, pos, x);
		}
		else {
			update(r, m+1, e, pos, x);
		}
		t[node] = t[l] + t[r];
	}
}
int main() {
	int t;
	scanf("%d", &t);
	for(int tt = 1; tt <= t; tt++) {
		printf("Case %d:\n", tt);
		int n, q;
		scanf("%d %d", &n, &q);
		for(int i = 1; i <= n; i++) scanf("%d", &a[i]);
		build(1, 1, n); 
		while(q--) {
			int l, r, key, x;
			scanf("%d", &key);
			if(key==1) {
				scanf("%d", &l);
				printf("%d\n",query(1, 1, n, l+1, l+1));
				update(1, 1, n, l+1, -query(1, 1, n, l+1, l+1));
			}
			else if(key==2) {
				scanf("%d%d", &l,&x);
				update(1, 1, n, l+1, x);
			}
			else {
				scanf("%d%d", &l,&r);
				printf("%d\n",query(1, 1, n, l+1, r+1));
			}
			
		}
	}
	return 0;
}
