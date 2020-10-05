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
    ll x=sqrt(n);
    if(n%x==0)
    {
        cout<<n/x + (x-2)<<endl;
    }
    else
    {
        cout<<n/x+ x-1<<endl;
    }
 
 
}
 
int main()
{
    ll t;cin>>t;
    while(t--)
    {
        solve();
    }
 
 
    return 0;
}