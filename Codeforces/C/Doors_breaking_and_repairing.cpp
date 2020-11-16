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
    ll n,x,y;
    cin>>n>>x>>y;
    ll a[n];
    ll cnt=0;
    for(ll i=0 ; i<n ; i++)
    {
        cin>>a[i];
        if(a[i]<=x)
        {
            cnt++;
        }
    }
    if(x>y)
    {
        cout<<n<<endl;
    }
   else
   {
       cout<<(cnt+1)/2<<endl;
   }
 
 
 
    return 0;
}