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
 
   ll n;
   cin>>n;
   char a[n][n];
   vector<pair<ll,ll>> v;
   for(ll i=0 ; i<n; i++)
   {
        for(ll j=0 ; j<n ; j++)
        {
            cin>>a[i][j];
            if(a[i][j]=='*')
            {
                v.push_back({i,j});
            }
        }
   }
   ll l1=v[0].first;ll l2=v[0].second;
   ll h1=v[1].first;ll h2=v[1].second;
   if(l1==h1)
   {
        if(l1==0)
        {
            a[l1+1][l2]='*';
            a[l1+1][h2]='*';
        }
        else if(l1==n-1)
        {
            a[l1-1][l2]='*';
            a[l1-1][h2]='*';
        }
        else
        {
            a[l1+1][l2]='*';
            a[l1+1][h2]='*';
        }
   }
   else if(l2==h2)
   {
        if(l2==0)
        {
            a[l1][l2+1]='*';
            a[h1][l2+1]='*';
        }
        else if(l2==n-1)
        {
            a[l1][l2-1]='*';
            a[h1][l2-1]='*';
        }
        else
        {
            a[l1][l2+1]='*';
            a[h1][l2+1]='*';
        }
   }
   else
   {
        a[l1][h2]='*';
        a[h1][l2]='*';
   }
   for(ll i=0 ; i<n ; i++)
   {
    for(ll j=0 ; j<n ; j++)
    {
        cout<<a[i][j];
    }
    cout<<endl;
   }
 
   
}
int main()
{
    fast;
#ifndef ONLINE_JUDGE
   freopen("input.txt", "r" , stdin);
   freopen("output.txt", "w", stdout);
#endif
	ll t;
   cin>>t;
    // t=1;
	while(t--)
    {
        solve();
    }
 
 
	return 0;
}
