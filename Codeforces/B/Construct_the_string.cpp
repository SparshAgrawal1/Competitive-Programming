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
      ll t;
      cin>>t;
      while(t--)
      {
          ll n,a,b;
          cin>>n>>a>>b;
          ll x=b-1;
          string s="";
          for(ll i=1 ; i<=a-x ; i++)
          {
              s=s+'a';
          }
          char f='b';
          for(ll i=1 ; i<=x ; i++)
          {
              s=s+f;
              f++;
          }
          ll l1=s.length();
          ll l=s.length();
          ll h=0;
          ll y=n-l;
          f='b';
          if(l==1)
          {
              for(ll i=1 ; i<=y ; i++)
              {
                  s=s+f;
                  f++;
                  if(f=='z')
                  {
                      f='a';
                  }
              }
          }
          else
          {
              for(ll i=1 ; i<=y ; i++)
              {
                  char g=s[h];
                  s=s+g;
                  h++;
                  if(h==l1)
                  {
                      h=0;
                  }
              }
          }
 
          cout<<s<<endl;
 
      }
    return 0;
 
}