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
 
    ll a;cin>>a;
    ll curr=0;
    curr+=a/7;
    a=a%7;
    if(a>1)
    {
        cout<<curr+1<<endl;
    }
    else if(a==0)
    {
        cout<<curr<<endl;
    }
    else if(a==1)
    {
        cout<<curr+1<<endl;
    }
}
 
int main()
{
    ll t;
cin>>t;
    while(t--)
    {
        solve();
    }
 
 
    return 0;
}
