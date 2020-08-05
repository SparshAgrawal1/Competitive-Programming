#include <iostream>
#include<string>
#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long ll;
void xxxx(vector<ll> v[],ll i,bool visited[],vector<ll> &a,ll b[])
{
    visited[i]=true;
    queue<ll> q;
    q.push(i);
    a.push_back(b[i]);
    while(q.empty()==false)
    {
        ll curr=q.front();
        q.pop();
        for(auto x:v[curr])
        {
            if(visited[x]==false)
            {
                q.push(x);
                a.push_back(b[x]);
                visited[x]=true;
            }
        }
    }
}
int main()
{
    ll n,m;
    cin>>n>>m;
    ll a[n+1];
    for(ll i=1 ; i<=n ; i++)
    {
        cin>>a[i];
    }
    vector<ll> graph[n+1];
    for(ll i=0 ; i<m ; i++)
    {
        ll x,y;
        cin>>x>>y;
        graph[x].push_back(y);
        graph[y].push_back(x);
    }
    bool visited[n+1]={false};
    ll count=0;
    for(ll i=1 ; i<=n ; i++)
    {
        if(visited[i]==false)
        {
            vector<ll> v;
            xxxx(graph,i,visited,v,a);
            count=count+ *min_element(v.begin(),v.end());
        }
    }
    cout << count<<endl;
    return 0;
}