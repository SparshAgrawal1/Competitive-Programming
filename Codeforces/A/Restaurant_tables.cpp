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
      ll n,a,b;
      cin>>n>>a>>b;
      ll x[n];
      ll ans=0;
      ll c=0;
      for(ll i=0 ; i<n ; i++)
      {
          cin>>x[i];
          if(x[i]==1)
          {
              if(a>0)
              {
                  a--;
              }
              else if(b>0)
              {
                  b--;
                  c++;
              }
              else if(c>0)
              {
                  c--;
              }
              else
              {
                  ans++;
              }
          }
          else
          {
              if(b>0)
              {
                  b--;
              }
              else
              {
                  ans=ans+2;
              }
          }
 
      }
    cout<<ans<<endl;
    return 0;
}