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
    ll n;
    cin>>n;
    vector<ll> v1,v2;
    map<ll,vector<ll>> m;
    for(ll i=0 ; i<n ; i++)
    {
        ll a;cin>>a;
        v1.push_back(a);
        m[a].push_back(i+1);
    }
    for(ll i=0 ; i<n ; i++)
    {
        ll a;cin>>a;
        v2.push_back(a);
        m[a].push_back(i+1);
    }
    ll ans=0;
    ll l=-1;
    for(ll i=0 ; i<n ; i++)
    {
        ll k=v1[i];
        ll y1=m[k][0];
        ll y2=m[k][1];
        if(y2>l)
        {
            l=y2;
            ans++;
        }
 
    }
    cout<<n-ans<<endl;
 
 
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