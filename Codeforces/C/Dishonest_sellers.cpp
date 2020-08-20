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
bool sortbysecdesc(const pair<int,int> &a, const pair<int,int> &b)
{
       return (a.first-a.second)<(b.first-b.second);
}
 
int main()
{
      fast;
     ll n,k;
     cin>>n>>k;
     ll a[n],b[n];
     for(ll i=0 ; i<n ; i++)
     {
         cin>>a[i];
     }
     for(ll i=0 ; i<n ; i++)
     {
         cin>>b[i];
     }
     vector<pair<ll,ll>> v;
     for(ll i=0 ; i<n ; i++)
     {
         v.push_back({a[i],b[i]});
     }
     sort(v.begin(),v.end(),sortbysecdesc);
     ll ans=0;
     for(ll i=0 ; i<n ; i++)
     {
         if(k>0)
         {
             ans+=v[i].first;
             k--;
         }
         else
         {
             if(v[i].first<=v[i].second)
             {
                 ans+=v[i].first;
             }
             else
             {
                 ans+=v[i].second;
             }
         }
     }
 
    cout<<ans<<endl;
    return 0;
}