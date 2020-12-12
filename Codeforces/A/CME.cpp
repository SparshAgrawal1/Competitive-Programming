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
//	t=1;
	cin>>t;
	while(t--)
    {
 
        ll n;
        cin>>n;
        ll k=n/2;
        if(n==2)
            cout<<2<<endl;
        else
        {
            if(n%2==0)
        {
            cout<<0<<endl;
        }
        else
        {
 
                cout<<1<<endl;
        }
        }
 
    }
 
	return 0;
}