#include<bits/stdc++.h>

using namespace std;
#define int long long
void f() {
	int x; cin >> x; int tmp = x;
	int pos = 0;
	if(x==1){
		cout << 3 << '\n';
		return ;
	}
	while((x&1) == 0) {
		pos++;
		x>>=1;
	}
	int ans = pow(2, pos);
	if(ans == tmp) ++ans;
	cout<<ans<<'\n';
}
int32_t main() {
	ios_base::sync_with_stdio(0);cin.tie(0);
	int t; cin>>t;
	while(t--)
		f();
	return 0;
}
