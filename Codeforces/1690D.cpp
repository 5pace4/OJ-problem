#include<bits/stdc++.h>

using namespace std;
#define int long long
void f() {	
	int n, k;string s; cin >> n >> k >> s;
	int black = 0, tmp = 0, initpos = 0, endpos = 0, i;

	vector<int>precal(n+1, 0);
	if(s[0] == 'B')precal[1]+=1;
	for(int i = 1; i < n; i++) {
		if(s[i] == 'B') precal[i+1] = precal[i] + 1;
		else precal[i+1] = precal[i];
	}
	int ans = n;
	for(int i = k; i <= n; i++) {
		int have;
		have = precal[i] - precal[i-k];
		ans = min(ans, abs(k-have));
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
