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
 
    char a[5][5];
    for(ll i=1 ; i<=4 ; i++)
    {
        for(ll j=1 ; j<=4 ; j++)
        {
            cin>>a[i][j];
        }
    }
    for(ll i=1 ; i<4 ; i++)
    {
        for(ll j=1 ; j<4 ; j++)
        {
            ll ans1=0,ans2=0;
            char a1,a2,a3,a4;
            a1=a[i][j];
            a2=a[i+1][j];
            a3=a[i][j+1];
            a4=a[i+1][j+1];
            if(a1=='#')
            {
                ans1++;
            }
            else
            {
                ans2++;
            }
            if(a2=='#')
            {
                ans1++;
            }
            else
            {
                ans2++;
            }
            if(a3=='#')
            {
                ans1++;
            }
            else
            {
                ans2++;
            }
            if(a4=='#')
            {
                ans1++;
            }
            else
            {
                ans2++;
            }
            if(ans1>=3||ans2>=3)
            {
                cout<<"YES";
                return;
            }
        }
    }
    cout<<"NO";
    return;
}
 
int main()
{
    ll t=1;
 
    while(t--)
    {
        solve();
    }
 
 
    return 0;
}