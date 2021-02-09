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
    ll n,m;cin>>n>>m;
    ll a[n];
    map<ll,vector<ll>> s;
    for(ll i=0 ; i<n ; i++)
    {
        cin>>a[i];
 
    }
    if(n==1&&m==1&&a[0]==2)
    {
        cout<<1<<endl;
    }
    else
    {
        sort(a,a+n);
    for(ll i=0 ; i<n ; i++)
    {
        s[a[i]].push_back(i+1);
    }
    if(s.find(m)==s.end())
    {
        ll temp1=0;
        for(ll i=0 ; i<n ; i++)
        {
            if(a[i]<m)
            {
                temp1++;
            }
        }
        ll temp2=n-temp1;
        ll temp=temp1+1;
        n++;
        if(temp1==temp2)
        {
            cout<<1<<endl;
        }
        else if(temp1>temp2)
        {
            ll ans;
            ll x=temp1-temp2;
            for(ll i=1 ; i<=x ; i++)
            {
                n++;
                if((n+1)/2==temp)
                {
                    ans=i;
                    break;
                }
            }
            cout<<ans+1<<endl;
        }
        else
        {
            ll ans;
            ll x=temp2-temp1;
            for(ll i=1 ; i<=x ; i++)
            {
                n++;
                temp++;
                if((n+1)/2==temp)
                {
                    ans=i;
                    break;
                }
            }
            cout<<ans+1<<endl;
        }
//        if(temp1==temp2)
//        {
//            cout<<1<<endl;
//        }
//        else
//        {
//            cout<<abs(temp1-temp2)+1<<endl;
//        }
    }
    else
    {
            ll curr=(n+1)/2;
            ll temp1=INT_MAX;
            map<ll,ll> p;
            for(auto x:s[m])
            {
                p[x]=abs(curr-x);
            }
            ll temp;
            for(auto x:p)
            {
                if(temp1>x.second)
                {
                    temp1=x.second;
                    temp=x.first;
                }
            }
            if(temp==curr)
            {
                cout<<0<<endl;
            }
            else if(temp>curr)
            {
                ll x=temp-1;
                ll y=n-temp;
                ll z=x-y;
                ll f;
                for(ll i=1 ; i<=z ; i++)
                {
                    n++;
                    if((n+1)/2==temp)
                    {
                        f=i;
                        break;
                    }
                }
                cout<<f<<endl;
            }
            else
            {
                ll x=n-temp;
                ll y=temp-1;
                ll z=x-y;
                ll f;
                for(ll i=1 ; i<=z ; i++)
                {
                    n++;
                    temp++;
                    if((n+1)/2==temp)
                    {
                        f=i;
                        break;
                    }
                }
                cout<<f<<endl;
 
            }
 
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