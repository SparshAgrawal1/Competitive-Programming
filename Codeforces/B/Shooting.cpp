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
      ll n;cin>>n;
      vector<pair<ll,ll>> v;
      ll a[n];
      for(ll i=0 ; i<n ; i++)
      {
          cin>>a[i];
          v.push_back({a[i],i+1});
      }
      sort(v.begin(),v.end());
      ll c=0;
      ll count=0;
      for(ll i=n-1 ; i>=0 ; i--)
      {
          count+=((v[i].first*c)+1);
          c++;
      }
      cout<<count<<endl;
      for(ll i=n-1 ; i>=0 ; i--)
      {
          cout<<v[i].second<<" ";
      }
      cout<<endl;
 
    return 0;
 
}