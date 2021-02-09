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
bool sbs(const pair<ll,ll> &a,const pair<ll,ll> &b)
{
    return (a.second < b.second);
}
 
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
   ll n,a,b,c;
   cin>>n>>a>>b>>c;
   ll ans=INT_MIN;
   for(ll i=0 ; i<=n ; i++)
   {
       for(ll j=0 ; j<=n ; j++)
       {
           ll k=n-((i*a)+(j*b));
           if(k>=0&&k%c==0)
           {
               ans=max(ans,i+j+(k/c));
           }
       }
   }
   cout<<ans<<endl;
 
 
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