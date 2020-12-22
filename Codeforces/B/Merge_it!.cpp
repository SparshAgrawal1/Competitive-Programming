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
    ll a1=0,a2=0,a3=0;
    for(ll i=0 ; i<n ; i++)
    {
        cin>>a[i];
        if(a[i]%3==0)
        {
            a1++;
        }
        else if(a[i]%3==1)
        {
            a2++;
        }
        else
        {
            a3++;
        }
    }
    ll a4=min(a2,a3);
    a2-=a4;a3-=a4;
    ll ans=a1+a4;
    ans+=(a2+a3)/3;cout<<ans<<endl;
 
 
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