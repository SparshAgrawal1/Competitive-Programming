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
   ll a[n];
   map<ll,ll> m;
   set<ll> s;
   for(ll i=0 ; i<n ; i++)
   {
       cin>>a[i];
       m[a[i]]++;
       s.insert(a[i]);
   }
   vector<ll> v;
   for(auto x:s)
   {
       v.push_back(x);
   }
   ll ans=0;
   ll l=1;
   for(ll i=0 ; i<v.size() ; i++)
   {
       if(v[i]==l)
       {
           ans++;
           l++;
       }
       else if(v[i]>l)
       {
           ans+=m[v[i]];
           l+=m[v[i]];
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