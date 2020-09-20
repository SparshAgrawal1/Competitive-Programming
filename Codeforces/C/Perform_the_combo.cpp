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
   string s;
   cin>>s;
   ll a[m];
   for(ll i=0 ; i<m ; i++)
   {
       cin>>a[i];
   }
 
   sort(a,a+m);
   ll c[m];
   c[0]=a[0];
   for(ll i=1 ; i<m ; i++)
   {
       c[i]=a[i]-a[i-1];
   }
    set<ll> e;
   ll h=0;
   ll l=0;
   ll b[26]={0};
   while(l<m)
    {
        if(e.find(a[l])==e.end())
        {
            for(ll i=h ; i<h+c[l] ; i++)
           {
               b[s[i]-'a']+=m-l;
           }
           h=a[l];
           e.insert(a[l]);
           l++;
        }
        else
        {
            l++;
        }
 
    }
    for(ll i=0 ; i<n ; i++)
    {
        b[s[i]-'a']++;
    }
   for(ll i=0 ; i<26 ; i++)
   {
       cout<<b[i]<<" ";
   }
    cout<<endl;
 
 
}
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        solve();
    }
 
    return 0;
}
 