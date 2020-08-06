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
         ll a,b,n,s;
         cin>>a>>b>>n>>s;
         ll count=0;
         ll l=s/n;
         if(l<=a)
         {
             count=count+(n*l);
         }
         else
         {
             count=count+(n*a);
         }
         count = s-count;
         if(count<=b)
         {
             cout<<"YES"<<endl;
         }
         else
         {
             cout<<"NO"<<endl;
         }
//         if(count>s)
//         {
//             count=count-n;
//             ll temp=s-count;
//             if(temp<=b)
//             {
//                 cout<<"YES"<<endl;
//             }
//             else
//             {
//                 cout<<"NO"<<endl;
//             }
//         }
//         else if(count==s)
//         {
//             cout<<"YES"<<endl;
//         }
//         else
//         {
//             ll temp=s-count;
//             if(temp<=b)
//             {
//                 cout<<"YES"<<endl;
//             }
//             else
//             {
//                 cout<<"NO"<<endl;
//             }
//         }
 
 
     }
 
    return 0;
 
}