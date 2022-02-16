#include <bits/stdc++.h>

using namespace std;
#define int long long 
void blind_eyes() {
	int n;
	cin >> n;
	vector<int> a(n);
	for(auto &x : a) cin >> x;
	
	int l = 0 , r = 0;
	int mn = *min_element(a.begin(), a.end());
	if(mn != a[0]) {
		l= 0; r = 0;
		for(int i = 0; i < n; i++) {
			if(a[i] == mn) {
				r = i + 1;
				break;
			}
		}
		reverse(a.begin(), a.begin() + r);
		for(auto &x:a) cout << x << ' ';
		cout << '\n';
		return ;
	}
	for(int i = 1; i < n; i++) {
		if(a[i] != i + 1) {
			l = i;
			break;
		}
	}
	int c = a[l];
	for(int i = l; i < n; i++) {
		if(a[i] < c) {
			c=a[i];
			r = i+1;
		}
	}
	reverse(a.begin() + l, a.begin() + r);
		for(auto &x:a) cout << x << ' ';
		cout << '\n';
		return ;

}
int32_t main(){
	ios_base::sync_with_stdio(0);cin.tie(0);
    
    int t;
    cin >> t;
    while(t--)
    	blind_eyes();
	
 	return 0;
}
