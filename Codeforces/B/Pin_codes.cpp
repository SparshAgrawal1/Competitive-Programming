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
        ll n;cin>>n;
        map<string,ll> m;
        vector<string> v;
        set<string> q;
        for(ll i=0 ; i<n ; i++)
        {
            string s;cin>>s;
            m[s]++;
            q.insert(s);
            v.push_back(s);
        }
        map<string,vector<string>> m1;
        ll ans=0;
        for(auto x:m)
        {
 
            string s1=x.first;
            string s2=s1;
            ll temp=x.second;
            ans+=temp-1;
            m1[s1].push_back(s2);
            temp=temp-1;
            ll c = s2[3]-'0';
            for(ll i=1 ; i<=temp ; i++)
            {
                while(q.find(s2)!=q.end())
                {
                    c=c+1;
                    c=c%10;
                    s2[3]=c+'0';
                }
                m1[s1].push_back(s2);
                q.insert(s2);
            }
        }
 
        map<string,ll> f;
        cout<<ans<<endl;
        for(ll i=0 ; i<v.size() ; i++)
        {
            f[v[i]]++;
            cout<<m1[v[i]][f[v[i]]-1]<<endl;
        }
 
    }
 
	return 0;
}