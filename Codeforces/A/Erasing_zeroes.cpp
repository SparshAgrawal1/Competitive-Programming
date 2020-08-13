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
          string s;
          cin>>s;
          ll count=0;
//          cout<<"c"<<endl;
        vector<ll> v;
          for(ll i=0 ; i<s.length() ; i++)
          {
              if(s[i]=='1')
              {
                  v.push_back(i+1);
              }
          }
          if(v.size()>1)
          {
              for(ll i= 0 ;i<v.size()-1 ; i++)
          {
              count=count+((v[i+1]-v[i])-1);
          }
          }
 
          cout<<count<<endl;
      }
     return 0;
}