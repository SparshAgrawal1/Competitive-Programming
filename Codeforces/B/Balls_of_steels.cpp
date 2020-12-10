#include <iostream>
#include <bits/stdc++.h>
#include <string>
#include <cmath>
#include <map>
#include <bitset>
#define MAX 1000
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
using namespace std;
typedef long long int ll;
bool sortbysec(const pair<ll,ll> &a,const pair<ll,ll> &b)
{
    return (a.second < b.second);
}
 
int main()
{
	fast;
	ll t;
	cin>>t;
	while(t--)
    {
      ll n,k;cin>>n>>k;
      vector<pair<ll,ll>> v;
      for(ll i=0 ; i<n ; i++)
      {
          ll a,b;cin>>a>>b;
          v.push_back({a,b});
      }
      ll fin=0;
      ll count=0;
//      while(fin!=n-1)
//      {
          map<ll,vector<ll>> s;
 
          for(ll i=0 ; i<n ; i++)
          {
              for(ll j=0 ; j<n ; j++)
              {
                          ll l = abs(v[i].first-v[j].first);
                          ll h=abs(v[i].second-v[j].second);
                          if(l+h<=k)
                          {
                              s[i].push_back(j);
                          }
 
 
              }
          }
          ll temp=INT_MIN;
          ll flag=-1;
          for(auto x:s)
          {
              ll curr=x.first;
              if(s[curr].size()==n)
              {
                  flag=curr;
                  break;
              }
          }
          if(flag==-1)
          {
              cout<<-1<<endl;
          }
          else
          {
              cout<<1<<endl;
          }
//      }
 
 
    }
 
	return 0;
}