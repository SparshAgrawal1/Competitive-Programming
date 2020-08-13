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
          ll a,b,c,n;
          cin>>a>>b>>c>>n;
          ll ans=max(a,max(b,c));
          a=ans-a;
          b=ans-b;
          c=ans-c;
          ll count=a+b+c;
          if(count<=n)
          {
              n=n-count;
              if(n%3==0)
              {
                  cout<<"YES"<<endl;
              }
              else
              {
                  cout<<"NO"<<endl;
              }
          }
          else
          {
              cout<<"NO"<<endl;
          }
      }
}