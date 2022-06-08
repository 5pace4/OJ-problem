#include<bits/stdc++.h>

using namespace std;
#define int long long
void f() {
	int n; cin >> n;
	int a[3] = {3, 2, 1};
	n-=6;
	while(n) {
		if(n >= 3) {
			a[0]++, a[1]++, a[2]++;
			n-=3;
		}
		else if(n == 2) {
			a[0]++, a[1]++;
			n-=2;
		}
		else if(n==1) a[0]++, n--;
		else break;
	}

	cout << a[1] << ' ' << a[0]  << ' ' << a[2] << '\n';
}
int32_t main() {
	ios_base::sync_with_stdio(0);cin.tie(0);
	int t; cin>>t;
	while(t--)
		f();
	return 0;
}
