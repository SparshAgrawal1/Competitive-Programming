#include <iostream>
#include <bits/stdc++.h>
#include <string>
#include <cmath>
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
using namespace std;
typedef long long int ll;
bool sortbysec(const pair<ll,ll> &a,
              const pair<ll,ll> &b)
{
    if(a.first==b.first)
    {
        return(a.second<b.second);
    }
    return (a.first > b.first);
}
 
int main()
{
      fast;
 
      ll n,k;
      cin>>n>>k;
      map<ll,vector<ll>,greater<ll>> m;
      vector<pair<ll,ll>> v;
      while(n--)
      {
          ll a,b;
          cin>>a>>b;
          v.push_back({a,b});
      }
 
      sort(v.begin(),v.end(),sortbysec);
      ll x1=v[k-1].first;
      ll count=0;
      ll x2=v[k-1].second;
      for(auto x:v)
      {
          if(x.first==x1&&x.second==x2)
          {
              count++;
          }
      }
      cout << count << endl;
 
 
 
 
	return 0;
 
}