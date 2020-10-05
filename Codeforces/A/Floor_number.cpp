#include <iostream>
#include <bits/stdc++.h>
#include <string>
#include <cmath>
#include <map>
#include <bitset>
#define MAX 1000
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
using namespace std;
typedef long long int ll;
 
 
void solve()
{
 
  ll n,x;
  cin>>n>>x;
  if(n<=2)
  {
      cout<<1<<endl;
  }
  else
  {
      ll cnt=1;
      n=n-2;
      ll y=n/x;
      if(n%x!=0)
      {
          y++;
      }
      cout<<cnt+y<<endl;
  }
 
 
}
 
int main()
{
    ll t;cin>>t;
    while(t--)
    {
        solve();
    }
 
 
    return 0;
}