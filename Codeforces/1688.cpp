#include<bits/stdc++.h>

using namespace std;
#define int long long
void f() {
	int n; cin >> n;
	int ans = 0, s = 0, even = 0, op = 1e18;
	for(int i = 0; i < n; i++) {
		int k; cin >> k;
		if(k%2==0) {
			even++;
			int tp_dhor = 0;
			while(k%2 == 0) {
				tp_dhor++;
				k/=2;
			}
			op = min(op, tp_dhor);
		}
	}
	if(n-even) {
		cout << even << '\n';
		return ;
	}
	ans = op + even - 1;
	cout << ans << '\n';
}
int32_t main() {
	ios_base::sync_with_stdio(0);cin.tie(0);
	int t; cin>>t;
	while(t--)
		f();
	return 0;
}
