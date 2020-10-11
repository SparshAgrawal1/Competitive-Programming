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
    ll n;
    cin>>n;
    for(ll i=0 ; i<=334 ; i++)
    {
        for(ll j=0 ; j<=201 ; j++)
        {
            for(ll k=0 ; k<150 ; k++)
            {
                if(i*3 + j*5 + k*7 == n)
                {
                    cout<<i<<" "<<j<<" "<<k<<endl;
                    return;
                }
            }
        }
    }
    cout<<-1<<endl;
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