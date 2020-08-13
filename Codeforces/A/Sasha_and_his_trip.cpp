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
      ll n,v;
      cin>>n>>v;
      ll c=v;
      if(v>=n)
      {
          c=n-1;
      }
      for(ll i=2 ; i<n-v+1 ; i++)
      {
          c+=i;
      }
      cout<<c;
 
}