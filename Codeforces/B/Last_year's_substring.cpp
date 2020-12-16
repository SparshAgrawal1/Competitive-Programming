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
ll gcd(ll a, ll b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
 
}
void solve()
{
    ll n;
    cin>>n;
   string s;cin>>s;
   string r="2020";
   string t1=s.substr(0,4);
   string t2=s.substr(n-4,4);
   string t3=s.substr(0,1)+s.substr(n-3,3);
   string t4=s.substr(0,2)+s.substr(n-2,2);
   string t5=s.substr(0,3)+s.substr(n-1,1);
   if(t1==r||t2==r||t3==r||t4==r||t5==r)
   {
       cout<<"YES"<<endl;
   }
   else
   {
       cout<<"NO"<<endl;
   }
 
 
 
 
}
int main()
{
    fast;
	ll t;
    cin>>t;
	while(t--)
    {
        solve();
 
 
    }
	return 0;
}