//https://codeforces.com/contest/1629/problem/A

#include<bits/stdc++.h>

using namespace std;
#define int long long
void testcase(){
	int n, k;
	cin >> n >> k;
	vector<int>a(n), b(n);
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	for(int i = 0; i < n; i++){
		cin >> b[i];
	}
	vector<pair<int, int>>v;
	for(int i = 0; i < n; i++){
		v.push_back({a[i], b[i]});
	}
	sort(v.begin(), v.end());

	for(int i = 0; i < n; i++){
		if(k >= v[i].first){
			k+=v[i].second;
		}
	}
	cout << k << '\n';
}
int32_t main(){

	int t;
	cin >> t;
	while(t--){
		testcase();
	}
	return 0;
}
