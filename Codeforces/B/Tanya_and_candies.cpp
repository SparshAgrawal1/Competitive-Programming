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
   ll n;cin>>n;
   ll a[n];
   ll t1=0,t2=0;
   for(ll i=0 ; i<n ; i++)
   {
       cin>>a[i];
 
   }
   for(ll i=1 ; i<n ; i=i+2)
   {
       t2+=a[i];
   }
   for(ll i=2 ; i<n ; i=i+2)
   {
       t1+=a[i];
   }
   ll count=0;
   if(t1==t2)
   {
       count++;
   }
   for(ll i=1 ; i<n ; i++)
   {
      if((i+1)%2==0)
      {
          t2-=a[i];
          t2+=a[i-1];
      }
      else
      {
          t1-=a[i];
          t1+=a[i-1];
      }
      if(t1==t2)
      {
          count++;
      }
   }
   cout<<count<<endl;
 
 
}
int main()
{
    solve();
    return 0;
}