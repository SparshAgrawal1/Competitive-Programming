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
  ll n;
  cin>>n;
  ll a[n];
  ll ans=0;
  for(ll i=0 ; i<n ; i++)
  {
 
      cin>>a[i];
  }
  for(ll i=0 ; i<n-1 ; i++)
  {
      if(a[i]<=a[i+1])
      {
          cout<<"YES"<<endl;
          return;
      }
  }
  cout<<"NO"<<endl;
 
 
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