#include <bits/stdc++.h>

void f() {
	int n;
    std::cin>>n;
    std::vector<int>a(n);
    std::map<int, int>mp;
    for(int i=0; i<n; i++) {
    	std::cin>>a[i];
    	mp[a[i]]++;
    }
    int curr =0;
    for(auto x:mp) {
    	curr = std::max(curr, x.second);
    }
    //std::cout<<curr<<'\n';
    std::sort(a.begin(), a.end());
	if(n==1 or a[0]==a[n-1]) {
		std::cout<<0<<'\n';
		return ;
	}
	int baki, ans = 0;
	for(int i = 0; i<n; i++) {
		baki = n - curr;
		if(baki > 0) {
			ans++;
		}
		if(baki >= curr) {
			ans+=curr;
			curr*=2;
		}
		else {
			ans+=baki;
			baki = 0;
		}

		if(baki == 0)break;
	}
	std::cout<<ans<<'\n';
}
int32_t main(){
	std::ios_base::sync_with_stdio(0);std::cin.tie(0);
    
    int t;
    std::cin>>t;
    while(t--) {
    	f();
    }
	
 	return 0;
}
