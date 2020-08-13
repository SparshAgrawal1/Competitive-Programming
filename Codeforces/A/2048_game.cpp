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
          vector<ll> v;
          ll count=0;
          map<ll,ll,greater<ll>> m;
          for(ll i=0 ; i<n ; i++)
          {
              ll a;cin>>a;
              v.push_back(a);
              m[a]++;
              if(a<=2048)
              {
                  count+=a;
              }
          }
          if(count>=2048)
          {
              cout<<"YES"<<endl;
          }
          else
          {
              cout<<"NO"<<endl;
          }
 
      }
      return 0;
 
}