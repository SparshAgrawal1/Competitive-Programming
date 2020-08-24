#include <iostream>
#include <bits/stdc++.h>
#include <string>
#include <cmath>
#include <map>
#include <bitset>
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
           ll a[n];
           for(ll i=0 ; i<n ;i++)
           {
               cin>>a[i];
           }
           sort(a,a+n,greater<ll>());
           for(ll i=0 ; i<n ; i++)
           {
               cout<<a[i]<<" ";
           }
           cout<<endl;
 
       }
	return 0;
 
}