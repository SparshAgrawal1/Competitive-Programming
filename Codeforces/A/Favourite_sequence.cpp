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
    for(ll i=0 ; i<n ; i++)
    {
        cin>>a[i];
    }
    ll l=0;
    ll h=n-1;
    while(l<h)
    {
        cout<<a[l]<<" ";
        cout<<a[h]<<" ";
        l++;
        h--;
    }
    if(l==h)
    {
        cout<<a[l]<<" ";
    }
    cout<<endl;
 
 
 
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