#include <iostream>
#include <bits/stdc++.h>
#include <string>
#include <cmath>
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
using namespace std;
typedef long long int ll;
 
 
int main()
{
    ll n;
    cin>>n;
    ll a[8];
    for(ll i=1 ; i<=7 ; i++)
    {
        cin>>a[i];
    }
    bool flag=true;
    ll curr;
    while(true)
    {
        for(ll i=1 ; i<=7 ; i++)
        {
            if(a[i]>=n)
            {
                curr=i;
                flag=false;
                break;
            }
            else
            {
                n=n-a[i];
            }
        }
        if(flag==false)
        {
            break;
        }
    }
    cout << curr << endl;
 
    return 0;
}