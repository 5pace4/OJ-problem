#include<bits/stdc++.h>

using namespace std;
#define int long long
void testcase(){
	int l, r, k;
	cin >> l >> r >> k;

	int ans = ((r - l + 1) + l % 2)/2;
	cout << (k >= ans || (r == l and r != 1)? "YES":"NO") << '\n';
	
}
int32_t main(){
	ios_base::sync_with_stdio(0);cin.tie(0);

	int t;
	cin >> t;
	while(t--){
		testcase();
	}
	return 0;
}
