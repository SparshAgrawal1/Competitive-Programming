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
       ll n;
       cin>>n;
       if(n%2==0)
       {
           if(n==2)
           {
               cout<<1<<endl;
           }
           else
           {
               cout<<2<<endl;
           }
       }
       else
       {
           if(n==1)
           {
               cout<<0<<endl;
           }
           else if(n==3)
           {
               cout<<2<<endl;
           }
           else
           {
               cout<<3<<endl;
           }
       }
 
   }
   return 0;
}