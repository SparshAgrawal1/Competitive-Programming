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
    vector<ll> v1,v2;
    for(ll i=0 ; i<n ; i++)
    {
        cin>>a[i];
        if(a[i]%2==0)
        {
            v1.push_back(a[i]);
        }
        else
        {
            v2.push_back(a[i]);
        }
    }
    ll p1=0,p2=0;
    sort(a,a+n,greater<ll>());
bool flag=false;
for(ll i=0 ; i<n ; i++)
{
    if(flag==false)
    {
        if(a[i]%2==0)
        {
            p1+=a[i];
        }
    }
    else
    {
        if(a[i]%2!=0)
        {
            p2+=a[i];
        }
    }
    flag=!flag;
}
//    sort(v1.begin(),v1.end());
//    sort(v2.begin(),v2.end());
//    ll p1=0,p2=0;
//    bool flag=false;
//    ll r=0;
//    while(r!=n)
//    {
//        if(flag==false)
//        {
//            if(v1.size()>0)
//            {
//                p1+=v1[v1.size()-1];
//                v1.pop_back();
//                r++;
//            }
//            else
//            {
//                v2.pop_back();
//                r++;
//            }
//            flag=true;
//        }
//        else
//        {
//            if(v2.size()>0)
//            {
//                 p2+=v2[v2.size()-1];
//                 v2.pop_back();
//                 r++;
//            }
//            else
//            {
//               v1.pop_back();
//               r++;
//            }
//            flag=false;
//        }
////        cout<<p1<<" "<<p2<<endl;
//    }
    if(p1>p2)
    {
        cout<<"Alice"<<endl;
    }
    else if(p1==p2)
    {
        cout<<"Tie"<<endl;
    }
    else
    {
        cout<<"Bob"<<endl;
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