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
    ll n;
    cin>>n;
    ll a[n];
    vector<ll> v;
    for(ll i=0 ; i<n ; i++)
    {
        cin>>a[i];
        if(a[i]==0)
        {
            v.push_back(i);
        }
    }
    ll ans=0;
    for(ll i=0 ; i<v.size() ; i++)
    {
        for(ll j=0 ; j<v.size() ; j++)
        {
            for(ll k=v[i] ; k<=v[j] ; k++)
            {
                if(a[k]==0)
                {
                    a[k]=1;
                }
                else
                {
                    a[k]=0;
                }
            }
            ll curr=0;
            for(ll k=0 ; k<n ; k++)
            {
                if(a[k]==1)
                {
                    curr++;
                }
            }
            ans=max(ans,curr);
            for(ll k=v[i] ; k<=v[j] ; k++)
            {
                if(a[k]==0)
                {
                    a[k]=1;
                }
                else
                {
                    a[k]=0;
                }
            }
 
        }
 
    }
    if(v.size()==0)
    {
        cout<<n-1<<endl;
    }
    else
    {
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