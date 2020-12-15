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
void solve()
{
    ll n;
    cin>>n;
     string s1,s2;
     cin>>s1;
     cin>>s2;
     vector<ll> v1,v2;
     for(ll i=0 ; i<n ; i++)
     {
         if(s1[i]=='1'||s1[i]=='2')
         {
             v1.push_back(2);
         }
         else
         {
             v1.push_back(1);
         }
         if(s2[i]=='1'||s2[i]=='2')
         {
             v2.push_back(2);
         }
         else
         {
             v2.push_back(1);
         }
     }
     bool flag=false;
     for(ll i=0 ; i<n ; i++)
     {
         if(v1[i]==v2[i])
         {
             if(v1[i]==1)
             {
                 flag=!flag;
             }
         }
         else
         {
             if(flag==false)
             {
                 if(v1[i]==1)
                 {
                     cout<<"NO"<<endl;
                     return;
                 }
             }
             else
             {
                 if(v2[i]==1)
                 {
                     cout<<"NO"<<endl;
                     return;
                 }
             }
         }
 
     }
//for(ll i=0 ; i<n ; i++)
//{
//    cout<<v1[i]<<" "<<v2[i]<<endl;
//}
     if(flag==false)
     {
         cout<<"NO"<<endl;
//         return;
     }
     else
     {
         cout<<"YES"<<endl;
     }
 
     return;
}
int main()
{
    fast;
	ll t;
cin>>t;
	while(t--)
    {
        solve();
 
 
    }
	return 0;
}
