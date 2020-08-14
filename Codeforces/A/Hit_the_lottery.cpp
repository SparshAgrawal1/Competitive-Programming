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
      vector<ll> v={100,20,10,5,1};
      ll count=0;
      for(ll i=0 ; i<5 ; i++)
      {
          ll l=n/v[i];
          count+=l;
          n=n-(v[i]*l);
 
      }
      cout<<count;
     return 0;
}