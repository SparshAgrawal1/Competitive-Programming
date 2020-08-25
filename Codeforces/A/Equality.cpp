#include <iostream>
#include <bits/stdc++.h>
#include <string>
#include <cmath>
#include <map>
#include <bitset>
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
using namespace std;
typedef long long int ll;
 
 
int main()
{
        fast;
 
    ll n,k;
    cin>>n>>k;
    string s;
    cin>>s;
    map<ll,ll> m;
    for(ll i=0 ; i<n ; i++)
    {
        m[s[i]]++;
    }
    if(m.size()<k)
    {
        cout<<0;
    }
    else
    {
        ll ans=INT_MAX;
        for(auto x:m)
        {
            ans=min(ans,x.second);
 
        }
        cout<<ans*k;
    }
	return 0;
 
}