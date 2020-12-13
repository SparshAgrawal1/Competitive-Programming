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
        string s;cin>>s;
        set<ll> q;
        for(ll i=0 ; i<k ; i++)
        {
            char a;cin>>a;
            q.insert(a-'a');
 
        }
        ll ans=0;
        vector<ll> v;
        for(ll i=0 ; i<n ; i++)
        {
            if(q.find(s[i]-'a')==q.end())
            {
                v.push_back(i+1);
            }
        }
        for(ll i=0 ; i<v.size() ; i++)
        {
            if(i==0)
            {
                ll l=v[i]-1;
                ans+=(l*(l+1))/2;
            }
            else
            {
                ll l=v[i]-v[i-1]-1;
                ans+=(l*(l+1))/2;
            }
            if(i==v.size()-1)
            {
                ll l=n-v[i];
                ans+=(l*(l+1))/2;
            }
        }
        if(v.size()==0)
        {
            cout<<n*(n+1)/2<<endl;
        }
        else
        {
            cout<<ans<<endl;
        }
 
    }
 
	return 0;
}
