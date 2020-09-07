#include <iostream>
#include <bits/stdc++.h>
#include <string>
#include <cmath>
#include <map>
#include <bitset>
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
using namespace std;
typedef long long int ll;
bool sortbysec(const pair<ll,ll> &a,
              const pair<ll,ll> &b)
{
 
    return (a.first > b.first);
 
 
 
}
bool isPrime(ll n)
{
    if (n <= 1)
        return false;
    if (n <= 3)
        return true;
 
    if (n % 2 == 0 || n % 3 == 0)
        return false;
 
    for (ll i = 5; i * i <= n; i = i + 6)
        if (n % i == 0 || n % (i + 2) == 0)
            return false;
 
    return true;
}
 
int main()
{
    fast;
   ll n;
   cin>>n;
   ll a[n];
   for(ll i=0 ; i<n ; i++)
   {
       cin>>a[i];
   }
   if(n==1)
   {
       cout<<0<<endl;
   }
   else
   {
       ll count=0;
       ll ans1=a[0];
       ll ans2=a[0];
       for(ll i=1 ; i<n ; i++)
       {
           if(a[i]>ans1||a[i]<ans2)
           {
               count++;
           }
           ans1=max(ans1,a[i]);
           ans2=min(ans2,a[i]);
       }
       cout<<count<<endl;
   }
    return 0;
}