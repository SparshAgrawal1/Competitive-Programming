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
bool sortbysecdesc(const pair<int,int> &a, const pair<int,int> &b)
{
        return (a.first-a.second)<(b.first-b.second);
}
 
int main()
{
        fast;
        ll n,m;
        cin >> n >> m;
        ll a[n];
        for(ll i=0;i<n;i++)
        {
            cin >> a[i];
        }
        if(n>m)
        {
		     cout<<0;
        }
        else
        {
            ll p=1;
            for(ll i=0;i<n;i++)
            {
                for(ll j=i+1;j<n;j++)
                {
                    p*=abs(a[i]-a[j])%m;
                    p%=m;
                 }
            }
            cout<<p;
        }
	return 0;
 
}
 