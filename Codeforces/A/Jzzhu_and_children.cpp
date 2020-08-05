#include <iostream>
#include <bits/stdc++.h>
#include <string>
#include <cmath>
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
using namespace std;
typedef long long int ll;
 
 
int main()
{
    ll n,m;
    cin>>n>>m;
    queue<pair<ll,ll>> q;
    for(ll i=1 ; i<=n ; i++)
    {
        ll a;cin>>a;
        q.push({a,i});
    }
    ll curr;
    while(q.empty()==false)
    {
        auto temp=q.front();
        q.pop();
        ll x1=temp.first;
        if(x1>m)
        {
            ll x2=temp.second;
            x1=x1-m;
            q.push({x1,x2});
        }
        else
        {
            ll x2=temp.second;
            curr=x2;
        }
    }
    cout << curr << endl;
 
 
    return 0;
}
