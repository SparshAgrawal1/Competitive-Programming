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
 
 
int main()
{
    fast;
    ll t;cin>>t;
    while(t--)
    {
        ll a,b,c;
        cin>>a>>b>>c;
        vector<ll> v;
        v.push_back(a);v.push_back(b);v.push_back(c);
        ll ans=0;ans+=a;ans+=b;ans+=c;
        sort(v.begin(),v.end());
        cout<<min(v[0]+v[1],ans/2)<<endl;
    }
 
 
    return 0;
}