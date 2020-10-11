#include <iostream>
#include <bits/stdc++.h>
#include <string>
#include <cmath>
#include <map>
#include <bitset>
#define MAX 1000
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
using namespace std;
typedef long long int ll;
 
 
void solve()
{
 
   ll n;
   cin>>n;
   ll a[n];
   for(ll i=0 ; i<n ; i++)
   {
       cin>>a[i];
   }
   ll b[n+1]={0};
   ll h=n;
   for(ll i=0 ; i<n ; i++)
   {
       b[a[i]]=1;
       if(h==a[i])
       {
           ll j=h;
           while(b[j]==1)
           {
               cout<<j<<" ";
               j--;
           }
           cout<<endl;
           h=j;
       }
       else
       {
           b[a[i]]=1;
           cout<<endl;
       }
   }
}
 
int main()
{
    ll t=1;
//    cin>>t;
    while(t--)
    {
        solve();
    }
 
 
    return 0;
}