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
       ll a[n+1]={0};
       for(ll i=1 ; i<=n ; i++)
       {
           a[i]=i;
       }
       if(n%2==0)
       {
           for(ll i=1 ; i<=n ; i+=2)
           {
               swap(a[i],a[i+1]);
           }
       }
       else
       {
           for(ll i=1 ; i<n ; i+=2)
           {
               swap(a[i],a[i+1]);
           }
           swap(a[n],a[n-1]);
       }
       for(ll i=1 ; i<=n ; i++)
       {
           cout<<a[i]<<" ";
       }
       cout<<endl;
   }
   return 0;
}