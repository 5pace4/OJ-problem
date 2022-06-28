#include<bits/stdc++.h>

using namespace std;
const int N = 1e6 + 9;
const int inf = 1e9;
int F[N], t[4*N];
void FactorGenerate() {
  for(int K = 1; K<= N; K++) {
    int result = K, n = K;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            
            while (n % i == 0)
                n /= i;
            result -= result / i;
        }
    }
     
    if (n > 1)
        result -= result / n;
    F[K] = result;
  }
}
void build(int n, int b, int e) {
    if(b==e) {
        t[n] = F[b];
        return ;
    }
    int m = (b+e)/2, l = 2*n, r = l+1;
    build(l, b, m);
    build(r, m+1, e);
    t[n] = max(t[l],t[r]);

}
int query(int n, int b, int e, int i, int j) {
    if(i > e or j < b) return -inf;
    if(b >= i and e <= j) return t[n];
    int m = (b+e)/2, l = 2*n, r = l+1;
    return max(query(l, b, m, i, j), query(r, m+1, e, i, j));
}
int32_t main() {
     ios_base::sync_with_stdio(0);cin.tie(0);
     FactorGenerate();

     int n, q; cin >> n >> q;
     build(1, 1, n);
     while(q--) {
        int l, r; cin >> l >> r;
        cout << query(1, 1, n, l, r) << '\n';
     }
     return 0;
}

//https://toph.co/arena?practice=62ba8eec79e90f766f49a1dd#!/p/62a26af2872367535032a1cb
