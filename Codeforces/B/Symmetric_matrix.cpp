#include <iostream>
#include <bits/stdc++.h>
#include <string>
#include <cmath>
#include <map>
#include <bitset>
#define MAX 1000
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
using namespace std;
typedef long long int ll;
 
 
void solve()
{
 
    ll n,m;
    cin>>n>>m;
    vector<pair<ll,ll>> v;
    for(ll i=0 ; i<2*n ; i++)
    {
        ll a,b;
        cin>>a>>b;
        v.push_back({a,b});
    }
    if(m%2!=0)
    {
        cout<<"NO"<<endl;
        return;
    }
    bool flag1=false;
    bool flag2=false;
    bool flag3=false;
    for(ll i=0 ; i<2*n ; i+=2)
    {
        if(v[i].second==v[i+1].first)
        {
            flag1=true;
            break;
        }
    }
    if(flag1==true)
    {
        cout<<"YES"<<endl;
        return;
    }
    cout<<"NO"<<endl;
    return;
//    for(ll i=0 ; i<2*n ; i+=2)
//    {
//        if(v[i].second==v[i+1].first)
//        {
//            flag2=true;
//            break;
//        }
//    }
//    for(ll i=0 ; i<2*n ; i+=2)
//    {
//        if(v[i].second==v[i+1].first&&v[i].first==v[i+1].second)
//        {
//            flag3=true;
//            break;
//        }
//    }
 
 
 
 
 
}
 
int main()
{
    ll t;cin>>t;
    while(t--)
    {
        solve();
    }
 
 
    return 0;
}
