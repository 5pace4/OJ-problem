#include<bits/stdc++.h>

using namespace std;
#define int long long
void f() {
	int n; cin >> n;
	vector<int>a(n), b(n);
	for(int i = 0; i < n; i++) cin >> a[i];
	for(int i = 0; i < n; i++) cin >> b[i];
	vector<int>d;
	d.push_back(b[0] - a[0]);
	for(int i = 1; i < n; i++) {
		d.push_back(b[i] - max(a[i], b[i-1]));
	}
	for(auto &x : d) cout << x << ' ';
	cout << '\n';
}
int32_t main() {
	ios_base::sync_with_stdio(0);cin.tie(0);
	int t; cin>>t;
	while(t--)
		f();
	return 0;
}
