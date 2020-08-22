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
bool sortbysecdesc(const pair<int,int> &a, const pair<int,int> &b)
{
        return (a.first-a.second)<(b.first-b.second);
}
 
int main()
{
        fast;
       ll t;
       cin>>t;
       while(t--)
       {
           ll a1,a2,a3,b1,b2,b3;
           cin>>a1>>a2>>a3;
           cin>>b1>>b2>>b3;
           ll ans=0;
           ll x1=min(a3,b2);
           ans=ans+(2*x1);
           a3=a3-x1;
           b2=b2-x1;
           if(a3>0)
           {
               ll x2=min(a3,b3);
               a3=a3-x2;
               b3=b3-x2;
               if(a3>0)
               {
                   ll x3=min(a3,b1);
                   a3=a3-x3;
                   b1=b1-x3;
               }
           }
           ll x4=min(a2,b2);
           a2=a2-x4;
           b2=b2-x4;
           if(a2>0)
           {
               ll x5=min(a2,b1);
               a2=a2-x5;
               b1=b1-x5;
               if(a2>0)
               {
                   ll x6=min(a2,b3);
                   a2=a2-x6;
                   b3=b3-x6;
                   ans=ans-(2*x6);
               }
           }
           cout<<ans<<endl;
 
       }
	return 0;
 
}