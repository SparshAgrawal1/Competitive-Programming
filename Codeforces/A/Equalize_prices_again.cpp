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
	ll t;
cin>>t;
	while(t--)
    {
        ll n;
        cin>>n;
        ll a[n];
        ll sum=0;
        for(ll i=0 ; i<n ;i++)
        {
            cin>>a[i];
            sum+=a[i];
        }
        if(sum%n==0)
        {
            cout<<sum/n<<endl;
        }
        else
        {
            cout<<sum/n + 1<<endl;
        }
 
 
    }
	return 0;
}