#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
 
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        cout << n/2 + n%2 << endl;
    }
    return 0;
}