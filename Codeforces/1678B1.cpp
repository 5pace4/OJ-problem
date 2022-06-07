#include<bits/stdc++.h>

using namespace std;
#define int long long
void f() {
	int n;string s; cin>>n>>s;
	int c = 0, ans = 0;
	char curr = s[0]; c=1;
	for(int i = 0; i < n/2; i++) {
		if(s[2*i]!=s[2*i+1]) ans++;
	}
	cout<<ans<<'\n';
}
int32_t main() {
	ios_base::sync_with_stdio(0);cin.tie(0);
	int t; cin>>t;
	while(t--)
		f();
	return 0;
}
