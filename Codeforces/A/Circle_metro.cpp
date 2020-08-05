#include <iostream>
#include<string>
#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long ll;
 
int main()
{
    ll n,a,b,c,d;
    cin>>n>>a>>b>>c>>d;
    ll x;
    ll y;
    if(b>=a)
    {
        x=b-a;
    }
    else
    {
        x=(n-a)+b;
    }
    if(d<=c)
    {
        y=c-d;
    }
    else
    {
        y=(c-1)+(n-d)+1;
    }
    // cout<<x<<" "<<y<<endl;
    ll z=min(x,y);
    bool flag=false;
    for(ll i=1 ; i<=z ; i++)
    {
        if(a==b || c==d)
        {
            // flag=true;
            break;
        }
        a++;
        if(a==n+1)
        {
            a=1;
        }
        c--;
        if(c==0)
        {
            c=n;
        }
        if(a==c)
        {
            flag=true;
            break;
        }
    }
    if(flag==false)
    {
        cout<<"NO"<<endl;
    }
    else
    {
        cout<<"YES"<<endl;
    }
    
    return 0;
}