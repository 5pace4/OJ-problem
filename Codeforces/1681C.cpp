#include<bits/stdc++.h>

using namespace std;
#define int long long
void f() {
	int n;cin>>n; vector<int>a(n), b(n);
	for(int i = 0; i < n; i++) {
		cin >> a[i];
	}
	for(int i = 0; i < n; i++) {
		cin >> b[i];
	}
	int ans = 0;vector<pair<int, int>>v;
	for(int i = 0; i < n; i++) {
		for(int j = 0; j < n - 1; j++) {
			if(a[j] > a[j+1] or (b[j] > b[j+1] and a[j] == a[j+1])) {
				v.push_back({j+1, j+2});
				swap(a[j], a[j+1]);
				swap(b[j], b[j+1]);
			}
		}
	}
	if(!is_sorted(b.begin(), b.end())) {
		cout<<-1<<'\n'; return;
	}
	cout << v.size() << '\n';
	for(auto x:v) cout << x.first << ' ' << x.second <<'\n';
}
int32_t main() {
	ios_base::sync_with_stdio(0);cin.tie(0);
	int t; cin>>t;
	while(t--)
		f();
	return 0;
}
