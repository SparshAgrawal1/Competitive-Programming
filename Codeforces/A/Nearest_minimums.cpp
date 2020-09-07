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
    ll n;cin>>n;
    ll a[n];
    map<ll,vector<ll>> m;
    for(ll i=0 ; i<n ; i++)
    {
        cin>>a[i];
        m[a[i]].push_back(i+1);
    }
    for(auto x:m)
    {
        ll ans=INT_MAX;
        vector<ll> v=m[x.first];
        for(ll i=0 ; i<v.size()-1 ; i++)
        {
            ans=min(ans,v[i+1]-v[i]);
        }
        cout<<ans<<endl;
        break;
    }
 
 
    return 0;
 
}