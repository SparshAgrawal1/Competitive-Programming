#include <iostream>
#include <bits/stdc++.h>
#include <string>
#include <cmath>
#include <map>
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
using namespace std;
typedef long long int ll;
typedef double db;
 
int main()
{
      fast;
      ll n,m;
      cin>>n>>m;
      ll l=0,h;
      ll temp=n-(m-1);
      h=(temp*(temp-1))/2;
      ll ans=n/m;
      ll curr=n%m;
      l = l + curr*((ans*(ans+1)/2));
      l = l + (m-curr)*((ans*(ans-1)/2));
      cout<<l<<" "<<h<<endl;
 
 
    return 0;
 
}