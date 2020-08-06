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
         ll n;cin>>n;
         ll a[n+1];
         ll l;
         for(ll i=1 ; i<=n ; i++)
         {
             cin>>a[i];
             if(a[i]==1)
             {
                 l=i;
             }
         }
 
         if(n==1||n==2)
         {
             cout<<"YES"<<endl;
         }
         else
         {
             ll j=l+1;
             if(j==n+1)
             {
                 j=1;
             }
             vector<ll> q;
             while(true)
             {
                 if(j==l)
                 {
                     break;
                 }
                 q.push_back(a[j]);
//                 cout<<a[j]<<" ";
                 j++;
                 if(j==n+1)
                 {
                     j=1;
                 }
             }
             bool flag=false;
             for(ll i=0 ; i<q.size()-1 ; i++)
             {
                 if(abs(q[i+1]-q[i])!=1)
                 {
                     flag=true;
                     break;
                 }
             }
             if(flag==false)
             {
                 cout<<"YES"<<endl;
             }
             else
             {
                 cout<<"NO"<<endl;
             }
         }
 
 
     }
 
    return 0;
 
}