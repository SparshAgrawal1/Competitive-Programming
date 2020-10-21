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
        ll a[n];
        vector<ll> v;
        for(ll i=0 ; i<n ; i++)
        {
            cin>>a[i];
            if(a[i]==1)
            {
                v.push_back(i+1);
            }
        }
        ll m=v.size();
        ll ans=0;
        for(ll i=1 ; i<m ; i++)
        {
            ans+=(v[i]-v[i-1])-1;
        }
        cout<<ans<<endl;
 
 
 
    }
    return 0;
}