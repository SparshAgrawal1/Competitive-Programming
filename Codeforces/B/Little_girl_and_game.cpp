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
      string s;
      cin>>s;
      ll n=s.length();
      map<ll,ll> m;
      for(ll i=0 ; i<n ; i++)
      {
          m[s[i]]++;
      }
      bool flag=true;
      ll ans=0;
      for(auto x:m)
      {
          if(x.second%2!=0)
          {
              ans++;
          }
      }
      if(ans%2==0&&ans!=0)
      {
          cout<<"Second"<<endl;
      }
      else
      {
          cout<<"First"<<endl;
      }
 
     return 0;
}
