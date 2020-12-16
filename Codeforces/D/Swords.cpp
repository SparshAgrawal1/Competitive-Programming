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
    ll a[n];
    ll temp=INT_MIN;
    for(ll i=0 ; i<n ; i++)
    {
        cin>>a[i];
        temp=max(temp,a[i]);
    }
    vector<ll> v;
    for(ll i=0 ; i<n ; i++)
    {
        v.push_back(temp-a[i]);
    }
    ll l=0;
    for(ll i=0 ; i<n ; i++)
    {
        l = gcd(l,v[i]);
    }
    ll ans=0;
    for(ll i=0 ; i<n ; i++)
    {
        ans+=(v[i]/l);
    }
    cout<<ans<<" "<<l<<endl;
 
 
 
}
int main()
{
    fast;
	ll t;t=1;
//    cin>>t;
	while(t--)
    {
        solve();
 
 
    }
	return 0;
}
