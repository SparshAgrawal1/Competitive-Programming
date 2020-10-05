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
 
 
   ll n,k;
   cin>>n>>k;
   ll a[n];
   for(ll i=0 ; i<n ; i++)
   {
       cin>>a[i];
   }
   ll d=*min_element(a,a+n);
   sort(a,a+n);
   ll s=0;
   for(ll i=1 ; i<n ; i++)
   {
       s+=(k-a[i])/d;
   }
   cout<<s<<endl;
 
 
 
 
 
}
 
 
 
 
 
 
 
 
 
 
 
 
int main()
{
    ll t;cin>>t;
    while(t--)
    {
        solve();
    }
 
 
    return 0;
}