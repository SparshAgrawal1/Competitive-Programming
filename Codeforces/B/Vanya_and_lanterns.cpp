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
      ll n,l;
      cin>>n>>l;
      ll a[n];
      for(ll i=0 ; i<n ; i++)
      {
          cin>>a[i];
      }
      sort(a,a+n);
      db d;
      d = max(l - a[n-1],a[0] - 0);
      for(ll i = 1;i<n;i++)
      {
         db temp = (a[i]-a[i-1])/2.0;
         d = max(d,temp);
    }
    cout << fixed <<  setprecision(10) << d << "\n";
    return 0;
 
}
