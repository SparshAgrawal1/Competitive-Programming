#include <iostream>
#include <bits/stdc++.h>
#include <string>
#include <cmath>
#include <map>
#include <bitset>
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
using namespace std;
typedef long long int ll;
typedef double db;
 
 
ll xxxx(ll a,ll b)
{
   while(a>b)
   {
       a=a/3;
   }
   return a;
}
void solve()
{
   ll n,m;
   cin>>n>>m;
   if (n == m)
    {
        cout << n - 1 << " " << n;
    }
    else
    {
        cout << max(m, n) - 1 << " " << min(n, m);
    }
}
int main()
{
    fast;
  ll t;
  t=1;
//    cin>>t;
  while(t--)
    {
        solve();
 
 
    }
  return 0;
}