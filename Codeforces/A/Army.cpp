#include <iostream>
#include <bits/stdc++.h>
#include <string>
#include <cmath>
#include <map>
#include <bitset>
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
using namespace std;
typedef long long int ll;
bool sortbysec(const pair<ll,ll> &a,
              const pair<ll,ll> &b)
{
 
        return (a.first > b.first);
 
 
 
}
 
int main()
{
    fast;
 
    ll n;
    cin>>n;
    ll a[n];
    for(ll i=1 ; i<n ; i++)
    {
        cin>>a[i];
    }
    ll x1,x2;
    cin>>x1>>x2;
    ll ans=0;
    ll l=-1;
    for(ll i=x1 ; i<n ; i++)
    {
        if(x2==l)
        {
            break;
        }
        else
        {
            ans+=a[i];
            l=i+1;
        }
 
    }
    cout<<ans<<endl;
	return 0;
}