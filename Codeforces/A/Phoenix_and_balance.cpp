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
      ll t;cin>>t;
      while(t--)
      {
          ll n;cin>>n;
          vector<ll> v;
          for(ll i=1 ; i<=n ; i++)
          {
              v.push_back(powl(2,i));
          }
//          for(auto x:v)
//          {
//              cout<<x<<" ";
//          }
//          cout<<endl;
          ll count1=v[n-1];
          ll count2=v[n-2];
          v.pop_back();
          v.pop_back();
//          for(auto x:v)
//          {
//              cout<<x<<" ";
//          }
          bool flag=true;
          ll l=v.size()/2;
          for(ll i=0 ; i<l ; i++)
          {
              count1=count1+v[i];
          }
          for(ll i=l ; i<v.size() ; i++)
          {
              count2=count2+v[i];
          }
          cout<<abs(count1-count2)<<endl;
 
      }
    return 0;
 
}