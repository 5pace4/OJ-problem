//https://www.spoj.com/problems/PIE/

#include<bits/stdc++.h>

using namespace std;
#define int long long
#define pi acos(-1)
vector<double>v;
int n, f;
bool good(double m) {
    if(m == 0) return 0;
    int ans = 0;
    for(int i = 0; i < n; i++) {
        ans+=(int)(v[i]/m);
    }
    return ans >= f+1;
}
void foo() {
    cin >> n >> f;
    for(int i=0; i < n; i++) {
        int k; cin >> k;
        v.push_back(pi * k * k);
    }
    sort(v.begin(), v.end());
    for(auto x:v)cerr<<x<<' ';
    cerr<<'\n';
    double l = 0, r = v[n-1];
    while(l + 1e-6 < r) {
        double m =  (l + r )/2;
        if(good(m)) {
            l = m;
        }
        else {
            r = m;
        }
    }
    cout << fixed << setprecision(4) << l << '\n';
    v.clear();
}
int32_t main() {
    ios_base::sync_with_stdio(0);cin.tie(0);
    int t; cin>>t;
    while(t--)
        foo();
    return 0;
}
