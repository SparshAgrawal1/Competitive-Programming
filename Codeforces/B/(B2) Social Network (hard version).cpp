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
	ll t;t=1;
//cin>>t;
	while(t--)
    {
        ll n,k;
        cin>>n>>k;
        ll a[n];
        for(ll i=0 ; i<n ;i++)
        {
            cin>>a[i];
        }
        queue<ll> q;
        set<ll> s;
        for(ll i=0 ; i<n ; i++)
        {
            if(q.size()==k)
            {
                if(s.find(a[i])==s.end())
                {
                    ll temp=q.front();
                    q.pop();
                    s.erase(temp);
                    s.insert(a[i]);
                    q.push(a[i]);
                }
 
            }
            else if(q.size()<k)
            {
                if(s.find(a[i])==s.end())
                {
                    q.push(a[i]);
                    s.insert(a[i]);
                }
            }
        }
        cout<<q.size()<<endl;
        vector<ll> v;
        while(q.empty()==false)
        {
            v.push_back(q.front());
            q.pop();
        }
        reverse(v.begin(),v.end());
        for(auto x:v)
        {
            cout<<x<<" ";
        }
        cout<<endl;
 
    }
	return 0;
}
