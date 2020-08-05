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
        ll a[n];
        map<ll,ll,greater<ll>> m;
        for(ll i=0 ; i<n ; i++)
        {
            cin>>a[i];
            m[a[i]]++;
        }
        sort(a,a+n);
        ll curr=a[n-2];
        ll temp=n-2;
//        ll count=0;
//        ll flag=0;
//        for(ll i=0 ; i<n ; i++)
//        {
//            if(a[i]==curr)
//            {
//                flag=i;
//                break;
//            }
//        }
//        ll l=0;
//        for(ll i=flag-1 ; i>=0 ; i--)
//        {
//            if(a[i]<l)
//            {
//                break;
//            }
//            else
//            {
//                count++;
//                l=a[i];
//            }
//        }
//        cout<<count<<endl;
cout<<min(temp,curr-1)<<endl;
 
     }
 
	return 0;
 
}