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
bool sortbysec(const pair<ll,ll> &a,const pair<ll,ll> &b)
{
    return (a.second < b.second);
}
 
int main()
{
	fast;
	ll t;
	cin>>t;
	while(t--)
    {
       ll n,m;
       cin>>n>>m;
       ll a1[n],a2[m];
       for(ll i=0 ; i<n ; i++)
       {
           cin>>a1[i];
       }
       for(ll i=0 ; i<m ; i++)
       {
           cin>>a2[i];
       }
        ll count=0;
        for(ll i=0 ; i<m ; i++)
        {
            for(ll j=0 ; j<n ; j++)
            {
                if(a2[i]==a1[j])
                {
                    count++;
                }
            }
        }
 
        cout<<count<<endl;
 
 
    }
 
	return 0;
}