//https://www.spoj.com/problems/DIVFACT/
#include<bits/stdc++.h>

using namespace std;
#define int long long
const int d=100000000;
void File(){
      freopen("input.txt", "r", stdin);
      freopen("output.txt", "w", stdout);
}
#define N 1000000
bool prime[N];
vector<int>p;
void sieve(){
   memset(prime, true, sizeof(prime));
   prime[0] = prime[1] = 0;

   for(int i = 2; i * i <= N; i++){
       if(prime[i]){
           for(int j = i * i;  j <= N; j+=i){
               prime[j]=false;
           }
       }
   }
   for(int i = 0; i <= N; i++){
     if(prime[i])p.push_back(i);
   }
}
void testcase(){
   int n;
   cin >> n;
   int ans  = 1;
   for(int i = 0; p[i] <= n; i++){
      int k = p[i];
      int mxPow  = 0 ;
      int num = n;
      while(num){  //legendre
        mxPow+=(num/k);
        num/=k;
      }
      ans = (ans * ( mxPow + 1 ) )% 1000000007;
   }

   cout << ans << '\n';

}
int32_t main(){
  ios_base::sync_with_stdio(0);cin.tie(0);
 // File();
  sieve();

  int t;
  cin >> t;
  while(t--)
       testcase();
  
  return 0;
}
