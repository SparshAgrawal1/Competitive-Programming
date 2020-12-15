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
 
int main()
{
    fast;
	ll t;
cin>>t;
	while(t--)
    {
       ll n;cin>>n;
       vector<ll> v;
       for(ll i=0 ; i<n ; i++)
       {
           ll x;cin>>x;
           v.push_back(x);
       }
       sort(v.begin(),v.end());
       ll c=0;
       for(ll i=1 ; i<n ; i++)
       {
           if(v[i]-v[i-1]==1)
           {
               c++;
           }
       }
       if(c>=1)
       {
           cout<<2<<endl;
       }
       else
       {
           cout<<1<<endl;
       }
    }
	return 0;
}