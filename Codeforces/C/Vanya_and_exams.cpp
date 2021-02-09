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
bool sbs(const pair<ll,ll> &a,
              const pair<ll,ll> &b)
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
    ll n,m,a;
    cin>>n>>m>>a;
    vector<pair<ll,ll>> v;
    ll curr=0;
    for(ll i=0 ; i<n;i++)
    {
        ll x1,x2;cin>>x1>>x2;
        v.push_back({x1,x2});
        curr+=x1;
    }
    sort(v.begin(),v.end(),sbs);
    ll ans=0;
    ll temp=(n*a)-curr;
    if(temp<=0)
    {
        cout<<ans<<endl;
    }
    else
    {
         for(ll i=0 ; i<n ; i++)
    {
            ll y1=m-v[i].first;
            if(y1>=temp)
            {
                ans=ans+(temp*v[i].second);
                v[i].first+=temp;
                temp=0;
                break;
            }
            else
            {
                temp-=y1;
                v[i].first=m;
                ans=ans+ (y1*v[i].second);
            }
 
    }
    cout<<ans<<endl;
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