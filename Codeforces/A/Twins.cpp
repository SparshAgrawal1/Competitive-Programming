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
      ll a[n];
      ll count=0;
      for(ll i=0 ; i<n  ;i++)
      {
          cin>>a[i];
          count+=a[i];
      }
      sort(a,a+n,greater<ll>());
      ll ans=0;
      ll l=0;
      for(ll i=0 ; i<n ; i++)
      {
          ans++;
          l+=a[i];
          count-=a[i];
          if(l>count)
          {
              break;
          }
      }
      cout<<ans<<endl;
      return 0;
 
}