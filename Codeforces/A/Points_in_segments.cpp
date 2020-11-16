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
    ll t=1;
 
    while(t--)
    {
       ll q,m;
       cin>>q>>m;
       bool a[m+1]={false};
       for(ll i=0 ; i<q ; i++)
       {
           ll a1,a2;cin>>a1>>a2;
           for(ll j=a1 ; j<=a2 ; j++)
           {
               a[j]=true;
           }
       }
       vector<ll> v;
       for(ll i=1 ; i<=m ; i++)
       {
           if(a[i]==false)
           {
               v.push_back(i);
           }
       }
       cout<<v.size()<<endl;
       for(auto x:v)
       {
           cout<<x<<" ";
       }
    }
    return 0;
}