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
  ll a1,a2;
  cin>>a1>>a2;
  ll n;cin>>n;
    double t=INT_MAX;
  for(ll i=0 ; i<n ; i++)
  {
        ll x1,x2,x3;cin>>x1>>x2>>x3;
        ll y1=powl(x1-a1,2);
        ll y2=powl(x2-a2,2);
        double z=sqrt(y1+y2);
//        cout<<z<<endl;
        z=z/x3;
        t=min(t,z);
 
  }
  cout<<fixed<<setprecision(20)<<t;
 
 
 
 
 
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