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
 
bool isPrime(ll num)
{
    bool flag=true;
    for(ll i = 2; i <= num / 2; i++) {
       if(num % i == 0) {
          flag = false;
          break;
       }
    }
    return flag;
}
 
bool sortbyvec(vector<double> v1,vector<double> v2)
{
    return v1[2]>v2[2];
}
 
 
void solve()
{
    ll a,b,x,y;
    cin>>a>>b>>x>>y;
    x=x+1;
    y=y+1;
    ll l1=x-1;
    ll l2=x+1;
    ll h1=y-1;
    ll h2=y+1;
    ll a1=1,a2=1,a3=1,a4=1;
    if(h1>=0)
    {
        a1=h1*a;
    }
    if(h2<=b)
    {
        a2=a*((b)-(h2)+1);
    }
    if(l1>0)
    {
        a3=b*(l1);
    }
    if(l2<=a)
    {
        a4=b*((a)-l2+1);
    }
    cout<<max(max(a1,a2),max(a3,a4))<<endl;
 
}
 
int main()
{
    fast;
	ll t;
//	t=1;
    cin>>t;
	while(t--)
    {
        solve();
    }
 
 
	return 0;
}
