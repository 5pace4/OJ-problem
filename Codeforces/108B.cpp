//https://codeforces.com/contest/108/problem/B
#include <bits/stdc++.h>
using namespace std;
#define int long long
void f() {
	int n;
	cin >> n;
	vector<int> a(n);
	for(auto &x : a) cin >> x;
	sort(a.begin(), a.end());
	for(int i =0; i < n - 1; i++) {
		if(2 * a[i] > a[i+1] and a[i] != a[i+1]) {
			cout << "YES" << endl;
			return;
		}
	}
	cout << "NO" << endl;
}
int32_t main(){
	ios_base::sync_with_stdio(0);cin.tie(0);
    f();
	
 	return 0;
}
