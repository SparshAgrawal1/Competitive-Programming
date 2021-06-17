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
 
void xxxx(map<ll,vector<pair<ll,ll>>> p, ll l, vector<ll> a, bool b[])
{
            b[l]=true;
            for(auto x:p[l])
            {
                ll y1=x.first;
                ll y2=x.second;
                a[y1]=min(a[y1],a[l]+y2);
                xxxx(p,y1,a,b);
            }
}
void solve()
{
 
    ll n,l,r;
    cin>>n>>l>>r;
    ll v[n];
    for(ll i=0 ; i<n ; i++)
    {
        cin>>v[i];
    }
    sort(v,v+n);
    ll temp=0;
    for(ll i=0 ; i<n ; i++)
    {
//        cout<<v[i]<<endl;
        ll l1=i+1;
        ll l2=n-1;
        ll l4=-1;ll l5=-1;
        while(l1<=l2)
        {
            ll l3 = (l1+(l2-l1)/2);
            if(v[i]+v[l3]>=l)
            {
                l2=l3-1;
                l4=l3;
            }
            else
            {
                l1=l3+1;
            }
        }
        l1=i+1;
        l2=n-1;
        while(l1<=l2)
        {
            ll l3=(l1+(l2-l1)/2);
            if(v[i]+v[l3]<=r)
            {
                l1=l3+1;
                l5=l3;
            }
            else
            {
                l2=l3-1;
            }
        }
        if(l4!=-1&&l5!=-1&&l5>=l4)
        {
            temp+=(l5-l4)+1;
        }
 
    }
    cout<<temp<<endl;
 
}
int main()
{
    fast;
//#ifndef ONLINE_JUDGE
//    freopen("input.txt", "r" , stdin);
//    freopen("output.txt", "w", stdout);
//#endif
	ll t;
   cin>>t;
    // t=1;
	while(t--)
    {
        solve();
    }
 
 
	return 0;
}