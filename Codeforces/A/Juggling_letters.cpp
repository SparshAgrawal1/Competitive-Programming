#include <iostream>
#include <bits/stdc++.h>
#include <string>
#include <cmath>
#include <map>
#include <bitset>
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
using namespace std;
typedef long long int ll;
bool sortbysec(const pair<ll,ll> &a,
              const pair<ll,ll> &b)
{
 
        return (a.first > b.first);
 
 
 
}
 
int main()
{
    fast;
  ll t;
  cin>>t;
  while(t--)
  {
      ll n;
      cin>>n;
      map<ll,ll> m;
      for(ll i=0 ; i<n ; i++)
      {
          string s;
          cin>>s;
          for(ll i=0 ; i<s.length() ; i++)
          {
              m[s[i]]++;
          }
      }
      bool flag=false;
      for(auto x:m)
      {
          if(x.second%n!=0)
          {
              flag=true;
              break;
          }
      }
      if(flag==true)
      {
          cout<<"NO"<<endl;
      }
      else
      {
          cout<<"YES"<<endl;
      }
  }
	return 0;
}
