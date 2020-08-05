#include <iostream>
#include<string>
#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long int ll;
 
int main()
{
    ll n;
    cin>>n;
    ll count=0;
    while(n--)
    {
        ll a,b;
        cin>>a>>b;
        while(a<=count)
        {
            a=a+b;
        }
        count=a;
    }
    cout << count << endl;
    
    return 0;
}