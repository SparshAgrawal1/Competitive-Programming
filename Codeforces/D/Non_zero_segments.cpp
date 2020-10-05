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
 
    int n;
    cin>>n;
    int a[n];
    for(int i=0 ; i<n ; i++)
    {
        cin>>a[i];
    }
    ll ans=0;
    ll l=0;
    set<ll> s;
    s.insert(0);
    for(ll i=0 ; i<n ; i++)
    {
        l+=a[i];
        if(s.find(l)!=s.end())
        {
            ans++;
            s.clear();
            s.insert(0);
            s.insert(a[i]);
            l=a[i];
        }
        else
        {
            s.insert(l);
        }
    }
    cout<<ans<<endl;
 
 
 
}
 
int main()
{
//    ll t;cin>>t;
//    while(t--)
//    {
        solve();
//    }
 
 
    return 0;
}