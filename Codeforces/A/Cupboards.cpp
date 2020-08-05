#include <iostream>
#include <bits/stdc++.h>
#include <string>
#include <cmath>
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
using namespace std;
typedef long long int ll;
 
 
int main()
{
    ll n;
    cin>>n;
    ll x1=0,x2=0,x3=0,x4=0;
	for(ll i=0; i<n; i++)
    {
	    ll a,b;
	    cin>>a>>b;
	    if(a==1)
	    {
	        x1++;
	    }
	    else
	    {
	        x2++;
	    }
	    if(b==1)
	    {
	        x3++;
	    }
	    else
	    {
	        x4++;
	    }
	}
	ll ans=0;
	if(x1>x2)
	{
	    ans+=x2;
	}
	else
	{
	    ans+=x1;
	}
	if(x3>x4)
	{
	    ans+=x4;
	}
	else
	{
	    ans+=x3;
	}
	cout<<ans<<endl;
 
    return 0;
    }