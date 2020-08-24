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
           ll n;
           cin>>n;
           ll a[n],b[n];
           ll ans=INT_MAX;
           for(ll i=0 ; i<n ; i++)
           {
               cin>>a[i];
               b[i]=a[i];
               ans=min(ans,a[i]);
           }
           if(n==1)
           {
               cout<<"YES"<<endl;
           }
           else
           {
               sort(b,b+n);
               bool flag=false;
               for(ll i=0 ; i<n ; i++)
               {
                   if(a[i]!=b[i]&&a[i]%ans!=0)
                   {
                       flag=true;
                       break;
                   }
               }
               if(flag==true)
               {
                   cout<<"NO"<<endl;
               }
               else
               {
                   cout<<"YES"<<endl;
               }
           }
       }
	return 0;
 
}