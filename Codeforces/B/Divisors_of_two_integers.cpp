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
    ll n;cin>>n;
    ll a[n];
    map<ll,ll> m;
    ll l=INT_MIN;
    for(ll i=0 ; i<n ; i++)
    {
        cin>>a[i];
        m[a[i]]++;
        l=max(l,a[i]);
    }
    for(auto x:m)
    {
        ll t1=x.first;
        ll t2=x.second;
        if(l%t1==0)
        {
            m[t1]--;
        }
    }
    ll h=-1;
    for(auto x:m)
    {
        if(x.second>0)
        {
            h=x.first;
        }
    }
    cout<<l<<" "<<h<<endl;
 
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