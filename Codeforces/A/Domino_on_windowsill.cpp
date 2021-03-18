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
    ll n,k1,k2;cin>>n>>k1>>k2;
    ll a,b;cin>>a>>b;
    if(k1==k2)
    {
        ll x=n-k1;
        if(b<=x&&a<=k1)
        {
            cout<<"yes"<<endl;
        }
        else
        {
            cout<<"no"<<endl;
        }
    }
    else
    {
        ll x=max(k1,k2)-min(k1,k2);
        ll y=min(k1,k2);
 
        ll z1=x/2;
        ll k3=n-k1;
        ll k4=n-k2;
        ll x1=max(k3,k4)-min(k3,k4);
        ll y1=min(k3,k4);
        ll z2=x1/2;
 
        if(a<=y+z1&&b<=y1+z2)
        {
            cout<<"yes"<<endl;
        }
        else
        {
            cout<<"no"<<endl;
        }
    }
 
 
 
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
