#include<bits/stdc++.h>

using namespace std;
#define int long long
void f() {
	int n; cin >> n;
	vector<int>a(n), b(n);
	for(int i = 0; i < n; i++) cin >> a[i];
	for(int i = 0; i < n; i++) cin >> b[i];
	int mx = INT_MIN;
	for(int i = 0; i < n; i++) {
		if(a[i] < b[i]) {
			cout << "NO" << '\n';
			return ;
		}
	}
	for(int i = 0; i < n; i++) {
		mx = max(mx, a[i] - b[i]);
	}
	for(int i = 0; i < n; i++) {
		a[i] = a[i]  - mx;
	}
	for(int i = 0; i < n; i++) {
		if(b[i] == 0 and a[i] < 0) a[i] = 0;
	}
	for(int i = 0; i < n; i++) {
		if(a[i] != b[i]) {
			cout << "NO" << '\n';
			return ;
		}
	}
	cout << "YES" << '\n';

}
int32_t main() {
	ios_base::sync_with_stdio(0);cin.tie(0);
	int t; cin>>t;
	while(t--)
		f();
	return 0;
}
