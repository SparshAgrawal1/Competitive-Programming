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
      ll n,m;
      cin>>n>>m;
      ll count=0;
      ll ans=INT_MIN;
      for(ll j=0 ; j<m ; j++)
      {
          string s;cin>>s;
          ll l=0;
          for(ll i=0 ; i<n ; i++)
          {
              if(s[i]=='1')
              {
                  l++;
              }
          }
          if(l==n)
          {
              ans=max(ans,count);
              count=0;
          }
          else
          {
              count++;
          }
      }
      ans=max(ans,count);
      cout<<ans<<endl;
 
    return 0;
 
}