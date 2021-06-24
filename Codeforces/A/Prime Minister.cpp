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
    ll a[n];
    ll sum=0;
    for(ll i=0 ; i<n ; i++)
    {
        cin>>a[i];
        sum+=a[i];
    }
   
    ll g=sum%2;
    sum=sum/2;
    // if(g!=0)
    // {
    //     sum++;
    // }
     ll l=a[0];
    ll curr=l;
    bool temp=false;
    vector<ll> f;
    f.push_back(1);
        for(ll i=1 ; i<n ; i++)
        {
            if(curr>sum)
            {
                break;
            }
            else
            {
                if(l>=2*a[i])
                {
                    curr+=a[i];
                    f.push_back(i+1);
                }
            }
            
        }
        if(curr>sum)
        {
            cout<<f.size()<<endl;
            for(auto x:f)
            {
                cout<<x<<" ";
            }
            cout<<endl;
        }
        else
        {
            cout<<0<<endl;
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
   // cin>>t;
    t=1;
	while(t--)
    {
        solve();
        
    }
 
 
	return 0;
}