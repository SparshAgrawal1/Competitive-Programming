#include <iostream>
#include<string>
#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long ll;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        ll a[n+1];
        vector<ll> graph[n+1];
        for(ll i=1 ; i<=n ; i++)
        {
            cin>>a[i];
            graph[i].push_back(a[i]);
        }
        vector<ll> v;
        ll distance[n+1];
        bool visited1[n+1]={false};
        
        for(ll i=1 ; i<=n ; i++)
        {
            if(visited1[i]==false)
            {
                unordered_set<ll> s;
                queue<ll> q;
                q.push(a[i]);
                visited1[i]=true;
                s.insert(i);
                ll level=0;
                while(q.empty()==false)
                {
                    ll curr=q.front();
                    s.insert(curr);
                    q.pop();
                    level++;
                    for(auto x:graph[curr])
                    {
                        if(visited1[curr]==false)
                        {
                            visited1[curr]=true;
                            q.push(x);
                        }
                        
                    }
                }
                for(auto x:s)
                {
                        distance[x]=level;
                    
                }
            }
        }
        for(ll i=1 ; i<=n ; i++)
        {
            cout << distance[i] << " ";
        }
        cout << endl;
    }
    return 0;
}