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
 
bool isSubSequence(string s1, string s2, ll m, ll n)
{
    if (m == 0) return true;
    if (n == 0) return false;
 
    if (s1[m-1] == s2[n-1])
        return isSubSequence(s1, s2, m-1, n-1);
 
    return isSubSequence(s1, s2, m, n-1);
}
 
void solve()
{
 
    ll n;cin>>n;
   ll a[n],b[n];
   for(ll i=0 ; i<n ; i++)
   {
       cin>>a[i];
   }
   for(ll i=0 ; i<n ; i++)
   {
       cin>>b[i];
   }
   bool flag=false;
   vector<ll> v;
   for(ll i=0 ; i<n ; i++)
   {
       if(a[i]>b[i])
       {
           flag=true;
           break;
       }
       else if(a[i]<b[i])
       {
           v.push_back(i+1);
       }
   }
   if(flag==true)
   {
       cout<<"NO"<<endl;
   }
   else
   {
        if(v.size()==0)
   {
       cout<<"YES"<<endl;
   }
   else
   {
       if(v[v.size()-1]-v[0]+1!=v.size())
       {
           cout<<"NO"<<endl;
       }
       else
       {
           unordered_set<ll> s;
           for(auto x:v)
           {
               s.insert(b[x-1]-a[x-1]);
           }
           if(s.size()==1)
           {
               cout<<"YES"<<endl;
           }
           else
           {
               cout<<"NO"<<endl;
           }
       }
   }
   }
 
 
 
 
}
 
 
 
int main()
{
    ll t;cin>>t;
    while(t--)
    {
        solve();
    }
 
 
    return 0;
}