#include <iostream>
#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;
int main()
{
    ll n;
    cin>>n;
    ll a[n];
    ll count=0;
    ll c1=0;
    ll c2=0;
    ll c3=0;
    for(ll i=0; i<n ;i++)
    {
        cin>>a[i];
        if(a[i]%3==0)
        {
            c3++;
        }
        else if(a[i]%3==2)
        {
            c2++;
        }
        else
        {
            c1++;
        }
    }
    count+=(c3/2);
    count+=min(c1,c2);
    cout << count << endl;
    // cout << c3 << c2 << c1 << endl;
    
    
    return 0;
}