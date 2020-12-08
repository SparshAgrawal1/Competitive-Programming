#include <iostream>
#include <bits/stdc++.h>
#include <string>
#include <cmath>
#include <map>
#include <math.h>
#include <bitset>
#define MAX 1000
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
       ll a[n];
       map<ll,ll> m;
       for(ll i=0 ; i<n ; i++)
       {
           cin>>a[i];
           m[a[i]]++;
       }
       ll l=-1;
       for( auto x:m)
       {
           if(x.second==1)
           {
               l=x.first;
               break;
           }
       }
       if(l==-1)
       {
           cout<<-1<<endl;
       }
       else
       {
           for(ll i=0 ; i<n ; i++)
           {
               if(a[i]==l)
               {
                   cout<<i+1<<endl;
                   break;
               }
           }
       }
   }
   return 0;
}