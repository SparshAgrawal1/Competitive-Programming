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
    deque<ll> d;
    for(ll i=0 ; i<n ; i++)
    {
        cin>>a[i];
 
    }
    sort(a,a+n);
    for(ll i=0 ; i<n ; i++)
    {
        d.push_back(a[i]);
    }
    bool flag=false;
    while(d.size()!=1)
    {
        if(flag==false)
        {
            d.pop_back();
        }
        else
        {
            d.pop_front();
        }
        flag=!flag;
    }
    cout<<d.front()<<endl;
 
 
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