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
ll gcd(ll a, ll b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
 
}
bool isPrime(ll n)
{
 
    if (n <= 1)
        return false;
    if (n <= 3)
        return true;
 
    if (n % 2 == 0 || n % 3 == 0)
        return false;
 
    for (ll i = 5; i * i <= n; i = i + 6)
        if (n % i == 0 || n % (i + 2) == 0)
            return false;
 
    return true;
}
 
 
void solve()
{
 
    ll n;cin>>n;
    ll a[n];
    bool flag=false;
    for(ll i=0 ; i<n ; i++)
    {
        cin>>a[i];
//        if(isPrime(a[i])==true)
//        {
//            flag=true;
//        }
    }
//    if(flag==true)
//    {
//        cout<<1<<endl;
//    }
//    else
//    {
        ll curr=a[0];
        for(ll i=1 ; i<n ; i++)
        {
            curr=gcd(curr,a[i]);
        }
        ll ans=0;
        for(ll i=1 ; i<=sqrt(curr) ; i++)
        {
            if(curr%i==0)
            {
                if(curr/i==i)
                {
                    ans++;
                }
                else
                {
                    ans+=2;
                }
            }
        }
        cout<<ans<<endl;
 
//    }
 
 
}
int main()
{
    fast;
    solve();
    return 0;
}