#include <iostream>
#include<string>
#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long ll;
 
int main()
{
    ll n;cin>>n;
    ll a[n];
    map<ll,ll> m;
    ll count=INT_MAX;
    for(ll i=0 ; i<n ; i++)
    {
        cin>>a[i];
        m[a[i]%2]++;
    }
    for(auto x:m)
    {
        count=min(count,x.second);
    }
    if(m.size()==1)
    cout << 0<<endl;
    else
    {
        cout<<count<<endl;
    }
    
    
    return 0;
}