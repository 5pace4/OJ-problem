//https://www.spoj.com/problems/SORT2D/
#include <bits/stdc++.h>

using namespace std;
bool cmp(pair<int, int>a, pair<int, int>b){
    return (a.first < b.first ) || (a.first == b.first) && (a.second > b.second);
}
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

//    freopen("input.txt", "r", stdin);
//    freopen("output.txt", "w", stdout);
    
   int t;
   cin >> t;
   while (t--)
   {
       int n;
       cin >> n;
       vector<pair<int, int>>v;
       for(int i = 0; i < n; i++){
           int a, b;
           cin >> a >> b;
           v.push_back(make_pair(a, b));
       }
      // sort(v.begin(), v.end());
       sort(v.begin(), v.end(), cmp);
       for(auto x : v){
           cout << x.first << ' ' << x.second << '\n';
       }
   }
   
   return 0;
}
