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
    ll n,x,y;
    cin>>n>>x>>y;
    string s;cin>>s;
    ll cnt=0;
    ll l=n-1;
    for(ll i=0 ; i<y ; i++ )
    {
        if(s[l]=='1')
        {
            s[l]='0';
            cnt++;
        }
        l--;
    }
    if(s[l]=='0')
    {
        s[l]='1';
        cnt++;
    }
    l--;
    ll h=x-y-1;
    for(ll i=0 ; i<h ; i++)
    {
        if(s[l]=='1')
        {
            cnt++;
            s[l]='0';
        }
        l--;
    }
 
    cout<<cnt<<endl;
 
 
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