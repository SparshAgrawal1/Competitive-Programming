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
      ll n,m;cin>>n>>m;
      char a[n][m];
      set<char> s;
      for(ll i=0 ; i<n ; i++)
      {
          for(ll j=0 ; j<m ; j++)
          {
              cin>>a[i][j];
              s.insert(a[i][j]);
          }
      }
      if(s.find('C')!=s.end()||s.find('M')!=s.end()||s.find('Y')!=s.end())
      {
          cout<<"#Color"<<endl;
      }
      else
      {
          cout<<"#Black&White"<<endl;
      }
}