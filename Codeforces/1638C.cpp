#include <bits/stdc++.h>

using namespace std;
#define int long long 
void blind_eyes() {
	int n;
	cin >> n;
	int ans = 0, t = 0;
	for(int i = 0; i < n; i++) {
		int k;
		cin >> k;
		t=max(t, k);
		if(t == i + 1)ans++;
	}
	cout << ans << '\n';
}
int32_t main(){
	ios_base::sync_with_stdio(0);cin.tie(0);
    
    int t;
    cin >> t;
    while(t--)
    	blind_eyes();
	
 	return 0;
}
