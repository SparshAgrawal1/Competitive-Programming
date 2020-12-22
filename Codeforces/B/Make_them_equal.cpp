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
    set<ll> s;
    for(ll i=0 ; i<n ; i++)
    {
        cin>>a[i];
        s.insert(a[i]);
    }
    if(s.size()>3)
    {
        cout<<-1<<endl;
    }
    else if(s.size()==1)
    {
        cout<<0<<endl;
    }
    else if(s.size()==2)
    {
        vector<ll> v;
        for(auto x:s)
        {
            v.push_back(x);
        }
        ll l=v[1]-v[0];
        if(l%2==0)
        {
            cout<<l/2<<endl;
        }
        else
        {
            cout<<l<<endl;
        }
 
    }
    else
    {
        vector<ll> v;
        for(auto x:s)
        {
            v.push_back(x);
        }
        if((v[1]-v[0])!=(v[2]-v[1]))
        {
            cout<<-1<<endl;
        }
        else
        {
            cout<<v[1]-v[0]<<endl;
        }
    }
 
 
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