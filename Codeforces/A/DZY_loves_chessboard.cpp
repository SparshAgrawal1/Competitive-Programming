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
bool sbs(const pair<ll,ll> &a,const pair<ll,ll> &b)
{
    return (a.second < b.second);
}
 
ll xxxx(ll a,ll b)
{
   while(a>b)
   {
       a=a/3;
   }
   return a;
}
void solve()
{
   ll n,m;
   cin>>n>>m;
   char a[n][m],b[n][m];
   set<pair<ll,ll>> s;
   bool flag1=false;
   for(ll i=0 ; i<n ; i++)
   {
       bool flag;
       if(i%2==0)
       {
           flag=false;
       }
       else
       {
           flag=true;
       }
       for(ll j=0 ; j<m ; j++)
       {
           cin>>a[i][j];
           if(a[i][j]=='-')
           {
               b[i][j]=a[i][j];
           }
           else
           {
               if(flag==false)
               {
                   b[i][j]='B';
               }
               else
               {
                   b[i][j]='W';
               }
           }
           flag=!flag;
 
       }
   }
   for(ll i=0 ; i<n ; i++)
   {
       for(ll j=0 ; j<m ; j++)
       {
           cout<<b[i][j];
       }
       cout<<endl;
   }
 
 
 
 
}
int main()
{
    fast;
  ll t;
  t=1;
//    cin>>t;
  while(t--)
    {
        solve();
 
    }
  return 0;
}