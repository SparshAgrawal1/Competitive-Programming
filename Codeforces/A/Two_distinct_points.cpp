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
    ll l1,r1,l2,r2;
    cin>>l1>>r1>>l2>>r2;
    ll x=l1;
    ll y=l2;
    if(x!=y)
    {
        cout<<x<<" "<<y<<endl;
    }
    else
    {
        cout<<x<<" "<<r2<<endl;
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
