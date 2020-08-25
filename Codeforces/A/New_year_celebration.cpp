#include <iostream>
#include <bits/stdc++.h>
#include <string>
#include <cmath>
#include <map>
#include <bitset>
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
using namespace std;
typedef long long int ll;
 
 
int main()
{
        fast;
 
    ll n,t;
    cin>>n>>t;
    ll a[n];
    for(ll i=1 ; i<n ; i++)
    {
        cin>>a[i];
    }
    ll l=1;
    bool flag=false;
    while(l<=n)
    {
        l=l+a[l];
        if(l>t)
        {
            flag=true;
            break;
        }
        if(l==t)
        {
            break;
        }
    }
    if(flag==true)
    {
        cout<<"NO"<<endl;
    }
    else
    {
        cout<<"YES"<<endl;
    }
	return 0;
 
}