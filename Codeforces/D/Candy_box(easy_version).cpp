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
 
ll gcd(ll a, ll b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
 
}
void solve()
{
    ll n;
    cin>>n;
    vector<ll> v;
    map<ll,ll> m;
    for(ll i=0 ; i<n ; i++)
    {
        ll x;cin>>x;
        v.push_back(x);
        m[x]++;
    }
    vector<ll> f;
    for(auto x:m)
    {
        f.push_back(x.second);
    }
    sort(f.begin(),f.end(),greater<ll>());
    ll ans=0;
    set<ll> s;
    for(ll i=0 ; i<f.size() ; i++)
    {
        if(s.find(f[i])==s.end())
        {
            ans+=f[i];
            s.insert(f[i]);
        }
        else
        {
            while(s.find(f[i])!=s.end())
            {
                f[i]=f[i]-1;
            }
            if(f[i]>=0)
            {
                ans+=f[i];
            s.insert(f[i]);
            }
 
        }
    }
    cout<<ans<<endl;
 
 
 
 
 
}
int main()
{
    fast;
	ll t;
    cin>>t;
	while(t--)
    {
        solve();
 
 
    }
	return 0;
}