//https://www.spoj.com/problems/AGGRCOW/
#include<bits/stdc++.h>

using namespace std;
#define int long long
const int N=1e6;
int n, c;
int a[N];
bool good(int m) {
	int init = a[0], k = 1;
	for(int i = 0; i < n; i++) {
		if(a[i] - init >= m) {
			init = a[i], k++;
		}
		if(k==c)return true;
	}
	return false;
}
int BS() {
	int l = 0, r = a[n-1], dis = 0;
	while(l + 1 < r) {
		int m = (l+r) >> 1;
		if(good(m)) {
			l = m;
			dis = max(dis, m);
		}
		else  {
			r = m;
		}
	}
	return dis;
}
void f() {
	cin >> n >> c;
	for(int i = 0; i < n; i++) cin >> a[i];
	sort(a, a+n);
	cout<<BS()<<'\n';
}
int32_t main() {
	ios_base::sync_with_stdio(0);cin.tie(0);
	int t; cin>>t;
	while(t--)
		f();
	return 0;
}
