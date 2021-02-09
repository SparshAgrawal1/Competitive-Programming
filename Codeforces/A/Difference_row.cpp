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
 
    ll n;cin>>n;
    ll a[n];
    for(ll i=0 ; i<n ; i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    cout<<a[n-1]<<" ";
    for(ll i=1 ; i<n-1 ; i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<a[0]<<endl;
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