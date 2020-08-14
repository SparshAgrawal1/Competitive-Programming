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
      ll a,b;
      cin>>a>>b;
      ll ans=min(a,b);
      a=a-ans;
      b=b-ans;
      ll count=a/2 + b/2;
      cout<<ans<<" "<<count<<endl;
     return 0;
}