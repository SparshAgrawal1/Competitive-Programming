#include <iostream>
#include <bits/stdc++.h>
#include <string>
#include <cmath>
#include <map>
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
using namespace std;
typedef long long int ll;
 
 
int main()
{
      fast;
     ll t;cin>>t;
     while(t--)
     {
        ll n;
        cin>>n;
        ll x=(n+3)/4;
        for(ll i=0 ; i<n-x ; i++)
        {
            cout<<9;
        }
        for(ll i=0 ; i<x ; i++)
        {
            cout<<8;
        }
        cout<<endl;
     }
 
	return 0;
 
}