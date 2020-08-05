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
          ll n;
          cin>>n;
          ll a[n+1];
          for(ll i=1 ; i<=n ; i++)
          {
              cin>>a[i];
          }
          bool flag=true;
          for(ll i=1 ; i<n-1 ; i++)
          {
              if(a[i+1]>a[i]&&a[i+1]>a[i+2])
              {
                  cout <<"YES"<<endl;
                  cout<<i<<" "<<i+1<<" "<<i+2<<endl;
                  flag=false;
                  break;
              }
          }
          if(flag==true)
          cout << "NO"<<endl;
 
 
      }
      return 0;
 
}