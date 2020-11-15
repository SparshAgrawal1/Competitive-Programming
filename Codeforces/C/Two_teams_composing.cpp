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
    ll t;
   cin>>t;
 
    while(t--)
    {
       ll n;cin>>n;
       ll a[n];
       map<ll,ll> m;
       for(ll i=0 ; i<n ; i++)
       {
           cin>>a[i];
           m[a[i]]++;
       }
       ll l=-1;
       ll h=m.size();
       for(auto x:m)
       {
           l=max(l,x.second);
       }
       h=h-1;
       if(l==h)
       {
           cout<<h<<endl;
       }
       else if(h>l)
       {
           cout<<l<<endl;
       }
       else if(l>h)
       {
           if(l-h>=2)
           {
               cout<<h+1<<endl;
           }
           else
           {
               cout<<h<<endl;
           }
       }
 
    }
    return 0;
}