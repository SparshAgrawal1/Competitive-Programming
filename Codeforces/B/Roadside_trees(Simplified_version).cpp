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
 
 
int main()
{
    fast;
 
    ll n;
    cin>>n;
    ll m=n;
    vector<ll> v;
    while(m--)
    {
        ll a;cin>>a;
        v.push_back(a);
    }
    ll count=1;
    count+=v[0]-1;
 
    for(ll i=0 ; i <n-1 ; i++)
    {
        if(v[i+1]==v[i])
        {
            count++;
        }
        else if(v[i+1]>v[i])
        {
            count++;
            count=count+(v[i+1]-v[i]);
        }
        else
        {
            count++;
            count=count+(v[i]-v[i+1]);
        }
    }
    count+=n;
    cout<<count<<endl;
    return 0;
 
}