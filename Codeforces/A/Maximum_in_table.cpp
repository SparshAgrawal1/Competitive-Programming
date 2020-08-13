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
      ll a[n+1][n+1];
      ll ans=1;
      for(ll i=1 ; i<=n ; i++)
      {
          a[i][1]=1;
          a[1][i]=1;
      }
      for(ll i=2 ; i<=n ; i++)
      {
          for(ll j=2 ; j<=n ; j++)
          {
              a[i][j]=a[i-1][j]+a[i][j-1];
              ans=max(ans,a[i][j]);
          }
      }
      cout<<ans<<endl;
      return 0;
 
}