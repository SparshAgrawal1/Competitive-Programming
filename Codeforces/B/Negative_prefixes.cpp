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
 
 
 
void solve()
{
   ll n;
   cin>>n;
   ll a[n],b[n];
   for(ll i=0 ; i<n ; i++)
   {
       cin>>a[i];
   }
   vector<ll> v;
   for(ll i=0 ; i<n ; i++)
   {
       cin>>b[i];
       if(b[i]==0)
       {
           v.push_back(a[i]);
       }
   }
   sort(v.begin(),v.end(),greater<ll>());
   ll l=0;
   for(ll i=0 ; i<n ; i++)
   {
       if(b[i]==0)
       {
           a[i]=v[l];
           l++;
       }
   }
   for(ll i=0 ; i<n ; i++)
   {
       cout<<a[i]<<" ";
   }
   cout<<endl;
}
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        solve();
    }
}
 