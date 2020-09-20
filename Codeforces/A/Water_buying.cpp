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
   ll n,a,b;
   cin>>n>>a>>b;
   ll x1=n*a;
   ll x2=b*(n/2);
   if(n%2!=0)
   {
       x2+=a;
   }
   cout<<min(x1,x2)<<endl;
 
 
 
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