#include<bits/stdc++.h>

using namespace std;
int round(int n){
    return log2(n);
}
int main()
{
    int n, a, b;
    cin>>n>>a>>b;
    int r=round(n);
   // cout<<r<<'\n';
    int cnt=0;
    while(a!=b){
        a=ceil(float(a)/2);
        b=ceil(float(b)/2);
        cnt++;
    }
    if(cnt==r)
    cout<<"Final!"<<'\n';
    else
    cout<<cnt<<"\n";

    return 0;
  
}
