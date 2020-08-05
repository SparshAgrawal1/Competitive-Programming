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
      ll n;
      cin>>n;
      ll a[n+1],b[n+1];
      vector<ll> v[n+1];
      bool visited[n+1]={false};
      for(ll i=1; i<=n ; i++)
      {
 
          cin>>a[i]>>b[i];
//          v[a].push_back(b);
      }
      ll count=0;
      for(ll i=1 ; i<=n ; i++)
      {
          for(ll j=1 ; j<=n ; j++)
          {
              if(i!=j)
              {
                  if(a[i]==b[j])
                  {
                      count++;
                      break;
                  }
              }
          }
      }
      cout<<n-count<<endl;
    return 0;
 
}