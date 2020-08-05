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
    ll a,b;
    cin>>a>>b;
    a=max(a,b);
    a=6-a;
    a++;
    if(a==1)
    {
        cout << "1/6" << endl;
    }
    else if(a==2)
    {
        cout << "1/3" << endl;
    }
    else if(a==3)
    {
        cout << "1/2" << endl;
    }
    else if(a==4)
    {
        cout << "2/3" << endl;
    }
    else if(a==5)
    {
        cout << "5/6" << endl;
    }
    else
    {
        cout << "1/1" << endl;
    }
    return 0;
}