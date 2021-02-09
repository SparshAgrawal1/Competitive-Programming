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
   ll n;cin>>n;
   vector<ll> v;
   map<ll,vector<ll>> m;
   for(ll i=0 ; i<n ; i++)
   {
       ll x;cin>>x;v.push_back(x);
   }
   for(ll i=0 ; i<n ; i++)
   {
//       ll x1=v[i];
//       if(v[i]%2==0)
//       {
           ll x2=v[i];
           ll temp=0;
           while(x2>0)
           {
               if(x2%2==0)
               {
                   x2=x2/2;
               }
               else
               {
                   x2--;
                   temp++;
               }
           }
           m[temp].push_back(i+1);
//       }
   }
   ll ans=0;
   for(auto x:m)
   {
    ll y=m[x.first].size();
    ans=ans+y*(y-1)/2;
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