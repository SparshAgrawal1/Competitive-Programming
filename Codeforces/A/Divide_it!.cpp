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
    ll ans=0;
    while(n!=1)
    {
        if(n%5==0)
        {
            n=n*4/5;
            ans++;
        }
        else if(n%3==0)
        {
            n=n*2/3;
            ans++;
        }
        else if(n%2==0)
        {
            n=n/2;
            ans++;
        }
        else
        {
            ans=-1;
            break;
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