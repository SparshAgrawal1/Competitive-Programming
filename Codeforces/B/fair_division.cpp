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
 
ll xxxx(ll a,ll b)
{
   while(a>b)
   {
       a=a/3;
   }
   return a;
}
void solve()
{
    ll n;cin>>n;
    ll a[n];
    ll b1=0,b2=0;
    for(ll i=0 ; i<n ; i++)
    {
        cin>>a[i];
        if(a[i]==2)
        {
            b1++;
        }
        else
        {
            b2++;
        }
    }
    if(b1%2==0&&b2%2==0)
    {
        cout<<"YES"<<endl;
    }
    else if(b1%2==0&&b2%2!=0)
    {
        cout<<"NO"<<endl;
    }
    else if(b1%2!=0&&b2%2==0)
    {
        if(b2>0)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
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
//	t=1;
    cin>>t;
	while(t--)
    {
        solve();
 
 
    }
	return 0;
}