#include <iostream>
#include <bits/stdc++.h>
#include <string>
#include <cmath>
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
using namespace std;
typedef long long int ll;
 
 
int main()
{
    fast;
    ll n;
    cin>>n;
    ll x1=0,x2=0,x3=0,x4=0;
    ll count1=0;
    ll count2=0;
    for(ll i=0 ;i<n ; i++)
    {
        ll a,b;
        cin>>a>>b;
        count1+=a;
        count2+=b;
        if(a%2==0&&b%2==0)
        {
            x1++;
        }
        else if(a%2!=0&&b%2!=0)
        {
            x2++;
        }
        else if(a%2==0&&b%2!=0)
        {
            x3++;
        }
        else if(a%2!=0&&b%2==0)
        {
            x4++;
        }
 
 
    }
    if(count1%2==0&&count2%2==0)
    {
        cout<<0<<endl;
    }
    else if((count1%2!=0&&count2%2==0)||(count1%2==0&&count2%2!=0))
    {
        cout<<-1<<endl;
    }
    else
    {
        if(n==1)
        {
            cout<<-1<<endl;
        }
        else
        {
            if(x3==0&&x4==0)
            {
                cout<<-1<<endl;
            }
            else
            {
                cout<<1<<endl;
            }
        }
    }
 
	return 0;
}