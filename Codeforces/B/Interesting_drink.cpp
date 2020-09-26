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
 
bool isSubSequence(string s1, string s2, ll m, ll n)
{
    if (m == 0) return true;
    if (n == 0) return false;
 
    if (s1[m-1] == s2[n-1])
        return isSubSequence(s1, s2, m-1, n-1);
 
    return isSubSequence(s1, s2, m, n-1);
}
 
void solve()
{
 
    ll n;cin>>n;
   ll a[n];
   for(ll i=0 ; i<n ; i++)
   {
       cin>>a[i];
   }
   sort(a,a+n);
   ll q;cin>>q;
 
   for(ll i=0 ; i<q; i++)
   {
       ll x;cin>>x;
       ll l=0;
       ll h=n-1;
       ll ans=0;
       ll c=0;
       while(l<=h)
       {
           ll mid = h-(h-l)/2;
           if(x>=a[mid])
           {
               l=mid+1;
               c=mid+1;
           }
           else
           {
               h=mid-1;
           }
       }
       ans+=c;
       cout<<ans<<endl;
 
   }
 
 
 
 
 
}
 
 
 
int main()
{
//    ll t;cin>>t;
//    while(t--)
//    {
        solve();
//    }
 
 
    return 0;
}