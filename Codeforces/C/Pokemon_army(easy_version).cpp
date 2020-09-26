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
  ll n,q;
  cin>>n>>q;
  ll a[n],b[n];
  for(ll i=0 ; i<n ; i++)
  {
 
      cin>>a[i];
      b[i]=a[i];
  }
  sort(b,b+n);
  vector<ll> v;
      ll ans=0;
      ll l=-1;
      ll h;
      ll k=-1;
      bool f1=false;
      for(ll i=0 ; i<n ; i++)
      {
         if(f1==false)
         {
             if(a[i]>=l)
             {
                 l=a[i];
             }
             else
             {
                 ans+=l;
                 v.push_back(l);
                 h=l;
                 l=a[i];
                 f1=!f1;
             }
 
         }
         else
         {
             if(a[i]<=l)
             {
                 l=a[i];
             }
             else
             {
                 ans-=l;
                 v.push_back(l);
                 k=l;
                 l=a[i];
                 f1=!f1;
             }
 
         }
      }
      if(f1==false)
      {
          ans+=l;
      }
      cout<<ans<<endl;
 
 
 
 
 
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