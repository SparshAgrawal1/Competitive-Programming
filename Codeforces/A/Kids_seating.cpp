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
    ll t;
   cin>>t;
 
    while(t--)
    {
       ll n;
       cin>>n;
       ll x=4*n;
       for(ll i=0 ; i<n ; i++)
       {
           cout<<x<<" ";
           x-=2;
       }
       cout<<endl;
 
 
 
 
    }
    return 0;
}