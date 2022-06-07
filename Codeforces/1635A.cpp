//https://codeforces.com/contest/1635/problem/A
#include <bits/stdc++.h>
using namespace std;
#define int long long
void blind_eyes() {
	int n;
	cin >> n;
	vector<int> a(n), b(n);
	for(auto &x : a) cin >> x;
	int s = 0;
	for(int i = 0; i < n; i++) {
		s|=a[i];
	}
	cout << s << '\n';
}
int32_t main(){
	ios_base::sync_with_stdio(0);cin.tie(0);
    
    int t;
    cin >> t;
    while(t--)
    	blind_eyes();
	
 	return 0;
}
