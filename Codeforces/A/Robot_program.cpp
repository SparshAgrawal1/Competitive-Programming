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
       ll x,y;
       cin>>x>>y;
       if(x==y)
       {
           cout<<x+y<<endl;
       }
       else
       {
           if(x>y)
           {
               if(y>0)
               {
                   ll l=x-y;
                   cout<<2*y + 2*l - 1<<endl;
               }
               else
               {
                   cout<<2*x - 1<<endl;
               }
           }
           else
           {
               if(x>0)
               {
                   ll l=y-x;
                   cout<<2*x + 2*l -1<<endl;
               }
               else
               {
                   cout<<2*y - 1<<endl;
               }
           }
       }
   }
   return 0;
}