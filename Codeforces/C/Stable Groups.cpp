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
    ll n,k,x;
    cin>>n>>k>>x;
    vector<ll> v;
    vector<ll> f;
    for(ll i=0 ; i<n ; i++)
    {
        ll l;
        cin>>l;
        v.push_back(l);
    }
    map<ll,vector<ll>> m;
    sort(v.begin(),v.end());
    for(ll i=1 ; i<n ; i++)
    {
        if(v[i]-v[i-1]>x)
        {
         ll l1=v[i-1];
         ll l2=v[i];
         ll l3=l2-l1;
         ll l4=l3/x;
         ll l5=l3%x;
         if(l5==0)
         {
            l4--;
         }
         m[l4].push_back(i-1);
        }
    }
    ll ans=0;
    for(auto l1:m)
    {
        for(auto l2:m[l1.first])
        {
            f.push_back(l2);
        }
    }
    // for(auto x:f)
    // {
    //     cout<<x<<" ";
    // }
 
    for(ll i=0 ; i<f.size() ; i++)
    {
        // cout<<f[i]<<" ";
        ll l=f[i];
         ll l1=v[l];
         ll l2=v[l+1];
         ll l3=l2-l1;
         ll l4=l3/x;
         ll l5=l3%x;
         if(l5==0)
         {
            l4--;
         }
         if(l4<=k)
         {
            k-=l4;
            ans++;
         }
    }
    // cout<<endl;
    cout<<f.size()-ans+1<<endl;
 
 
    // ll ans=0;
    // ll temp=1;
    // while(k>0&&temp<=k)
    // {
    //     ll curr=0;
        
    //     for(ll i=0 ; i<f.size() ; i++)
    //     {
    //         ll l=f[i];
    //         if(l==-1)
    //         {
    //             curr++;
    //         }
    //         else
    //         {
    //             ll l1=v[l];
    //             ll l2=v[l+1];
    //             ll l4=l2-l1;
    //             ll l5=l4/(temp+1);
    //             ll l6=l4%(temp+1);
    //             if(l6!=0)
    //             {
    //                 l5++;
    //             }
    //             if(l5<=x&&k>=temp)
    //             {
    //                 ans++;
    //                 k-=temp;
    //                 f[i]=-1;
    //             }
 
    //         }
            
    //     }
    //     if(curr==f.size())
    //     {
    //         break;
    //     }
    //     else
    //     {
    //         temp++;
    //     }
        
    // }
    
    // cout<<f.size()-ans+1<<endl;
    
    
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