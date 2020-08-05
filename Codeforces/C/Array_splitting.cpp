#include <iostream>
#include <bits/stdc++.h>
#include <string>
#include <cmath>
#include <map>
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
using namespace std;
typedef long long int ll;
 
 
int main()
{
      fast;
    ll n,k;cin>>n>>k;
    ll a[n];
    for(ll i=0 ; i<n ; i++)
    {
        cin>>a[i];
    }
   ll b[n-1];
   ll l=0;
   for(ll i=0 ; i<n-1 ; i++)
   {
       b[i]=a[l+1]-a[l];
       l++;
   }
   sort(b,b+n-1);
   ll count=0;
   for(ll i=0 ; i<n-k ; i++)
   {
       count+=b[i];
   }
   cout<<count<<endl;
 
}