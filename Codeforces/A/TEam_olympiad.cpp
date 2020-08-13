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
      ll n;
      cin>>n;
      map<ll,vector<ll>> m;
      ll a[n];
      for(ll i=0 ; i<n ; i++)
      {
          cin>>a[i];
          m[a[i]].push_back(i+1);
      }
      ll count=0;
      ll ans=INT_MAX;
      if(m.size()<3)
      {
          cout<<0<<endl;
      }
      else
      {
          for(auto x:m)
          {
              ll h=m[x.first].size();
              ans=min(ans,h);
          }
          if(ans==0)
          {
              cout<<0<<endl;
          }
          else
          {
              cout<<ans<<endl;
              ll l=0;
              for(ll i=0 ; i<ans ; i++)
              {
                  for(auto x:m)
                  {
                      cout<<m[x.first][l]<<" ";
                  }
                  cout<<endl;
                  l++;
              }
 
          }
      }
     return 0;
}
