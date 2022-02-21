//https://codeforces.com/contest/1635/problem/C
#include <bits/stdc++.h>
using namespace std;
#define int long long
void f() {
	int n;
	cin >> n;
	vector<int> a(n);
	for(auto &x : a) cin >> x;
	if(is_sorted(a.begin(), a.end())) {
		cout << 0 << '\n';
		return ;
	}
	if(a[n-1] < 0 or a[n-2] > a[n-1]) {
		cout << -1 << '\n';
		return ;
	}
	cout << n-2 << '\n';
	for(int i = 1; i <= n - 2; i++) {
		cout << i << ' ' << n - 1 << ' ' << n <<'\n';
	}
	
}
int32_t main(){
	ios_base::sync_with_stdio(0);cin.tie(0);
    
    int t;
    cin >> t;
    while(t--)
    	f();
	
 	return 0;
}
