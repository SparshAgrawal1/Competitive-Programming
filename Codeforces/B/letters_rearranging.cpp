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
 
   string s;
   cin>>s;
   map<char,ll> m;
   for(ll i=0 ; i<s.length() ; i++)
   {
       m[s[i]]++;
   }
   if(m.size()==1)
   {
       cout<<-1<<endl;
   }
   else
   {
       vector<pair<char,ll>> v;
       for(auto x:m)
       {
           v.push_back({x.first,x.second});
 
       }
       for(ll i=0 ; i<v.size() ; i++)
       {
           ll temp=v[i].second;
           while(temp--)
           {
               cout<<v[i].first;
           }
       }
       cout<<endl;
   }
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
