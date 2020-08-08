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
      ll n,m;
      cin>>n>>m;
      unordered_map<string,vector<string>> q;
      for(ll i=0  ; i<m ; i++)
      {
          string s1,s2;
          cin>>s1>>s2;
          q[s1].push_back(s2);
          q[s2].push_back(s1);
      }
      string a[n];
      for(ll i=0 ; i<n ; i++)
      {
          cin>>a[i];
          string d1 = a[i];
          ll x1=d1.length();
          string d2 = q[a[i]][0];
          ll x2=d2.length();
          if(x1<=x2)
          {
              cout<<d1<<" ";
          }
          else
          {
              cout<<d2<<" ";
          }
 
      }
      cout<<endl;
 
    return 0;
 
}