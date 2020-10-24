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
int main()
{
    fast;
    ll t;
    cin>>t;
 
 
    while(t--)
    {
        ll n;
        cin>>n;
        if(isPrime(n)==true)
        {
            for(ll i=0 ; i<n ; i++)
            {
                for(ll j=0 ; j<n ; j++)
                {
                    cout<<1<<" ";
                }
                cout<<endl;
            }
        }
        else
        {
            ll l=n-1;
            ll h=-1;
            for(ll i=1 ; i<100 ; i++)
            {
                if(isPrime(l+i)==true&&isPrime(i)==false)
                {
                    h=i;
                    break;
                }
            }
            for(ll i=1 ; i<=n ; i++)
            {
                for(ll j=1 ; j<=n ; j++)
                {
                    if(i==j)
                    {
                        cout<<h<<" ";
                    }
                    else
                    {
                        cout<<1<<" ";
                    }
                }
                cout<<endl;
            }
        }
 
 
    }
    return 0;
}