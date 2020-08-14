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
 
      ll n,k;
      cin>>n>>k;
      ll l;
      for(ll i=k-1 ; i>=1 ; i--)
        {
            if(n%i==0)
            {
                l=i;
                break;
            }
        }
      ll h = n/l;
      cout<<h*k + l<<endl;
 
     return 0;
}