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
         ll a[n];
         for(ll i=0 ; i<n ; i++)
         {
             cin>>a[i];
         }
         ll ans=INT_MAX;
         ll count=0;
         for(ll i=n-1 ; i>=0 ; i--)
         {
             if(a[i]<=ans)
             {
                 ans=min(ans,a[i]);
             }
             else
             {
                 count++;
             }
         }
         cout<<count<<endl;
     }
 
    return 0;
 
}