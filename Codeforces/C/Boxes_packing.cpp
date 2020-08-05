#include<iostream>
#include <bits/stdc++.h>
using namespace std;
 
typedef long long int ll;
 
int main()
{
    ll n;
    cin>>n;
    vector<ll> v;
    ll count=0;
    map<ll,ll> m;
    for(ll i=0 ; i<n ; i++)
    {
        ll a;
        cin>>a;
        v.push_back(a);
        m[a]++;
        count=max(count,m[a]);
    }
    
    cout << count << endl;
    return 0;
}