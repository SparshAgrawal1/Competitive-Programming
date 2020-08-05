#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long int ll;
 
int main()
{
    ll t;
    cin>>t;
    ll a[t];
    for(ll i=0 ; i<t ; i++)
    {
        cin>>a[i];
    }
    sort(a,a+t);
    map<ll,ll> m;
    // m[a[0]]++;
    for(ll i=0 ;i<t ; i++)
    {
        m[a[i]]++;
    }
    ll ans=0;
    for(auto x:m)
    {
        ans=max(ans,x.second);
    }
    cout<<ans<<" "<< m.size()<<endl;
    
    return 0;
}