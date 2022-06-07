#include<bits/stdc++.h>

using namespace std;
#define int long long
void f() {
	int n; cin >> n; vector<int>a(n); int sum = 0;
	for(int i = 0; i < n; i++) {
		cin >> a[i];
	}
	int ans = 0, curr_idx = 0;
	for(int i = 0; i < n - 1; i++) {
		if(a[i] > a[i+1]) {
			ans++;
			++i;
		}
	}
	cout << ans << '\n';
}
int32_t main() {
	ios_base::sync_with_stdio(0);cin.tie(0);
	int t; cin>>t;
	while(t--)
		f();
	return 0;
}
