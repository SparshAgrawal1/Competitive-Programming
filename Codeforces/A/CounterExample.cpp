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
 
 
void solve()
{
 
    ll l,r;
    cin>>l>>r;
    if(r-l+1<3)
    {
        cout<<-1;
        return;
    }
    ll x=-1;
    if(l%2==0)
    {
        for(ll i=l+2 ; i<=r ; i++)
        {
            if(__gcd(l+1,i)==1&&__gcd(l,i)!=1)
            {
                x=i;
                break;
            }
        }
        if(x==-1)
        {
            cout<<-1;
            return;
        }
        cout<<l<<" "<<l+1<<" "<<x;
        return;
    }
    else
    {
        for(ll i=l+3 ; i<=r ; i++)
        {
            if(__gcd(l+2,i)==1&&__gcd(l+1,i)!=1)
            {
                x=i;
                break;
            }
        }
        if(x==-1)
        {
            cout<<-1;
            return;
        }
        cout<<l+1<<" "<<l+2<<" "<<x;
        return;
    }
 
 
 
 
}
 
int main()
{
    ll t=1;
//    cin>>t;
    while(t--)
    {
        solve();
    }
 
 
    return 0;
}
