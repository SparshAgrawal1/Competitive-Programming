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
    
    ll n,m;
    cin>>n>>m;
    char a[n][m];
    for(ll i=0 ; i<n ; i++)
    {
        for(ll j=0 ; j<m ; j++)
        {
            cin>>a[i][j];
        }
    }
    bool t1=false;
    bool t2=false;
    char b[n][m]={'.'};
    char c[n][m]={'.'};
    char k='W';
    bool temp=false;
    for(ll i=0 ; i<n ; i++)
    {
        for(ll j=0 ; j<m  ; j++)
        {
            b[i][j]=k;
            if(k=='W')
            {
                k='R';
            }
            else
            {
                k='W';
            }
            
        }
        if(temp==false)
        {
            k='R';
        }
        else
        {
            k='W';
        }
        temp=!temp;
    }
    for(ll i=0 ; i<n ; i++)
    {
        for(ll j=0 ; j<m  ; j++)
        {
            if(b[i][j]=='W')
            {
                c[i][j]='R';
            }
            else
            {
                c[i][j]='W';
            }
            
        }
        
    }
    // for(ll i=0 ; i<n ; i++)
    // {
    //     for(ll j=0 ; j<m  ; j++)
    //     {
    //         cout<<b[i][j];
            
 
    //     }
    //     cout<<endl;
        
    // }
 
     for(ll i=0 ; i<n ; i++)
    {
        for(ll j=0 ; j<m  ; j++)
        {
            if(a[i][j]!='.')
            {
                if(a[i][j]!=b[i][j])
                {
                    t1=true;
                    break;
                }
            }
            
        }
    } 
     for(ll i=0 ; i<n ; i++)
    {
        for(ll j=0 ; j<m  ; j++)
        {
            if(a[i][j]!='.')
            {
                if(a[i][j]!=c[i][j])
                {
                    t2=true;
                    break;
                }
            }
            
        }
    }     
    if(t1==true&&t2==true)
    {
        cout<<"NO"<<endl;
    }
    else
    {
        cout<<"YES"<<endl;
        if(t1==false)
        {
            for(ll i=0 ; i<n ; i++)
            {
                for(ll j=0 ; j<m  ; j++)
                {
                    cout<<b[i][j];
                    
                }
                cout<<endl;
            } 
        }
        else if(t2==false)
        {
            for(ll i=0 ; i<n ; i++)
            {
                for(ll j=0 ; j<m  ; j++)
                {
                    cout<<c[i][j];
                    
                }
                cout<<endl;
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
