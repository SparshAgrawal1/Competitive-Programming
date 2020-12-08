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
       ll n,q;cin>>n>>q;
       string s;cin>>s;
       while(q--)
       {
           ll a1,a2;cin>>a1>> a2;
           ll a=a2-a1;a=a+1;
           string f = s.substr(a1-1,a);
           char b1=s[a1-1];
           char b2=s[a2-1];
           string f1=s.substr(0,a1-1);
           string f2 = s.substr(a2,n-a2);
           if(f1.find(b1)==-1&&f2.find(b2)==-1)
           {
               cout<<"NO"<<endl;
           }
           else
           {
               cout<<"YES"<<endl;
           }
//           cout<<f<<endl;
       }
   }
   return 0;
}