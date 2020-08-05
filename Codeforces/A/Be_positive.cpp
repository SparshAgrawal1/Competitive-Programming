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
     ll n;
     cin>>n;
     ll a[n];ll count=0;
     ll count2=0;
     ll x;
     if(n%2==0)
     {
         x=n/2;
     }
     else
     {
         x=(n/2)+1;
     }
     ll y1=INT_MIN;
     ll y2=INT_MAX;
     for(ll i=0 ; i<n ; i++)
     {
         cin>>a[i];
         if(a[i]==0)
         {
             count++;
         }
         else if(a[i]<0)
         {
             count2++;
             y1=max(y1,a[i]);
         }
         else
         {
             y2=min(y2,a[i]);
         }
     }
     ll z=n-count;
     ll count3=z-count2;
     if(count2>=x)
     {
         cout << y1 << endl;
     }
     else if(count3>=x)
     {
         cout << y2<<endl;
     }
     else
     {
         cout << 0 <<endl;
     }
 
 
	return 0;
 
}
