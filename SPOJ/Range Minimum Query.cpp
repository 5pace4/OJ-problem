//https://www.spoj.com/problems/RMQSQ/
#include<bits/stdc++.h>

using namespace std;
#define int long long
const int d=100000000;
void File(){
      freopen("input.txt", "r", stdin);
      freopen("output.txt", "w", stdout);
}
void testcase(){
    int n;
    cin >> n;
    vector<int>v(n);
    for(int i = 0; i < n; i++)cin >> v[i];

    int q;
    cin >> q;
    while(q--){
          int r, l;
          cin >> r >> l;
          int ans = *min_element(v.begin() + r, v.begin() + l + 1);
          cout << ans << '\n';
    }
}
int32_t main(){
  ios_base::sync_with_stdio(0);cin.tie(0);
  //File();

  // int t;
  // cin >> t;
  // while(t--)
       testcase();
  
  return 0;
}
