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
 
void xxxx(map<ll,vector<pair<ll,ll>>> p, ll l, vector<ll> a, bool b[])
{
            b[l]=true;
            for(auto x:p[l])
            {
                ll y1=x.first;
                ll y2=x.second;
                a[y1]=min(a[y1],a[l]+y2);
                xxxx(p,y1,a,b);
            }
}
void solve()
{
    
    ll n,m,i,j;
    cin>>n>>m>>i>>j;
    if(i==1)
    {
        if(j==1)
        {
            cout<<n<<" "<<m<<" ";
            if(m>1)
            {
                cout<<i<<" "<<j+1<<endl;
            }
            else if(n>1)
            {
                cout<<i+1<<" "<<j<<endl;
            }
            else
            {
                cout<<i<<" "<<j<<endl;
            }
 
        }
        else if(j==m)
        {
            cout<<n<<" "<<1<<endl;
            if(m>1)
            {
                cout<<i<<" "<<j-1<<endl;
            }
            else if(n>1)
            {
                cout<<i+1<<" "<<j<<endl;
            }
            else
            {
                cout<<i<<" "<<j<<endl;
            }
 
        }
        else
        {
            cout<<n<<" "<<m<<" "<<n<<" "<<1<<endl;
        }
    }
    else if(i==n)
    {
        if(j==1)
        {
            cout<<1<<" "<<m<<" ";
            if(m>1)
            {
                cout<<i<<" "<<j+1<<endl;
            }
            else if(n>1)
            {
                cout<<i-1<<" "<<j<<endl;
            }
            else
            {
                cout<<i<<" "<<j<<endl;
            }
 
        }
        else if(j==m)
        {
            cout<<1<<" "<<1<<endl;
            if(m>1)
            {
                cout<<i<<" "<<j-1<<endl;
            }
            else if(n>1)
            {
                cout<<i-1<<" "<<j<<endl;
            }
            else
            {
                cout<<i<<" "<<j<<endl;
            }
 
        }
        else
        {
            cout<<1<<" "<<1<<" "<<1<<" "<<m<<endl;
        }
    }
    else
    {
        if(j==1)
        {
            cout<<n<<" "<<m<<" "<<1<<" "<<m<<endl;
        }
        else if(j==m)
        {
            cout<<1<<" "<<1<<" "<<n<<" "<<1<<endl;
        }
        else
        {
            ll a1=abs(i-1)+abs(j-1);
            a1+=abs(n-1)+abs(m-1);
            a1+=abs(n-i)+abs(m-j);
 
            ll a2=abs(i-n)+abs(j-1);
            a2+=abs(n-1)+abs(m-1);
            a2+=abs(n-1)+abs(m-j);
 
            if(a1>=a2)
            {
                cout<<1<<" "<<1<<" "<<n<<" "<<m<<endl;
            }
            else
            {
                cout<<n<<" "<<1<<" "<<1<<" "<<m<<endl;
            }
        }
    }
 
}
 
int main()
{
    fast;
#ifndef ONLINE_JUDGE
  freopen("input.txt", "r" , stdin);
  freopen("output.txt", "w", stdout);
#endif
	ll t;
   cin>>t;
    // t=1;
	while(t--)
    {
        solve();
        
    }
 
 
	return 0;
}