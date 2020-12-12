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
        ll n;
        cin>>n;
        vector<pair<string,ll>> v;
        for(ll i=0 ; i<n ; i++)
        {
            string s;cin>>s;
            v.push_back({s,0});
        }
        vector<string> f;
        ll k=n-1;
 
        while(f.size()!=n)
        {
            bool flag=false;
            vector<ll> p;
            for(ll i=0 ; i<n ; i++)
            {
                ll c=0;
                for(ll j=0 ; j<n ; j++)
                {
                    if(i!=j)
                    {
                        if(v[j].second==0)
                        {
                            if(v[j].first.find(v[i].first)!=-1)
                            {
                                c++;
                            }
                        }
                    }
                }
                p.push_back(c);
            }
            ll t1=0;
            for(auto y:p)
            {
//                cout<<y<<endl;
                if(y==k)
                {
                    flag=true;
                    k--;
                    f.push_back(v[t1].first);
                    v[t1].second=1;
                    break;
                }
                t1++;
            }
            if(flag==false)
            {
                break;
            }
//            break;
        }
        if(f.size()!=n)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            cout<<"YES"<<endl;
            for(auto x:f)
            {
                cout<<x<<endl;
            }
        }
 
    }
 
	return 0;
}