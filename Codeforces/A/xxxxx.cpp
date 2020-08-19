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
	int t;
	cin>>t;
	while(t--)
    {
       ll n,x;
       cin>>n>>x;
       ll a[n];
       for(ll i=0 ; i<n ; i++)
       {
           cin>>a[i];
       }
        ll count=0;
        ll ans=-1;
        for(ll i=0 ; i<n ; i++)
        {
            count+=a[i];
            if(count%x!=0)
            {
                ll l=max(i+1,n-i-1);
                ans=max(ans,l);
            }
        }
        cout<<ans<<endl;
	}
	return 0;
}