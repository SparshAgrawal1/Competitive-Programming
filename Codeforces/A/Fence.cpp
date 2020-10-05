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
 
    ll a,b,c;
    cin>>a>>b>>c;
    vector<ll> v;
    v.push_back(a);v.push_back(b);v.push_back(c);
    sort(v.begin(),v.end());
    ll x=powl(v[1],2);
    ll y=v[2]-v[0];
    y=powl(y,2);
    x=x+y;
    ll z=sqrt(x);
    z++;
    cout<<z<<endl;
 
 
 
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
}#include <iostream>
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
    ll cnt=0;
    while(n>1)
    {
 
        ll x=24*n;
        x=x+1;
        x=sqrt(x);
        x=x-1;
        x=x/6;
        ll y = (x*(x+1))+(x*(x-1))/2;
        n=n-y;
        cnt++;
 
 
    }
    cout<<cnt<<endl;
 
 
 
 
 
 
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
