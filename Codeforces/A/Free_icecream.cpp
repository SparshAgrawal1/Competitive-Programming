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
      ll n,x;
      cin>>n>>x;
      ll count=0;
      while(n--)
      {
          char c;
          ll a;
          cin>>c>>a;
          if(c=='+')
          {
              x=x+a;
          }
          else
          {
              if(x>=a)
              {
                  x=x-a;
              }
              else
              {
                  count++;
              }
          }
      }
      cout<<x<<" "<<count<<endl;
      return 0;
}