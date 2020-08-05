#include <iostream>
#include <bits/stdc++.h>
#include <string>
using namespace std;
typedef long long int ll;
 
bool sortbysec(const pair<ll,ll> &a,
              const pair<ll,ll> &b)
{
    return (a.first > b.first);
}
 
int main()
{
	ll n;
	cin>>n;
	vector<pair<ll,ll>> v;
	ll curr=INT_MIN;
	ll ans=INT_MIN;
	for(ll i=0 ; i<n; i++)
    {
        ll a,b;
        cin>>a>>b;
        curr=max(curr,b);
        ans=max(ans,a);
        v.push_back({a,b});
    }
    sort(v.begin(),v.end());
    bool flag=true;
    for(ll i=0 ; i<n-1 ; i++)
    {
        if(v[i+1].first>v[i].first)
        {
            if(v[i].second>v[i+1].second)
            {
                flag=false;
                break;
            }
        }
    }
    if(flag==false)
    {
        cout << "Happy Alex" << endl;
    }
    else
    {
        cout << "Poor Alex" << endl;
    }
 
 
 
 
	return 0;
}