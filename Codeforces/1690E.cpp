#include<bits/stdc++.h>

using namespace std;
#define int long long
const int N = 1e6;
int ans = 0;
int n, k;
vector<int>a(N);
void f() {
	ans = 0;
	cin >> n >> k;
	vector<int>a(n);
	int ans = 0;
	for(int i = 0; i < n; i++)  {
		cin >> a[i];
		ans+=(a[i]/k);
		a[i] = a[i]%k;
	}
	sort(a.begin(), a.end());
	int i = 0, j = n - 1;
	while(i < j) {
		while(a[i] == 0 or (a[i] + a[j]) < k) {
			++i;
			if(i >= j)break;
		}
		if(i >= j) break;
		ans+=((a[i]+a[j])/k);
		++i, --j;
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
