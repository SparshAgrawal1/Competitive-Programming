#include <iostream>
#include <bits/stdc++.h>
#include <string>
#include <cmath>
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
          string s;cin>>s;
          string s1="";
          string s2="";
          bool flag=false;
          for(ll i=0 ; i<n ; i++)
          {
              if(flag==false)
              {
                  if(s[i]=='1')
                  {
                      s1+='1';
                      s2+='0';
                      flag=true;
                  }
                  else if(s[i]=='2')
                  {
 
                      s1+='1';
                      s2+='1';
                  }
                  else
                  {
                      s1+='0';
                      s2+='0';
                  }
              }
              else
              {
                  s1+='0';
                  s2+=s[i];
              }
 
          }
          cout << s1<<endl<<s2<<endl;
      }
 
 
	return 0;
 
}