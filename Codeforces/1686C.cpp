#include<bits/stdc++.h>

using namespace std;
//#define int long long
void f() {
	int n; cin >> n; vector<int>a(n); int sum = 0;
	for(int i = 0; i < n; i++) {
		cin >> a[i];
	}
	sort(a.begin(), a.end());
	int v[n];
	int j = 0;
	for(int i = 0; i < n/2; i++) {
		v[j] = a[i];
		j+=2;
	}
	j = 1;
	for(int i = n/2; i < n; i++) {
		v[j] = a[i];
		j+=2;
	}
	//for(auto x : v) cerr << x << ' ';
	//cerr << '\n';
	//if(i=j)v.push_back(a[i]);
	for(int i = 1; i < n + 3; i++) {
		if((v[i%n] > v[(i+1)%n] and v[i%n] > v[(i-1)%n]) or (v[i%n] < v[(i-1)%n]) and v[i%n] < v[(i+1)%n]) continue;
		else {
			cout << "NO" << '\n';
			return ; 
		}
	}
	cout << "YES" << '\n';
	for(int i = 0; i < n; i++) {
		cout << v[i] << ' ';
	}
	cout << '\n';
}
int32_t main() {
	ios_base::sync_with_stdio(0);cin.tie(0);
	int t; cin>>t;
	while(t--)
		f();
	return 0;
}
