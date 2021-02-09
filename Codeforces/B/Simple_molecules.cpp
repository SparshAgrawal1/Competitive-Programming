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
    ll a,b,c;
    cin>>a>>b>>c;
    ll k=a+b+c;
    if(k%2!=0)
    {
        cout<<"Impossible"<<endl;return;
    }
//    if(k%2!=0)
//    {
//        cout<<"Impossible"<<endl;
//    }
//    else
//    {
//
//    }
    k=k/2;
    ll x1=k-c;
    ll x2=k-a;
    ll x3=k-b;
    if(x1<0||x2<0||x3<0)
    {
        cout<<"Impossible"<<endl;
    }
    else
    {
        ll ans=0;
        if(x1==0)
        {
            ans++;
        }
        if(x2==0)
        {
            ans++;
        }
        if(x3==0)
        {
            ans++;
        }
        if(ans>1)
        {
            cout<<"Impossible"<<endl;
        }
        else
        {
            cout<<x1<<" "<<x2<<" "<<x3<<endl;
        }
    }
}
int main()
{
    fast;
    ll t;
    t=1;
//    cin>>t;
    while(t--)
    {
        solve();
 
    }
    return 0;
}