#include <bits/stdc++.h>
#include<iostream>
using namespace std;
 
 
 
int main()
{
    long long int t;
    cin>>t;
    while(t--)
    {
        long long int n;cin>>n;
        if(n%2!=0)
        {
            cout << n/2 << endl;
        }
        else
        {
            cout << (n-1)/2 << endl;
        }
    }
    return 0;
}
