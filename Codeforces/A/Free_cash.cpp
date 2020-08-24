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
 
           ll n;
           cin>>n;
           map<pair<ll,ll>,ll> m;
           vector<pair<ll,ll>> v;
           for(ll i=0 ; i<n ; i++)
           {
               ll a,b;
               cin>>a>>b;
               v.push_back({a,b});
               m[{a,b}]++;
           }
           ll ans=INT_MIN;
           for(auto x:m)
           {
               ans=max(ans,x.second);
           }
           cout<<ans<<endl;
 
 
 
	return 0;
 
}