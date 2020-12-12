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
	t=1;
//	cin>>t;
	while(t--)
    {
        ll n,k;
        cin>>n>>k;
        ll a[n];
        map<ll,vector<ll>> m;
        for(ll i=0 ; i<n ; i++)
        {
            cin>>a[i];
            m[a[i]].push_back(i+1);
        }
        if(m.size()<k)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            cout<<"YES"<<endl;
            for(auto x:m)
            {
                cout<<m[x.first][0]<<" ";
                k--;
                if(k==0)
                {
                    break;
                }
            }
            cout<<endl;
        }
 
    }
 
	return 0;
}