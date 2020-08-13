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
          ll x,y,a1,a2;
          cin>>x>>y>>a1>>a2;
          if((y-x)%(a1+a2)!=0)
          {
              cout<<-1<<endl;
          }
          else
          {
              cout<<(y-x)/(a1+a2)<<endl;
          }
      }
     return 0;
}