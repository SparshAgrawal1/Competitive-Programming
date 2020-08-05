#include <iostream>
#include <bits/stdc++.h>
#include <string>
#include <cmath>
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
using namespace std;
typedef long long int ll;
 
 
int main()
{
      fast;
      ll t;cin>>t;
      while(t--)
      {
          ll n,k;
          cin>>n>>k;
          ll a[n];
          for(ll i=0; i<n ; i++)
          {
              cin>>a[i];
          }
          sort(a,a+n,greater<ll>());
          bool flag=true;
          ll count=0;
          ll l=1;
          for(ll i=0 ; i<n ; i++)
          {
              if(a[i]*l>=k)
              {
                  count++;
                  l=1;
              }
              else{
                l++;
              }
          }
          cout << count << endl;
//          ll l=0;
//          while(l<n)
//          {
//              if(a[l]>=k)
//              {
//
//                  curr++;
//                  l++;
//              }
//              else
//              {
//                  ll x=k/a[l];
//                  if(k%a[l]!=0)
//                  {
//                      x=x+1;
//                  }
//                  ll y=n-l;
//                  y--;
//                  x--;
//                  ll q=l+x;
//                  if(q>=n)
//                  {
//                      break;
//                  }
//                  else
//                  {
//                      if(a[q]*(x+1)>=k)
//                      {
//                          curr++;
//                      }
//                      else
//                      {
//                          break;
//                      }
//                      l=q+1;
//                  }
//              }
//          }
//          cout << curr << endl;
 
      }
	return 0;
 
}