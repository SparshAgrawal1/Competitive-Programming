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
 
bool sbs(const pair<ll,ll> &a,const pair<ll,ll> &b)
{
    return (a.second < b.second);
}
 
bool isPrime(ll num)
{
    bool flag=true;
    for(ll i = 2; i <= num / 2; i++) {
       if(num % i == 0) {
          flag = false;
          break;
       }
    }
    return flag;
}
 
bool sortbyvec(vector<double> v1,vector<double> v2)
{
    return v1[2]>v2[2];
}
 
 
void solve()
{
    ll a,b,c,d;
    cin>>a>>b>>c>>d;
    ll x,y,x1,x2,y1,y2;
    cin>>x>>y>>x1>>y1>>x2>>y2;
    ll d1=x-x1;
    ll d2=x2-x;
    ll e1=y-y1;
    ll e2=y2-y;
    bool f1=false;
    bool f2=false;
    if(a>=b)
    {
        if(d2==0)
        {
            if(d1>0)
            {
                a=a-b;
                if(d1>=a)
                {
                    f1=true;
                }
            }
            else
            {
                if(a==0&&b==0)
                {
                    f1=true;
                }
            }
        }
        else
        {
            if(b>=d2)
            {
                ll l=d2;
                b=b-d2;
                a=a-b;
//                cout<<a<<" "<<b<<endl;
                if(l+d1>=a)
                {
                    f1=true;
                }
            }
            else
            {
                ll l=b;
                if(l+d1>=a)
                {
                    f1=true;
                }
            }
        }
 
    }
    else
    {
        if(d1==0)
        {
            if(d2>0)
            {
                b=b-a;
                if(d2>=b)
                {
                    f1=true;
                }
            }
        }
        else
        {
            if(a>=d1)
            {
                ll l=d1;
                a=a-d1;
                b=b-a;
                if(l+d2>=b)
                {
                    f1=true;
                }
            }
            else
            {
                ll l=a;
                if(l+d2>=b)
                {
                    f1=true;
                }
            }
        }
 
    }
 
    a=c;
    b=d;
    d1=e1;
    d2=e2;
 
    if(a>=b)
    {
        if(d2==0)
        {
            if(d1>0)
            {
                a=a-b;
                if(d1>=a)
                {
                    f2=true;
                }
            }
            else
            {
                if(a==0&&b==0)
                {
                    f2=true;
                }
            }
        }
        else
        {
            if(b>=d2)
            {
                ll l=d2;
                b=b-d2;
                a=a-b;
//                cout<<a<<" "<<b<<endl;
                if(l+d1>=a)
                {
                    f2=true;
                }
            }
            else
            {
                ll l=b;
                if(l+d1>=a)
                {
                    f2=true;
                }
            }
        }
 
    }
    else
    {
        if(d1==0)
        {
            if(d2>0)
            {
                b=b-a;
                if(d2>=b)
                {
                    f2=true;
                }
            }
        }
        else
        {
            if(a>=d1)
            {
                ll l=d1;
                a=a-d1;
                b=b-a;
                if(l+d2>=b)
                {
                    f2=true;
                }
            }
            else
            {
                ll l=a;
                if(l+d2>=b)
                {
                    f2=true;
                }
            }
        }
 
    }
 
    if(f1==true&&f2==true)
    {
        cout<<"Yes"<<endl;
    }
    else
    {
        cout<<"No"<<endl;
    }
 
}
 
int main()
{
    fast;
	ll t;
    cin>>t;
	while(t--)
    {
        solve();
    }
 
 
	return 0;
}