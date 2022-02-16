#include <bits/stdc++.h>

using namespace std;
#define int long long 
void blind_eyes() {
	int n;
	cin >> n;
	vector<int> a, b;
	for(int i = 0; i < n; i++) {
		int p;
		cin >> p;
		if(p % 2) a.push_back(p);
		else b.push_back(p);
	}
	bool ok = true;
	for(int i = 1; i < a.size(); i++) {
		if(a[i] < a[i-1])ok = false;
	}
	for(int i = 1; i < b.size(); i++) {
		if(b[i] < b[i-1])ok = false;
	}
	cout << (ok ? "Yes" : "No") << '\n';
	cerr << (ok ? "Yes" : "No") << '\n';
	
}
int32_t main(){
	ios_base::sync_with_stdio(0);cin.tie(0);
    
    int t;
    cin >> t;
    while(t--)
    	blind_eyes();
	
 	return 0;
}
