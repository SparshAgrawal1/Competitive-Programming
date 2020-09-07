#include <iostream>
#include <bits/stdc++.h>
#include <string>
#include <cmath>
#include <map>
#include <bitset>
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
       ll n,x,y;
       cin>>n>>x>>y;
       if(n==2)
       {
           cout<<x<<" "<<y<<endl;
       }
       else
       {
           ll l=y-x;
           ll m=-1;
           for(ll i=n-1 ; i>=1 ; i--)
           {
               if(l%i==0)
               {
                   m=l/i;
                   break;
               }
           }
//           cout<<m<<endl;
           vector<ll> v;
           bool flag=false;
           ll k=y;
           while(v.size()!=n)
           {
               v.push_back(k);
               if(flag==false)
               {
                   k=k-m;
                   if(k<=0)
                   {
                       k=y+m;
                       flag=true;
                   }
               }
               else
               {
                   k+=m;
               }
 
           }
           for(auto x:v)
           {
               cout<<x<< " ";
           }
           cout<<endl;
 
       }
 
    }
  return 0;
 
}