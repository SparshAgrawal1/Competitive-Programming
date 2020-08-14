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
      char a[n][m];
      for(ll i=0 ; i<n ; i=i+2)
      {
          for(ll j=0 ; j<m ; j++)
          {
              a[i][j]='#';
          }
      }
      bool flag=false;
      for(ll i=1 ; i<n ; i=i+2)
      {
 
          if(flag==false)
          {
              a[i][m-1]='#';
              for(ll j=0 ; j<m-1 ; j++)
              {
                  a[i][j]='.';
              }
              flag=!flag;
          }
          else
          {
              a[i][0]='#';
              for(ll j=1 ; j<m ; j++)
            {
              a[i][j]='.';
            }
            flag=!flag;
          }
 
      }
      for(ll i=0 ; i<n ; i++)
      {
          for(ll j=0 ; j<m ; j++)
          {
              cout<<a[i][j];
          }
          cout<<endl;
      }
     return 0;
}