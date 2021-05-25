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
 
bool isPrime(ll num)
{
    bool flag=true;
    for(ll i = 2; i <= num / 2; i++) {
       if(num % i == 0) {
          flag = false;
          break;
       }
    }
    return flag;
}
void solve()
{
    ll n;
    cin>>n;
    vector<ll> v;
    ll l=INT_MAX;
    for(ll i=0 ; i<n ; i++)
    {
        ll x;
        cin>>x;
        l=min(l,x);
        v.push_back(x);
    }
    ll ans=0;
    for(ll i=0 ; i<n ; i++)
    {
        if(v[i]!=l)
        {
            ans++;
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