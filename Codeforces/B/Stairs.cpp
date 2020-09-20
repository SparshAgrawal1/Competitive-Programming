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
   ll ans=0;
   ll l=1;
   ll m=1;
   while(true)
   {
       ll temp=l*(l+1)/2;
       if(temp>n)
       {
           break;
       }
       else
       {
            n=n-temp;
           ans++;
           l+=powl(2,m);
           m++;
       }
 
 
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