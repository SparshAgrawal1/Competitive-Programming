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
 
    ll n,m;
    cin>>n>>m;
    ll a[n];
 
    for(ll i=0 ; i<n ; i++)
    {
        cin>>a[i];
//        cout<<a[i]<<endl;
    }
     ll l1=0;
    ll a2=0;
    ll ans=0;
    for(ll i=0 ; i<n ; i++)
    {
        l1=l1 + (a[i]/m);
        if(a[i]%m!=0)
        {
            l1++;
        }
        ans+=a[i];
    }
    a2+=ans/m;
    if(ans%m!=0)
    {
        a2++;
    }
    ll l=min(l1,a2);ll h=max(l1,a2);
    cout<<l<<" "<<h<<endl;
 
}
int main()
{
    fast;
	ll t;
//	t=1;
    cin>>t;
	while(t--)
    {
        solve();
 
 
    }
	return 0;
}