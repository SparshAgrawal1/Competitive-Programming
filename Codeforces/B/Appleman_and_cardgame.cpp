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
      ll n,k;
      cin>>n>>k;
      string s;
      cin>>s;
      unordered_map<ll,ll> m;
      for(ll i=0 ; i<s.length() ; i++)
      {
          m[s[i]]++;
      }
      vector<pair<ll,ll>> v;
      for(auto x:m)
      {
          v.push_back({x.second,x.first});
      }
//      vector<ll> c;
//      c.push_back(1);c.push_back(2);
//      sort(c.begin(),c.end(),greater<ll>());
      sort(v.begin(),v.end());
      ll count=0;
      for(ll i=v.size()-1 ; i>=0 ; i--)
      {
          if(v[i].first>k)
          {
              v[i].first=k;
          }
          count=count+(v[i].first*v[i].first);
          k=k-v[i].first;
          if(k==0)
          {
              break;
          }
      }
 
      cout<<count<<endl;
    return 0;
 
}