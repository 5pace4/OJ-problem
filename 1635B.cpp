
#include <bits/stdc++.h>

using namespace std;
#define int long long 
void blind_eyes() {
	int n;
	cin >> n;
	vector<int> a(n), b(n);
	for(auto &x : a) cin >> x;
	int m = 0;
	for(int i = 1; i < n - 1; i++) {
		if(a[i] > a[i + 1] and a[i] > a[i - 1]) {
			m++;
			if(i == n - 2)a[n - 1] = a[i];
			else a[i+1] = max({a[i-1], a[i], a[i+2]});

		}
	}
	cout << m << '\n';
	for(auto &x : a) cout << x << ' ';
	cout << '\n';
}
int32_t main(){
	ios_base::sync_with_stdio(0);cin.tie(0);
    
    int t;
    cin >> t;
    while(t--)
    	blind_eyes();
	
 	return 0;
}
