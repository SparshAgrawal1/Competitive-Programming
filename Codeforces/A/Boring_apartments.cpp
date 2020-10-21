#include <iostream>
#include <bits/stdc++.h>
#include <string>
#include <cmath>
#include <map>
#include <bitset>
#define MAX 1000
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
using namespace std;
typedef long long int ll;
 
 
int main()
{
    fast;
    ll t;cin>>t;
 
    while(t--)
    {
        ll n;cin>>n;
        ll x=n%10;
        ll y=0;
        ll z=n;
        while(z>0)
        {
//            z=z/10;
            y++;
            z=z/10;
        }
        ll a=10;
        ll b=x-1;
        ll ans=a*b;
        for(ll i=1 ; i<=y ; i++)
        {
            ans+=i;
        }
        cout<<ans<<endl;
 
 
    }
    return 0;
}