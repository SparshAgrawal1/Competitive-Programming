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
    deque<ll> a;
    for(ll i=0 ; i<n ; i++)
    {
        ll x;cin>>x;a.push_back(x);
 
    }
 
//    vector<ll> v1,v2;
    ll l=-1;
    bool flag=false;
    ll ans=0,ans1=0,ans2=0;
    while(a.size()!=0)
    {
        if(flag==false)
        {
            if(l==-1)
            {
                ll temp=a.front();
                ans1+=temp;
                l=temp;
                a.pop_front();
            }
            else
            {
                ll curr=0;
                while(curr<=l&&a.size()!=0)
                {
                    curr+=a.front();
                    a.pop_front();
                }
                ans1+=curr;
                l=curr;
            }
            flag=!flag;
        }
        else
        {
            if(l==-1)
            {
                ll temp=a.back();
                l=temp;
                ans2+=temp;
                a.pop_back();
            }
            else
            {
                ll curr=0;
                while(curr<=l&&a.size()!=0)
                {
                    curr+=a.back();
                    a.pop_back();
                }
                ans2+=curr;
                l=curr;
            }
            flag=!flag;
        }
        ans++;
    }
cout<<ans<<" "<<ans1<<" "<<ans2<<endl;
 
 
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
