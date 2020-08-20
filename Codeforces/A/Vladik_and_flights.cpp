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
      ll n,a,b;
      cin>>n>>a>>b;
 
      string s;
      cin>>s;
      vector<ll> v1,v2;
      for(ll i=0 ; i<n ;i++)
      {
          if(s[i]=='1')
          {
              v1.push_back(i+1);
          }
          else
          {
              v2.push_back(i+1);
          }
      }
      if(a==b)
      {
          cout<<0<<endl;
      }
      else
      {
          if(s[b-1]==s[a-1])
          {
              cout<<0<<endl;
          }
          else
          {
              if(s[a-1]=='0')
              {
                  char x = s[a-1];
                  ll curr=0;
                  if(b>a)
                  {
                      ll l=-1;
                      for(ll i=0 ; i<v2.size() ; i++)
                      {
                          if(v2[i]<b)
                          {
                              l=v2[i];
                          }
                      }
                      if(l!=-1)
                      {
                          cout<<1<<endl;
                      }
                      else
                      {
                          cout<<b-a<<endl;
                      }
 
                  }
                  else
                  {
                      ll l=-1;
                      for(ll i=v2.size()-1 ; i>=0 ; i--)
                      {
                          if(v2[i]>b)
                          {
                              l=v2[i];
                          }
                      }
                      if(l!=-1)
                      {
                          cout<<1<<endl;
                      }
                      else
                      {
                          cout<<a-b<<endl;
                      }
                  }
              }
              else
              {
                  char x = s[a-1];
                  ll curr=0;
                  if(b>a)
                  {
                      ll l=-1;
                      for(ll i=0 ; i<v1.size() ; i++)
                      {
                          if(v1[i]<b)
                          {
                              l=v1[i];
                          }
                      }
                      if(l!=-1)
                      {
                          cout<<1<<endl;
                      }
                      else
                      {
                          cout<<b-a<<endl;
                      }
 
                  }
                  else
                  {
                      ll l=-1;
                      for(ll i=v1.size()-1 ; i>=0 ; i--)
                      {
                          if(v1[i]>b)
                          {
                              l=v1[i];
                          }
                      }
                      if(l!=-1)
                      {
                          cout<<1<<endl;
                      }
                      else
                      {
                          cout<<a-b<<endl;
                      }
                  }
              }
          }
      }
 
    return 0;
}