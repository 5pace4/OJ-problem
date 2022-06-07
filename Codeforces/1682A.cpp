#include<bits/stdc++.h>

using namespace std;
#define int long long
void f() {
	int n; string s; cin >> n >> s;
	int cnt = 0;
	int idx = n/2;
	cerr << idx << '\n';
	for(int i = idx; i < n; i++) {
		if(s[idx] == s[i])cnt++;
		else break;
	}
	for(int i = idx - 1; i >= 0; i--) {
		if(s[idx] == s[i])cnt++;
		else break;
	}
	cout << cnt << '\n';
}
int32_t main() {
	ios_base::sync_with_stdio(0);cin.tie(0);
	int t; cin>>t;
	while(t--)
		f();
	return 0;
}
