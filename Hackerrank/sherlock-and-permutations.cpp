//https://www.hackerrank.com/challenges/sherlock-and-permutations/problem

/* @author : 1904005_Tofayel */

#include <bits/stdc++.h>
using namespace std;
#define int long long
#define M 1000000007
int iterative_exp(int a, int b){ /// iterative way == binary exp
    int ans = 1;
    while(b){
        if(b & 1)ans = ans * a % M;
            a = a * a % M;
            b/=2; 
    }
    return ans;
}
int fact(int n) {
    int ans = 1;
    for(int i = 1; i <= n; i++) {
        ans = ans * i % M;
    }
    return ans % M;
}
void blind_eyes() {
    int n, m;
    cin >> n >> m;
    int res = ( fact(n + m - 1) % M * iterative_exp((fact(n) * fact(m-1)) % M, M - 2) % M ) % M;
    cout << res << '\n';
}
int32_t main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    
    int t;
    cin >> t;
    while(t--)
        blind_eyes();
    
     return 0;
}
