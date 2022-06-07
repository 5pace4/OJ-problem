//https://www.spoj.com/problems/DIVSUM/
#include <bits/stdc++.h>

using namespace std;
#define int long long
int32_t main() 
{
  ios_base::sync_with_stdio(0);
  cin.tie(0);
//   freopen("input.txt", "r", stdin);
//   freopen("output.txt", "w", stdout);
         
        int t;
        cin >> t; 
        while(t--){
            
                int n, sum = 0;
                cin >> n;
                if(n == 1){cout << 0 << '\n';continue;}
                for(int i = 2; i * i <= n; i++){
                       if(n % i == 0){
                           sum += i;
                           if(i != n/i)sum += n/i;
                       }
                }
                cout << sum + 1 << '\n';
        }
      
	return 0;
}
