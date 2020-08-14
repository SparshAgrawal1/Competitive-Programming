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
          ll n;
          cin>>n;
          ll l=n/2;
          if(l%2!=0)
          {
              cout<<"NO"<<endl;
          }
          else
          {
              cout<<"YES"<<endl;
              ll h=2;
              ll ans=0;
              for(ll i=1 ; i<=l ; i++)
              {
                  cout<<h<<" ";
                  ans+=h;
                  h=h+2;
 
              }
              h=1;
              ll count=0;
              for(ll i=1 ; i<=l-1 ; i++)
              {
                  cout<<h<<" ";
                  count+=h;
                  h=h+2;
 
 
              }
              cout<<ans-count;
              cout<<endl;
 
          }
 
      }
     return 0;
}